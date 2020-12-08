#pragma once
#include "Header.h"
#include "MyForm1.h"

namespace Practika7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;


	/// <summary>
	/// ������ ��� MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		MyForm1^ C;
		System::Collections::Generic::Queue <People^>^ QueueChildren;
		System::Collections::Generic::List <People^>^ ListChildren;
		System::Collections::Generic::List <People^>^ AllowChildren;
		System::Collections::Generic::List <Sadik^>^ ListSadik;
		System::Collections::Generic::List <People^>^ DenyChildren;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox5;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::ComboBox^ comboBox6;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
	private: System::Windows::Forms::RadioButton^ radioButton1;
	private: System::Windows::Forms::RadioButton^ radioButton2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
			this->QueueChildren = gcnew System::Collections::Generic::Queue <People^>(1);
			this->ListChildren = gcnew System::Collections::Generic::List <People^>();
			this->AllowChildren = gcnew System::Collections::Generic::List <People^>();
			this->DenyChildren = gcnew System::Collections::Generic::List <People^>();
			this->C = gcnew MyForm1(this->AllowChildren, this->DenyChildren);
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;

	private: System::Windows::Forms::Label^ label2;




	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::GroupBox^ groupBox2;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label29;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column6;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column7;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox5 = (gcnew System::Windows::Forms::ComboBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->comboBox6 = (gcnew System::Windows::Forms::ComboBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column7 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->comboBox4);
			this->groupBox1->Controls->Add(this->comboBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->comboBox6);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->dataGridView2);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(499, 157);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(469, 253);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"��������� �����";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::White;
			this->label7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(246, 19);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(211, 17);
			this->label7->TabIndex = 35;
			this->label7->Text = L"        ������� �� �������         ";
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->comboBox4->Location = System::Drawing::Point(355, 101);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(105, 25);
			this->comboBox4->TabIndex = 34;
			// 
			// comboBox5
			// 
			this->comboBox5->FormattingEnabled = true;
			this->comboBox5->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"124", L"257", L"29", L"436", L"75", L"315" });
			this->comboBox5->Location = System::Drawing::Point(355, 132);
			this->comboBox5->Name = L"comboBox5";
			this->comboBox5->Size = System::Drawing::Size(105, 25);
			this->comboBox5->TabIndex = 33;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(288, 73);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(50, 17);
			this->label3->TabIndex = 32;
			this->label3->Text = L"�����";
			// 
			// comboBox6
			// 
			this->comboBox6->FormattingEnabled = true;
			this->comboBox6->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"���������", L"���������", L"�����������", L"�����������",
					L"������������", L"����������������", L"����������������"
			});
			this->comboBox6->Location = System::Drawing::Point(355, 70);
			this->comboBox6->Name = L"comboBox6";
			this->comboBox6->Size = System::Drawing::Size(105, 25);
			this->comboBox6->TabIndex = 27;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(263, 135);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(75, 17);
			this->label4->TabIndex = 31;
			this->label4->Text = L"� ������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(277, 104);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 17);
			this->label5->TabIndex = 30;
			this->label5->Text = L"�������";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(355, 42);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(105, 23);
			this->textBox2->TabIndex = 29;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(270, 45);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(68, 17);
			this->label6->TabIndex = 28;
			this->label6->Text = L"�������";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::MintCream;
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(249, 219);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(211, 28);
			this->button4->TabIndex = 26;
			this->button4->Text = L"������������� �������";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::MintCream;
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Location = System::Drawing::Point(249, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(211, 28);
			this->button3->TabIndex = 25;
			this->button3->Text = L"����������� ������";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column6,
					this->Column7
			});
			this->dataGridView2->Location = System::Drawing::Point(12, 42);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(221, 205);
			this->dataGridView2->TabIndex = 12;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"� ������";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 80;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"���-�� ����";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 97;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->BackColor = System::Drawing::Color::White;
			this->label14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label14->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->Location = System::Drawing::Point(9, 19);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(222, 17);
			this->label14->TabIndex = 11;
			this->label14->Text = L"  ������ � ��������� ������  ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(69, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 17);
			this->label2->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column5, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(6, 16);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(469, 361);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"�������";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 120;
			// 
			// Column2
			// 
			this->Column2->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCells;
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"�������";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 86;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"�����";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 115;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"� ����";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 75;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->comboBox3);
			this->groupBox2->Controls->Add(this->comboBox2);
			this->groupBox2->Controls->Add(this->label29);
			this->groupBox2->Controls->Add(this->comboBox1);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->label20);
			this->groupBox2->Controls->Add(this->label19);
			this->groupBox2->Controls->Add(this->textBox1);
			this->groupBox2->Controls->Add(this->label18);
			this->groupBox2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox2->Location = System::Drawing::Point(609, 37);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(359, 114);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"�������� ������";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->comboBox3->Location = System::Drawing::Point(275, 22);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(72, 25);
			this->comboBox3->TabIndex = 26;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"124", L"257", L"29", L"436", L"75", L"315" });
			this->comboBox2->Location = System::Drawing::Point(275, 49);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(72, 25);
			this->comboBox2->TabIndex = 25;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(9, 52);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(50, 17);
			this->label29->TabIndex = 24;
			this->label29->Text = L"�����";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"���������", L"���������", L"�����������", L"�����������",
					L"������������", L"����������������", L"����������������"
			});
			this->comboBox1->Location = System::Drawing::Point(83, 49);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(105, 25);
			this->comboBox1->TabIndex = 16;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::MintCream;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(12, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(335, 29);
			this->button1->TabIndex = 22;
			this->button1->Text = L"text";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(194, 52);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(75, 17);
			this->label20->TabIndex = 20;
			this->label20->Text = L"� ������";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(194, 27);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(61, 17);
			this->label19->TabIndex = 18;
			this->label19->Text = L"�������";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(83, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 23);
			this->textBox1->TabIndex = 17;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 27);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(68, 17);
			this->label18->TabIndex = 16;
			this->label18->Text = L"�������";
			// 
			// ����ToolStripMenuItem
			// 
			this->����ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
			this->����ToolStripMenuItem->Size = System::Drawing::Size(51, 21);
			this->����ToolStripMenuItem->Text = L"����";
			this->����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����ToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->����ToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(978, 25);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox3->Location = System::Drawing::Point(12, 27);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(481, 383);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"�������";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(497, 37);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(106, 21);
			this->radioButton1->TabIndex = 6;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"������������";
			this->radioButton1->UseVisualStyleBackColor = true;
			this->radioButton1->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(497, 59);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(67, 21);
			this->radioButton2->TabIndex = 7;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"�����";
			this->radioButton2->UseVisualStyleBackColor = true;
			this->radioButton2->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton2_CheckedChanged);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(978, 428);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"������� � ������� ��� ";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &MyForm::MyForm_FormClosing);
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//��������
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		try
		{
			People^ Tmp = gcnew People(this->textBox1->Text, Convert::ToInt16(this->comboBox3->Text),
				this->comboBox2->Text, Convert::ToInt32(this->comboBox2->Text);
			this->ListChildren->Add(Tmp);
			this->QueueChildren->Enqueue(Tmp);
			Look(ListChildren, dataGridView1);
		}
		catch (...)
		{
			MessageBox::Show("������ ������� �������, ���� �� ���������, ���������.", "������", 
				MessageBoxButtons::OK, MessageBoxIcon::Error);
		}
	}	
	//����������� ������
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (B->Del_m(A->Get_B(A->H())->Num, A->Get_B(A->H())->V)) {
			People^ p = gcnew People();

			A->Pop(p);
			p->ST = "��������";
			A->Push(p);

			A->Look(dataGridView1, 1);
			MyForm_Sadic();
		}

		else {
			MessageBox::Show("������ �� ����� ���� ��������. ��� ��� ��� ������ ���������� ������ ����� �����������.","������ �������.", MessageBoxButtons::OK, MessageBoxIcon::Information);
			button4_Click(sender, e);
		}


	}
	//������������� �������
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		People^ p = gcnew People();
		A->Pop(p);
		p->ST = "��������";
		A->Push(p);

		A->Look(dataGridView1, 1);
		MyForm_Sadic();
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int t = comboBox1->SelectedIndex;
		if (t == 0) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"124", L"257", L"29", L"436", L"75", L"315" });
		}
		if (t == 1) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"371", L"5", L"446", L"55", L"8", L"68" });
		}
		if (t == 2) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"195", L"343", L"52", L"307", L"39", L"181" });
		}
		if (t == 3) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"435", L"88", L"28", L"57", L"253", L"166" });
		}
		if (t == 4) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"390", L"310", L"270", L"44", L"337", L"57" });
		}
		if (t == 5) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"3", L"244", L"80", L"14", L"272", L"183" });
		}
		if (t == 6) {
			this->comboBox2->Items->Clear();
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"76", L"59", L"120", L"7", L"84", L"66" });
		}
	}
	private: System::Void MyForm_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		String^ toWrite = A->File();
		String^ toWrite1 = B->File();
		File::WriteAllText(Directory::GetCurrentDirectory() + "\\����.txt", toWrite);
		File::WriteAllText(Directory::GetCurrentDirectory() + "\\������.txt", toWrite1);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ SR = gcnew StreamReader("����.txt");
		String^ str = gcnew String("");
		while (str = SR->ReadLine()) {
			
			People^ p = gcnew People();
			p->N = str->Substring(0, str->IndexOf("$"));
			p->V = Convert::ToInt32(str->Substring(str->IndexOf("$") + 1,1));
			p->R = str->Substring(str->IndexOf("*") + 1, str->IndexOf("!") - str->IndexOf("*") - 1);
			p->Num = Convert::ToInt32(str->Substring(str->IndexOf("!") + 1, str->IndexOf("@") - str->IndexOf("!") - 1));
			p->ST = str->Substring(str->IndexOf("@") + 1);
			A->Push(p);
		}
		SR->Close();
		A->Look(dataGridView1, 1);

		StreamReader^ SP = gcnew StreamReader("������.txt");
		String^ str1 = gcnew String("");
		while (str1 = SP->ReadLine()) {

			Sadik^ p = gcnew Sadik();
			p->R= str1->Substring(0, str1->IndexOf("#"));
			p->N = Convert::ToInt32(str1->Substring(str1->IndexOf("#") + 1, str1->IndexOf("@") - str1->IndexOf("#") - 1));
			p->C_3 = Convert::ToInt32(str1->Substring(str1->IndexOf("@") + 1, str1->IndexOf("$") - str1->IndexOf("@") - 1));
			p->C_4 = Convert::ToInt32(str1->Substring(str1->IndexOf("$") + 1, str1->IndexOf("*") - str1->IndexOf("$") - 1));
			p->C_5 = Convert::ToInt32(str1->Substring(str1->IndexOf("*") + 1, str1->IndexOf("!") - str1->IndexOf("*") - 1));
			p->C_6 = Convert::ToInt32(str1->Substring(str1->IndexOf("!") + 1));
			B->Add(p);
		}
		SP->Close();
		MyForm_Sadic();
	}
	private: System::Void ����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		C->ShowDialog();
	}
	void MyForm_Sadic() {
		label2->Text = A->Get_B(A->H())->R;
		B->Poisk(A->Get_B(A->H())->R, A->Get_B(A->H())->V,dataGridView2);
	}


private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->radioButton1->Checked) {
		this->groupBox1->Enabled = false;
		this->button1->Text = "������ ������";
	}
}
private: System::Void radioButton2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	if (this->radioButton2->Checked) {
		this->groupBox1->Enabled = false;
		this->button1->Text = "�������� ������";
	}
}
};
}
