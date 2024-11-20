#pragma once
#ifndef THIS_HEADER
#define THIS_HEADER

using namespace System;
using namespace System::Windows::Forms;

class Filter {
    //объ€вление необходимых параметров и массивов данных
private:
    const double pi = 3.1415926535;
    const double ro = 0.5;
    double *sig;
    double *a_k;
    double *w_k;
    double *AchH;
    double *FchH;
    double *tau;
    double *y;
    double *y_id;
    double *x;
    int N{};
    double omega_b{};
    double omega{};
    double omega1_p{};
    double omega2_p{};
    double a_0{};
    double w_l{};
public:
    Filter(int L);
    double atAchH(size_t index);
    double atFchH(size_t index);
    double atW_K(size_t index);
    double atTau(size_t index);
    double getOmega() const {
        return omega;
    }
    double getOmega_b() {
        return omega_b;
    }
    double getY(size_t index);
    double getX(size_t index);
    double getY_ID(size_t index);
    double X_(int j, double d_t);
    double X_dop(int j, double d_t, double t_f);
    void proekt(double omega1_f, double omega2_f, double d_omega, double k_f, double d_t, int L);
};
#endif