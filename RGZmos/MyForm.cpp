#include "MyForm.h"



//Точка входа
[STAThreadAttribute]void main(array<String^>^ args) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    RGZmos::MyForm form;
    Application::Run(% form);
}

System::Void RGZmos::MyForm::buttonGraf_Click(System::Object^ sender, System::EventArgs^ e)
{
    if ((textBoxdt->Text->Length == 0) || (textBoxkf->Text->Length == 0) || (textBoxL->Text->Length == 0) || (textBoxdw->Text->Length == 0) || (textBox_w->Text->Length == 0) || (textBoxW->Text->Length == 0)) {
        MessageBox::Show("Введите все параметры", "Ошибка");
        return System::Void();
    }

    double w_f = Convert::ToDouble(textBox_w->Text);
    double W_f = Convert::ToDouble(textBoxW->Text);
    double d_w = Convert::ToDouble(textBoxdw->Text);
    double k_f = Convert::ToDouble(textBoxkf->Text);
    double d_t = Convert::ToDouble(textBoxdt->Text);
    int L = Convert::ToInt32(textBoxL->Text);
    Filter fil(L);
    int N = 2 * L + 1;
    
    fil.proekt(w_f, W_f, d_w, k_f, d_t, L);
    double omega = fil.getOmega();
   double omega_b = fil.getOmega_b();
   size_t j;
    if ((checkBoxImp->Checked == false) && (checkBoxA->Checked == false) && (checkBoxF->Checked == false) && (checkBoxY->Checked == false) && (checkBoxY_K->Checked == false) && (checkBoxY_ID->Checked == false) && (checkBoxX->Checked == false)) {
        MessageBox::Show("Выберите какой график построить", "Ошибка");
        return System::Void();
    }
    if (checkBoxImp->Checked == true) {
        if (this->chart->Series[0]->IsVisibleInLegend == true) { this->chart->Series[0]->Points->Clear(); }
        this->chart->Series[0]->IsVisibleInLegend = true;
        this->chart->Titles[1]->Text = "Wk(w)";
        this->chart->Titles[0]->Text = "t, с";
        j = 0;
        for (double i = omega; i < 2*omega_b; i += omega) {
            y = fil.atW_K(j);
            x = i;
            j++;
            this->chart->Series[0]->Points->AddXY(x, y);
        }  
    }
    else {
        this->chart->Series[0]->IsVisibleInLegend = false;
        this->chart->Series[0]->Points->Clear();
    }
    if (checkBoxA->Checked == true) {
        if (this->chart->Series[1]->IsVisibleInLegend == true) { this->chart->Series[1]->Points->Clear(); }
        this->chart->Titles[1]->Text = "A(w)";
        this->chart->Titles[0]->Text = "w, рад/с";
        this->chart->Series[1]->IsVisibleInLegend = true;
        j = 0;
        for (double i = omega; i < omega_b; i += omega) {
            y = fil.atAchH(j);
            x = i;
            j++;
            this->chart->Series[1]->Points->AddXY(x, y);
        }
    }
    else {
        this->chart->Series[1]->IsVisibleInLegend = false;
        this->chart->Series[1]->Points->Clear();
    }
    if (checkBoxF->Checked == true) {
        if (this->chart->Series[2]->IsVisibleInLegend == true) { this->chart->Series[2]->Points->Clear(); }
        this->chart->Titles[1]->Text = "Fi(w)";
        this->chart->Titles[0]->Text = "w, рад/с";
        this->chart->Series[2]->IsVisibleInLegend = true;
        j = 0;
        for (double i = omega; i < omega_b; i+=omega) {
            y = fil.atFchH(j);
            x = i;
            j++;
            this->chart->Series[2]->Points->AddXY(x, y);
        }
    }
    else {
        this->chart->Series[2]->IsVisibleInLegend = false;
        this->chart->Series[2]->Points->Clear();
    }
    textBoxTau->Text = Convert::ToString(fil.atTau(1));
    
    if (checkBoxY->Checked == true) {
        if (this->chart->Series[3]->IsVisibleInLegend == true) { this->chart->Series[3]->Points->Clear(); }
        this->chart->Titles[1]->Text = "y(t)";
        this->chart->Titles[0]->Text = "t, с";
        this->chart->Series[3]->IsVisibleInLegend = true;
        j = 0;
        for (double i = omega; i < 2*omega_b; i += omega) {
            y = fil.getY(j);
            x = i;
            j++;
            this->chart->Series[3]->Points->AddXY(x, y);
        }
    }
    else {
        this->chart->Series[3]->IsVisibleInLegend = false;
        this->chart->Series[3]->Points->Clear();
    }

    if (checkBoxX->Checked == true) {
        if (this->chart->Series[4]->IsVisibleInLegend == true) { this->chart->Series[4]->Points->Clear(); }
        this->chart->Titles[1]->Text = "x(t)";
        this->chart->Titles[0]->Text = "t, с";
        this->chart->Series[4]->IsVisibleInLegend = true;
        j = 0;
        for (double i = 0; i < 2*omega_b; i += omega) {
            y = fil.getX(j);
            x = i;
            j++;
            this->chart->Series[4]->Points->AddXY(x, y);
        }
    }
    else {
        this->chart->Series[4]->IsVisibleInLegend = false;
        this->chart->Series[4]->Points->Clear();
    }

    if (checkBoxY_ID->Checked == true) {
        if (this->chart->Series[5]->IsVisibleInLegend == true) { this->chart->Series[5]->Points->Clear(); }
        this->chart->Titles[1]->Text = "y*(t)";
        this->chart->Titles[0]->Text = "t, с";
        this->chart->Series[5]->IsVisibleInLegend = true;
        j = 0;
        for (double i = omega; i < omega_b; i += omega) {
            y = fil.getY_ID(j);
            x = i;
            j++;
            this->chart->Series[5]->Points->AddXY(x, y);
        }
    }
    else {
        this->chart->Series[5]->IsVisibleInLegend = false;
        this->chart->Series[5]->Points->Clear();
    }
    if (checkBoxY_K->Checked == true) {
        if (this->chart->Series[6]->IsVisibleInLegend == true) { this->chart->Series[6]->Points->Clear(); }
        this->chart->Titles[1]->Text = "y'(t)";
        this->chart->Titles[0]->Text = "t, с";
        this->chart->Series[6]->IsVisibleInLegend = true;
        j = 0;
        double k = omega;
        System::IO::StreamWriter^ ys = gcnew System::IO::StreamWriter("C:\\rgz\\Y_sh.txt");
        for (double i = omega; i < 2*omega_b - omega; i += omega) {
            if (i >= omega_b) {
                y = fil.getY(j);
                x = k;
                k += omega;
                String^ s = Convert::ToString(j) + ". ";
                ys->Write(s);
                ys->WriteLine(Convert::ToString(y));
            }
            j++;
            this->chart->Series[6]->Points->AddXY(x, y);
        }
        ys->Close();
        delete ys;
    }
    else {
        this->chart->Series[6]->IsVisibleInLegend = false;
        this->chart->Series[6]->Points->Clear();
    }
    return System::Void();
}

System::Void RGZmos::MyForm::оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Программа была написана в ходе выполнения расчётно-графического задания по дисциплине \n'Методы обработки сигналов'. \n(с) Жиляев Максим. АА-07. Вариант 23.","Информация о программе");
    return System::Void();
}

System::Void RGZmos::MyForm::выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (MessageBox::Show("Вы точно хотите выйти?", "Внимание", MessageBoxButtons::YesNo) == Windows::Forms::DialogResult::Yes) {
        Application::Exit();
    }
}

System::Void RGZmos::MyForm::buttonHen_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("C:\\rgz\\SM.txt");
    return System::Void();
}

System::Void RGZmos::MyForm::buttonFur_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("C:\\rgz\\KF.txt");
    return System::Void();
}

System::Void RGZmos::MyForm::buttonImp_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("C:\\rgz\\IH.txt");
    return System::Void();
}

System::Void RGZmos::MyForm::buttonA_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("C:\\rgz\\AchH.txt");
    return System::Void();
}

System::Void RGZmos::MyForm::buttonF_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("C:\\rgz\\FchH.txt");
    return System::Void();
}

System::Void RGZmos::MyForm::buttonTau_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("C:\\rgz\\tau.txt");
    return System::Void();
}

System::Void RGZmos::MyForm::MyForm_Shown(System::Object^ sender, System::EventArgs^ e)
{
    textBox_w->Text = "9";
    textBoxW->Text = "12";
    textBoxdw->Text = "1";
    textBoxkf->Text = "1";
    textBoxdt->Text = "0,1";
    textBoxL->Text = "150";
    return System::Void();
}

System::Void RGZmos::MyForm::textBoxW_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!Char::IsDigit(ch) && ch != 8 && (ch != ',' || textBoxW->Text->Contains(","))) {
        e->Handled = true;
    }
    return System::Void();
}

System::Void RGZmos::MyForm::textBox_w_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!Char::IsDigit(ch) && ch != 8 && (ch != ',' || textBox_w->Text->Contains(","))) {
        e->Handled = true;
    }
    return System::Void();
}

System::Void RGZmos::MyForm::textBoxdw_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!Char::IsDigit(ch) && ch != 8 && (ch != ',' || textBoxdw->Text->Contains(","))) {
        e->Handled = true;
    }
    return System::Void();
}

System::Void RGZmos::MyForm::textBoxL_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!Char::IsDigit(ch) && ch != 8 && (ch != ',' || textBoxL->Text->Contains(","))) {
        e->Handled = true;
    }
    return System::Void();
}

System::Void RGZmos::MyForm::textBoxkf_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!Char::IsDigit(ch) && ch != 8 && (ch != ',' || textBoxkf->Text->Contains(","))) {
        e->Handled = true;
    }
    return System::Void();
}

System::Void RGZmos::MyForm::textBoxdt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e)
{
    char ch = e->KeyChar;
    if (!Char::IsDigit(ch) && ch != 8 && (ch != ',' || textBoxdt->Text->Contains(","))) {
        e->Handled = true;
    }
    return System::Void();
}


