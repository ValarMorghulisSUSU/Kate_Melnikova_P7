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
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		Children^ A = gcnew Children();
		MyForm1^ C;
		Sadiki^ B;
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			A = gcnew Children();
			B = gcnew Sadiki();
			C = gcnew MyForm1(A);
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
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column3;
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
	private: System::Windows::Forms::ToolStripMenuItem^ базаToolStripMenuItem;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;


	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;

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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
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
			this->label1 = (gcnew System::Windows::Forms::Label());
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
			this->базаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button4);
			this->groupBox1->Controls->Add(this->button3);
			this->groupBox1->Controls->Add(this->dataGridView2);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Location = System::Drawing::Point(461, 163);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(282, 257);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Вакантные места";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(143, 226);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(109, 23);
			this->button4->TabIndex = 26;
			this->button4->Text = L"Отказать";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(31, 226);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(109, 23);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Одобрить";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) {
				this->Column6,
					this->Column7
			});
			this->dataGridView2->Location = System::Drawing::Point(31, 42);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(221, 178);
			this->dataGridView2->TabIndex = 12;
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"№ садика";
			this->Column6->Name = L"Column6";
			this->Column6->Width = 80;
			// 
			// Column7
			// 
			this->Column7->HeaderText = L"Кол-во мест";
			this->Column7->Name = L"Column7";
			this->Column7->Width = 97;
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(41, 26);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(41, 13);
			this->label14->TabIndex = 11;
			this->label14->Text = L"Район:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(88, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 13);
			this->label2->TabIndex = 0;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Column1,
					this->Column2, this->Column5, this->Column3
			});
			this->dataGridView1->Location = System::Drawing::Point(12, 43);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(426, 377);
			this->dataGridView1->TabIndex = 0;
			// 
			// Column1
			// 
			this->Column1->Frozen = true;
			this->Column1->HeaderText = L"Фамилия";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 120;
			// 
			// Column2
			// 
			this->Column2->Frozen = true;
			this->Column2->HeaderText = L"Возраст";
			this->Column2->Name = L"Column2";
			this->Column2->ReadOnly = true;
			this->Column2->Width = 55;
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Район";
			this->Column5->Name = L"Column5";
			this->Column5->ReadOnly = true;
			this->Column5->Width = 115;
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"№ сада";
			this->Column3->Name = L"Column3";
			this->Column3->ReadOnly = true;
			this->Column3->Width = 75;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(132, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(173, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Общий список заявок по району";
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
			this->groupBox2->Location = System::Drawing::Point(457, 43);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(300, 106);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Добавить заявку";
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"3", L"4", L"5", L"6" });
			this->comboBox3->Location = System::Drawing::Point(239, 25);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(47, 21);
			this->comboBox3->TabIndex = 26;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"124", L"257", L"29", L"436", L"75", L"315" });
			this->comboBox2->Location = System::Drawing::Point(239, 50);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(47, 21);
			this->comboBox2->TabIndex = 25;
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(12, 53);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(38, 13);
			this->label29->TabIndex = 24;
			this->label29->Text = L"Район";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {
				L"Ленинский", L"Советский", L"Центральный", L"Калининский",
					L"Курчатовский", L"Металлургический", L"Тракторозавоский"
			});
			this->comboBox1->Location = System::Drawing::Point(70, 50);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(105, 21);
			this->comboBox1->TabIndex = 16;
			this->comboBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 77);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(105, 23);
			this->button1->TabIndex = 22;
			this->button1->Text = L"Добавить ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(181, 53);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(57, 13);
			this->label20->TabIndex = 20;
			this->label20->Text = L"№ садика";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(181, 28);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(49, 13);
			this->label19->TabIndex = 18;
			this->label19->Text = L"Возраст";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(70, 25);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(105, 20);
			this->textBox1->TabIndex = 17;
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(9, 27);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(56, 13);
			this->label18->TabIndex = 16;
			this->label18->Text = L"Фамилия";
			// 
			// базаToolStripMenuItem
			// 
			this->базаToolStripMenuItem->Name = L"базаToolStripMenuItem";
			this->базаToolStripMenuItem->Size = System::Drawing::Size(43, 20);
			this->базаToolStripMenuItem->Text = L"База";
			this->базаToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::базаToolStripMenuItem_Click);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->базаToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(765, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(765, 428);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"MyForm";
			this->Text = L"Очередь в детский сад ";
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	//Добавить
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		People^ T = gcnew People(textBox1->Text, Convert::ToInt32(comboBox3->Text), comboBox1->Text, Convert::ToInt32(comboBox2->Text),"Обработка");
		A->Push(T);
		A->Look(this->dataGridView1,1);
		textBox1->Text = "";
		comboBox1->Text = "";
		comboBox2->Text = "";
		comboBox3->Text = "";
	}	
	//Одобрить
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		if (B->Del_m(A->Get_B(A->H())->Num, A->Get_B(A->H())->V)) {
			People^ p = gcnew People();

			A->Pop(p);
			p->ST = "Одобрено";
			A->Push(p);

			A->Look(dataGridView1, 1);
			MyForm_Sadic();
		}

		else {
			MessageBox::Show("Заявка не может быть одобрена. Так как для данной возрастной группы места закончились.","Ошибка запроса.", MessageBoxButtons::OK, MessageBoxIcon::Information);
			button4_Click(sender, e);
		}
	}
	//Отказать
	private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
		People^ p = gcnew People();
		A->Pop(p);
		p->ST = "Отказано";
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
		File::WriteAllText(Directory::GetCurrentDirectory() + "\\База.txt", toWrite);
		File::WriteAllText(Directory::GetCurrentDirectory() + "\\Садики.txt", toWrite1);
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
		StreamReader^ SR = gcnew StreamReader("База.txt");
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

		StreamReader^ SP = gcnew StreamReader("Садики.txt");
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
	private: System::Void базаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		C->ShowDialog();
	}
	void MyForm_Sadic() {
		label2->Text = A->Get_B(A->H())->R;
		B->Poisk(A->Get_B(A->H())->R, A->Get_B(A->H())->V,dataGridView2);
	}

};
}
