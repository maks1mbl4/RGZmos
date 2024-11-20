#pragma once
#include "Filter.h"
namespace RGZmos {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
	protected:

	protected:



	protected:



	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ оПрограммеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ выходToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ buttonF;
	private: System::Windows::Forms::Button^ buttonA;
	private: System::Windows::Forms::Button^ buttonImp;
	private: System::Windows::Forms::Button^ buttonFur;
	private: System::Windows::Forms::Button^ buttonHen;
	private: System::Windows::Forms::Button^ buttonGraf;
	private: System::Windows::Forms::CheckBox^ checkBoxImp;
	private: System::Windows::Forms::CheckBox^ checkBoxA;
	private: System::Windows::Forms::CheckBox^ checkBoxF;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Button^ buttonTau;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBoxTau;
	private: System::Windows::Forms::TextBox^ textBoxW;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBoxdt;

	private: System::Windows::Forms::TextBox^ textBoxkf;

	private: System::Windows::Forms::TextBox^ textBoxL;

	private: System::Windows::Forms::TextBox^ textBoxdw;

	private: System::Windows::Forms::TextBox^ textBox_w;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::CheckBox^ checkBoxY;
	private: System::Windows::Forms::CheckBox^ checkBoxX;
	private: System::Windows::Forms::CheckBox^ checkBoxY_K;

	private: System::Windows::Forms::CheckBox^ checkBoxY_ID;




	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea2 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series8 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series9 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series10 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series11 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series12 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series13 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^ series14 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Title^ title3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			System::Windows::Forms::DataVisualization::Charting::Title^ title4 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
			this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->оПрограммеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->выходToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->buttonTau = (gcnew System::Windows::Forms::Button());
			this->buttonF = (gcnew System::Windows::Forms::Button());
			this->buttonA = (gcnew System::Windows::Forms::Button());
			this->buttonImp = (gcnew System::Windows::Forms::Button());
			this->buttonFur = (gcnew System::Windows::Forms::Button());
			this->buttonHen = (gcnew System::Windows::Forms::Button());
			this->buttonGraf = (gcnew System::Windows::Forms::Button());
			this->checkBoxImp = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxA = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxF = (gcnew System::Windows::Forms::CheckBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBoxTau = (gcnew System::Windows::Forms::TextBox());
			this->textBoxW = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBoxdt = (gcnew System::Windows::Forms::TextBox());
			this->textBoxkf = (gcnew System::Windows::Forms::TextBox());
			this->textBoxL = (gcnew System::Windows::Forms::TextBox());
			this->textBoxdw = (gcnew System::Windows::Forms::TextBox());
			this->textBox_w = (gcnew System::Windows::Forms::TextBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->checkBoxY = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxX = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxY_K = (gcnew System::Windows::Forms::CheckBox());
			this->checkBoxY_ID = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->SuspendLayout();
			// 
			// chart
			// 
			chartArea2->Name = L"ChartArea1";
			this->chart->ChartAreas->Add(chartArea2);
			legend2->Name = L"Legend1";
			this->chart->Legends->Add(legend2);
			this->chart->Location = System::Drawing::Point(12, 27);
			this->chart->Name = L"chart";
			series8->BorderWidth = 3;
			series8->ChartArea = L"ChartArea1";
			series8->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series8->IsVisibleInLegend = false;
			series8->Legend = L"Legend1";
			series8->Name = L"ИХ";
			series9->BorderWidth = 3;
			series9->ChartArea = L"ChartArea1";
			series9->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series9->Color = System::Drawing::Color::Red;
			series9->IsVisibleInLegend = false;
			series9->Legend = L"Legend1";
			series9->MarkerBorderWidth = 2;
			series9->Name = L"АЧХ";
			series10->BorderWidth = 3;
			series10->ChartArea = L"ChartArea1";
			series10->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series10->IsVisibleInLegend = false;
			series10->Legend = L"Legend1";
			series10->Name = L"ФЧХ";
			series11->BorderWidth = 3;
			series11->ChartArea = L"ChartArea1";
			series11->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series11->Color = System::Drawing::Color::Green;
			series11->IsVisibleInLegend = false;
			series11->Legend = L"Legend1";
			series11->Name = L"Y";
			series12->BorderWidth = 3;
			series12->ChartArea = L"ChartArea1";
			series12->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series12->IsVisibleInLegend = false;
			series12->Legend = L"Legend1";
			series12->Name = L"X";
			series13->BorderWidth = 3;
			series13->ChartArea = L"ChartArea1";
			series13->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series13->Color = System::Drawing::Color::Red;
			series13->IsVisibleInLegend = false;
			series13->Legend = L"Legend1";
			series13->Name = L"Y*";
			series14->BorderWidth = 3;
			series14->ChartArea = L"ChartArea1";
			series14->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series14->Color = System::Drawing::Color::Blue;
			series14->IsVisibleInLegend = false;
			series14->Legend = L"Legend1";
			series14->Name = L"Y\'";
			this->chart->Series->Add(series8);
			this->chart->Series->Add(series9);
			this->chart->Series->Add(series10);
			this->chart->Series->Add(series11);
			this->chart->Series->Add(series12);
			this->chart->Series->Add(series13);
			this->chart->Series->Add(series14);
			this->chart->Size = System::Drawing::Size(1371, 409);
			this->chart->TabIndex = 1;
			this->chart->Text = L"chart2";
			title3->Alignment = System::Drawing::ContentAlignment::BottomCenter;
			title3->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
			title3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title3->Name = L"Title1";
			title4->Alignment = System::Drawing::ContentAlignment::TopRight;
			title4->BorderWidth = 2;
			title4->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
			title4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			title4->Name = L"Title2";
			title4->ShadowColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			title4->TextOrientation = System::Windows::Forms::DataVisualization::Charting::TextOrientation::Horizontal;
			this->chart->Titles->Add(title3);
			this->chart->Titles->Add(title4);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->оПрограммеToolStripMenuItem,
					this->выходToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1395, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// оПрограммеToolStripMenuItem
			// 
			this->оПрограммеToolStripMenuItem->Name = L"оПрограммеToolStripMenuItem";
			this->оПрограммеToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->оПрограммеToolStripMenuItem->Text = L"О программе";
			this->оПрограммеToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::оПрограммеToolStripMenuItem_Click);
			// 
			// выходToolStripMenuItem
			// 
			this->выходToolStripMenuItem->Name = L"выходToolStripMenuItem";
			this->выходToolStripMenuItem->Size = System::Drawing::Size(54, 20);
			this->выходToolStripMenuItem->Text = L"Выход";
			this->выходToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::выходToolStripMenuItem_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->buttonTau);
			this->groupBox2->Controls->Add(this->buttonF);
			this->groupBox2->Controls->Add(this->buttonA);
			this->groupBox2->Controls->Add(this->buttonImp);
			this->groupBox2->Controls->Add(this->buttonFur);
			this->groupBox2->Controls->Add(this->buttonHen);
			this->groupBox2->Controls->Add(this->buttonGraf);
			this->groupBox2->Location = System::Drawing::Point(318, 488);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(448, 105);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Команды";
			// 
			// buttonTau
			// 
			this->buttonTau->Location = System::Drawing::Point(345, 19);
			this->buttonTau->Name = L"buttonTau";
			this->buttonTau->Size = System::Drawing::Size(93, 35);
			this->buttonTau->TabIndex = 6;
			this->buttonTau->Text = L"Значения ФЗ";
			this->buttonTau->UseVisualStyleBackColor = true;
			this->buttonTau->Click += gcnew System::EventHandler(this, &MyForm::buttonTau_Click);
			// 
			// buttonF
			// 
			this->buttonF->Location = System::Drawing::Point(345, 60);
			this->buttonF->Name = L"buttonF";
			this->buttonF->Size = System::Drawing::Size(93, 35);
			this->buttonF->TabIndex = 5;
			this->buttonF->Text = L"Значения ФЧХ";
			this->buttonF->UseVisualStyleBackColor = true;
			this->buttonF->Click += gcnew System::EventHandler(this, &MyForm::buttonF_Click);
			// 
			// buttonA
			// 
			this->buttonA->Location = System::Drawing::Point(246, 60);
			this->buttonA->Name = L"buttonA";
			this->buttonA->Size = System::Drawing::Size(93, 35);
			this->buttonA->TabIndex = 4;
			this->buttonA->Text = L"Значения АЧХ";
			this->buttonA->UseVisualStyleBackColor = true;
			this->buttonA->Click += gcnew System::EventHandler(this, &MyForm::buttonA_Click);
			// 
			// buttonImp
			// 
			this->buttonImp->Location = System::Drawing::Point(147, 60);
			this->buttonImp->Name = L"buttonImp";
			this->buttonImp->Size = System::Drawing::Size(93, 35);
			this->buttonImp->TabIndex = 3;
			this->buttonImp->Text = L"Отсчеты ИХ";
			this->buttonImp->UseVisualStyleBackColor = true;
			this->buttonImp->Click += gcnew System::EventHandler(this, &MyForm::buttonImp_Click);
			// 
			// buttonFur
			// 
			this->buttonFur->Location = System::Drawing::Point(247, 19);
			this->buttonFur->Name = L"buttonFur";
			this->buttonFur->Size = System::Drawing::Size(93, 35);
			this->buttonFur->TabIndex = 2;
			this->buttonFur->Text = L"Коэффициенты ряда Фурье";
			this->buttonFur->UseVisualStyleBackColor = true;
			this->buttonFur->Click += gcnew System::EventHandler(this, &MyForm::buttonFur_Click);
			// 
			// buttonHen
			// 
			this->buttonHen->Location = System::Drawing::Point(147, 19);
			this->buttonHen->Name = L"buttonHen";
			this->buttonHen->Size = System::Drawing::Size(94, 35);
			this->buttonHen->TabIndex = 1;
			this->buttonHen->Text = L"Сглаживающие множители";
			this->buttonHen->UseVisualStyleBackColor = true;
			this->buttonHen->Click += gcnew System::EventHandler(this, &MyForm::buttonHen_Click);
			// 
			// buttonGraf
			// 
			this->buttonGraf->Location = System::Drawing::Point(7, 19);
			this->buttonGraf->Name = L"buttonGraf";
			this->buttonGraf->Size = System::Drawing::Size(134, 76);
			this->buttonGraf->TabIndex = 0;
			this->buttonGraf->Text = L"Построить график";
			this->buttonGraf->UseVisualStyleBackColor = true;
			this->buttonGraf->Click += gcnew System::EventHandler(this, &MyForm::buttonGraf_Click);
			// 
			// checkBoxImp
			// 
			this->checkBoxImp->AutoSize = true;
			this->checkBoxImp->Location = System::Drawing::Point(6, 19);
			this->checkBoxImp->Name = L"checkBoxImp";
			this->checkBoxImp->Size = System::Drawing::Size(41, 17);
			this->checkBoxImp->TabIndex = 6;
			this->checkBoxImp->Text = L"ИХ";
			this->checkBoxImp->UseVisualStyleBackColor = true;
			// 
			// checkBoxA
			// 
			this->checkBoxA->AutoSize = true;
			this->checkBoxA->Location = System::Drawing::Point(53, 19);
			this->checkBoxA->Name = L"checkBoxA";
			this->checkBoxA->Size = System::Drawing::Size(48, 17);
			this->checkBoxA->TabIndex = 7;
			this->checkBoxA->Text = L"АЧХ";
			this->checkBoxA->UseVisualStyleBackColor = true;
			// 
			// checkBoxF
			// 
			this->checkBoxF->AutoSize = true;
			this->checkBoxF->Location = System::Drawing::Point(100, 19);
			this->checkBoxF->Name = L"checkBoxF";
			this->checkBoxF->Size = System::Drawing::Size(52, 17);
			this->checkBoxF->TabIndex = 8;
			this->checkBoxF->Text = L"ФЧХ";
			this->checkBoxF->UseVisualStyleBackColor = true;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->textBoxTau);
			this->groupBox1->Controls->Add(this->checkBoxImp);
			this->groupBox1->Controls->Add(this->checkBoxF);
			this->groupBox1->Controls->Add(this->checkBoxA);
			this->groupBox1->Location = System::Drawing::Point(772, 489);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(306, 41);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"График";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(239, 20);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 13);
			this->label1->TabIndex = 11;
			this->label1->Text = L"Tf = ";
			// 
			// textBoxTau
			// 
			this->textBoxTau->Location = System::Drawing::Point(274, 16);
			this->textBoxTau->Name = L"textBoxTau";
			this->textBoxTau->ReadOnly = true;
			this->textBoxTau->Size = System::Drawing::Size(26, 20);
			this->textBoxTau->TabIndex = 10;
			// 
			// textBoxW
			// 
			this->textBoxW->Location = System::Drawing::Point(6, 31);
			this->textBoxW->Name = L"textBoxW";
			this->textBoxW->Size = System::Drawing::Size(41, 20);
			this->textBoxW->TabIndex = 10;
			this->textBoxW->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::textBoxW_KeyPress);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->label7);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->textBoxdt);
			this->groupBox3->Controls->Add(this->textBoxkf);
			this->groupBox3->Controls->Add(this->textBoxL);
			this->groupBox3->Controls->Add(this->textBoxdw);
			this->groupBox3->Controls->Add(this->textBox_w);
			this->groupBox3->Controls->Add(this->textBoxW);
			this->groupBox3->Location = System::Drawing::Point(772, 536);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(306, 57);
			this->groupBox3->TabIndex = 10;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Параметры";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(238, 16);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 20;
			this->label7->Text = L"d_t";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(191, 16);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(22, 13);
			this->label6->TabIndex = 19;
			this->label6->Text = L"k_f";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(144, 16);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(13, 13);
			this->label5->TabIndex = 18;
			this->label5->Text = L"L";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(97, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(27, 13);
			this->label4->TabIndex = 17;
			this->label4->Text = L"d_w";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(50, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(27, 13);
			this->label3->TabIndex = 16;
			this->label3->Text = L"W_f";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(6, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 12;
			this->label2->Text = L"w_f";
			// 
			// textBoxdt
			// 
			this->textBoxdt->Location = System::Drawing::Point(241, 31);
			this->textBoxdt->Name = L"textBoxdt";
			this->textBoxdt->Size = System::Drawing::Size(41, 20);
			this->textBoxdt->TabIndex = 15;
			// 
			// textBoxkf
			// 
			this->textBoxkf->Location = System::Drawing::Point(194, 31);
			this->textBoxkf->Name = L"textBoxkf";
			this->textBoxkf->Size = System::Drawing::Size(41, 20);
			this->textBoxkf->TabIndex = 14;
			// 
			// textBoxL
			// 
			this->textBoxL->Location = System::Drawing::Point(147, 31);
			this->textBoxL->Name = L"textBoxL";
			this->textBoxL->Size = System::Drawing::Size(41, 20);
			this->textBoxL->TabIndex = 13;
			// 
			// textBoxdw
			// 
			this->textBoxdw->Location = System::Drawing::Point(100, 31);
			this->textBoxdw->Name = L"textBoxdw";
			this->textBoxdw->Size = System::Drawing::Size(41, 20);
			this->textBoxdw->TabIndex = 12;
			// 
			// textBox_w
			// 
			this->textBox_w->Location = System::Drawing::Point(53, 31);
			this->textBox_w->Name = L"textBox_w";
			this->textBox_w->Size = System::Drawing::Size(41, 20);
			this->textBox_w->TabIndex = 11;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->checkBoxY);
			this->groupBox4->Controls->Add(this->checkBoxX);
			this->groupBox4->Controls->Add(this->checkBoxY_K);
			this->groupBox4->Controls->Add(this->checkBoxY_ID);
			this->groupBox4->Location = System::Drawing::Point(772, 442);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(306, 41);
			this->groupBox4->TabIndex = 13;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Спектральный анализ";
			// 
			// checkBoxY
			// 
			this->checkBoxY->AutoSize = true;
			this->checkBoxY->Location = System::Drawing::Point(82, 19);
			this->checkBoxY->Name = L"checkBoxY";
			this->checkBoxY->Size = System::Drawing::Size(31, 17);
			this->checkBoxY->TabIndex = 12;
			this->checkBoxY->Text = L"y";
			this->checkBoxY->UseVisualStyleBackColor = true;
			// 
			// checkBoxX
			// 
			this->checkBoxX->AutoSize = true;
			this->checkBoxX->Location = System::Drawing::Point(6, 19);
			this->checkBoxX->Name = L"checkBoxX";
			this->checkBoxX->Size = System::Drawing::Size(31, 17);
			this->checkBoxX->TabIndex = 6;
			this->checkBoxX->Text = L"x";
			this->checkBoxX->UseVisualStyleBackColor = true;
			// 
			// checkBoxY_K
			// 
			this->checkBoxY_K->AutoSize = true;
			this->checkBoxY_K->Location = System::Drawing::Point(121, 19);
			this->checkBoxY_K->Name = L"checkBoxY_K";
			this->checkBoxY_K->Size = System::Drawing::Size(33, 17);
			this->checkBoxY_K->TabIndex = 8;
			this->checkBoxY_K->Text = L"y\'";
			this->checkBoxY_K->UseVisualStyleBackColor = true;
			// 
			// checkBoxY_ID
			// 
			this->checkBoxY_ID->AutoSize = true;
			this->checkBoxY_ID->Location = System::Drawing::Point(41, 19);
			this->checkBoxY_ID->Name = L"checkBoxY_ID";
			this->checkBoxY_ID->Size = System::Drawing::Size(35, 17);
			this->checkBoxY_ID->TabIndex = 7;
			this->checkBoxY_ID->Text = L"y*";
			this->checkBoxY_ID->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1395, 613);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->chart);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->MaximumSize = System::Drawing::Size(1411, 652);
			this->MinimumSize = System::Drawing::Size(1411, 652);
			this->Name = L"MyForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Расчётно-графическое задание по дисциплине \"Методы обработки сигналов\"";
			this->Shown += gcnew System::EventHandler(this, &MyForm::MyForm_Shown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion



private: double x, y;
private: System::Void buttonGraf_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void оПрограммеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void выходToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonHen_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonFur_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonImp_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonA_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonF_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void buttonTau_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void MyForm_Shown(System::Object^ sender, System::EventArgs^ e);
private: System::Void textBoxW_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void textBox_w_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void textBoxdw_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void textBoxL_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void textBoxkf_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
private: System::Void textBoxdt_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e);
};
}
