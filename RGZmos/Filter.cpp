#include "Filter.h"

Filter::Filter(int L)
{
    sig = new double[L];
    a_k = new double[L];
    w_k = new double[2*L];
    AchH = new double[L];
    FchH = new double[L];
    tau = new double[L];
    y = new double[2*L];
    x = new double[2*L];
    y_id = new double[2*L];
}

double Filter::atAchH(size_t index)
{
	return AchH[index];
}

double Filter::atFchH(size_t index)
{
	return FchH[index];;
}

double Filter::atW_K(size_t index)
{
	return w_k[index];
}

double Filter::atTau(size_t index)
{
    return tau[index];
}

double Filter::getY(size_t index)
{
    return y[index];
}

double Filter::getX(size_t index)
{
    return x[index];
}

double Filter::getY_ID(size_t index)
{
    return y_id[index];
}

double Filter::X_(int j, double d_t)
{
    if (j < 0) return 0;
    else
        return Math::Sin(1 * j * d_t) + Math::Sin(11 * j * d_t) + Math::Sin(21 * j * d_t);
}

double Filter::X_dop(int j, double d_t, double t_f)
{
    if (j < 0) return 0;
    else
        return Math::Sin(1 * j * d_t - t_f) + Math::Sin(11 * j * d_t - t_f) + Math::Sin(21 * j * d_t - t_f);
}

void Filter::proekt(double omega1_f, double omega2_f, double d_omega, double k_f, double d_t, int L)
{
    String^ s;
    int j;
    N = 2 * L + 1;
    omega_b = pi / d_t;
    omega = (2 * pi) / (N * d_t);
    omega1_p = omega1_f + d_omega / 2;
    omega2_p = omega2_f - d_omega / 2;
    a_0 = 2 * k_f * (1 - (omega2_p - omega1_p) / omega_b);
    w_l = k_f * (1 - (omega2_p - omega1_p) / omega_b);

    System::IO::StreamWriter^ sm = gcnew System::IO::StreamWriter("C:\\rgz\\SM.txt");
    sm->WriteLine("Сглаживающие множители:");
    for (int i = 0; i < L; i++)             // Расчет значений сглаживающих множителей 
    {
        sig[i] = ro + (1 - ro) * System::Math::Cos(i * pi / L);
        s = Convert::ToString(i) + ". ";
        sm->Write(s);
        sm->WriteLine(Convert::ToString(sig[i]));
    }
    sm->Close();
    delete sm;

    System::IO::StreamWriter^ kf = gcnew System::IO::StreamWriter("C:\\rgz\\KF.txt");
    kf->WriteLine("Коэффициенты ряда Фурье:");
    kf->Write("0. ");
    kf->WriteLine(Convert::ToString(a_0));
    for (int i = 1; i < L; i++)             // Расчет коэффициентов ряда Фурье 
    {
        a_k[i] = (2 * k_f * (System::Math::Sin(i * d_t * omega1_p) - System::Math::Sin(i * d_t * omega2_p))) / (i * pi);
        s = Convert::ToString(i) + ". ";
        kf->Write(s);
        kf->WriteLine(Convert::ToString(a_k[i]));
    }
    kf->Close();
    delete kf;

    System::IO::StreamWriter^ ih = gcnew System::IO::StreamWriter("C:\\rgz\\IH.txt");
    ih->WriteLine("Отсчеты имульсной характеристики:");

    for (int k = 0; k < 2 * L; k++) {    //Расчет ИХ
        if (k < L) {
            w_k[k] = 0.5 * sig[L - k] * a_k[L - k];
        }
        else {
            w_k[k] = 0.5 * sig[k - L] * a_k[k - L];
        }
        if (k == L) {
            w_k[k] = 0.5 * sig[k - L] * a_0;
        }
        s = Convert::ToString(k) + ". ";
        ih->Write(s);
        ih->WriteLine(Convert::ToString(w_k[k]));
    }
    ih->Close();
    delete ih;

    System::IO::StreamWriter^ ach = gcnew System::IO::StreamWriter("C:\\rgz\\AchH.txt");
    System::IO::StreamWriter^ fch = gcnew System::IO::StreamWriter("C:\\rgz\\FchH.txt");
    ach->WriteLine("Значения амплитудно-частотной характеристики");
    fch->WriteLine("Значения фазо-частотной характеристики");
    j = 0;
    for (double i = omega; i < omega_b; i += omega) { //Расчет АЧХ и ФЧХ
        double sum = 0;
        for (int k = 1; k < L; k++) {
            sum += w_k[L - k] * Math::Cos(k * d_t * i);
        }
        s = Convert::ToString(j) + ". ";
        AchH[j] = System::Math::Abs(w_k[L] + 2 * sum);
        ach->WriteLine(s);
        ach->WriteLine(Convert::ToString(AchH[j]));
        FchH[j] = -L * d_t * i;
        fch->Write(s);
        fch->WriteLine(Convert::ToString(FchH[j]));
        j++;
    }
    fch->Close();
    delete fch;
    ach->Close();
    delete ach;

    System::IO::StreamWriter^ ta = gcnew System::IO::StreamWriter("C:\\rgz\\tau.txt");
    j = 0;
    for (double i = omega; i < omega_b; i += omega) { //Расчет фазовой задержки
        tau[j] = -FchH[j] / i;
        s = Convert::ToString(i) + ". ";
        ta->Write(s);
        ta->WriteLine(Convert::ToString(tau[j]));
        j++;
    }
    ta->Close();
    delete ta;
   
    System::IO::StreamWriter^ xk = gcnew System::IO::StreamWriter("C:\\rgz\\X.txt");
    j = 0;
    for (int i = 0; i < 2*L; i++) { //Входной сигнал
        x[i] = X_(i, d_t);
        s = Convert::ToString(i) + ". ";
        xk->Write(s);
        xk->WriteLine(Convert::ToString(x[i]));
    }
    xk->Close();
    delete xk;
    
    System::IO::StreamWriter^ yi = gcnew System::IO::StreamWriter("C:\\rgz\\Y_id.txt");
    for (int j = 0; j < 2*L; j++) { //Идеальный выходной сигнал
        y_id[j] = k_f * (Math::Sin(j*d_t) + Math::Sin(21*j*d_t));
        s = Convert::ToString(j) + ". ";
        yi->Write(s);
        yi->WriteLine(Convert::ToString(y_id[j]));
    }
    yi->Close();
    delete yi;

    System::IO::StreamWriter^ yk = gcnew System::IO::StreamWriter("C:\\rgz\\Y.txt");
    for (int k = 0; k < 2 * L; k++) { //Выходной сигнал
        double sum = 0;
        for (int i = 0; i < L; i++) {
            sum += w_k[i] * (X_((k - i), d_t) + X_((k - (2 * L - i)), d_t));
        }
        s = Convert::ToString(k) + ". ";
        y[k] = w_k[L] * X_((k - L), d_t) + sum;
        yk->Write(s);
        yk->WriteLine(Convert::ToString(y[k]));
    }
    yk->Close();
    delete yk;
}
