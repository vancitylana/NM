#pragma once
#include "MyForm1.h"
#include "MyForm2.h"
#include "MyForm32.h"
#include "RK4.h"
#include <cmath>

double x, v, V1, V2, u, h, v1, x1, E, X, eloc, emax, emin, xmax, xmin;
int num, quan, c1, c2; 

namespace RK {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace ZedGraph;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: ZedGraph::ZedGraphControl^  zedGraphControl1;
	private: System::Windows::Forms::TabControl^  tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^  tabPage1;
	private: System::Windows::Forms::TabPage^  tabPage2;
	private: System::Windows::Forms::TabPage^  tabPage3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

	private: System::Windows::Forms::Button^  button4;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;

	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;

	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;









	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::TextBox^  textBox14;
	private: System::Windows::Forms::TextBox^  textBox13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::TextBox^  textBox15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label5;

	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox16;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: ZedGraph::ZedGraphControl^  zedGraphControl2;
	private: System::Windows::Forms::TextBox^  textBox17;
	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::TextBox^  textBox18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::TextBox^  textBox21;
	private: System::Windows::Forms::Label^  label22;
	private: System::Windows::Forms::TextBox^  textBox22;
	private: System::Windows::Forms::Label^  label23;
	private: System::Windows::Forms::TextBox^  textBox20;
	private: System::Windows::Forms::Label^  label21;
	private: System::Windows::Forms::TextBox^  textBox19;
	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox23;
	private: System::Windows::Forms::Label^  label24;
	private: System::Windows::Forms::TextBox^  textBox24;
	private: System::Windows::Forms::Label^  label25;
	private: System::Windows::Forms::TextBox^  textBox25;
	private: System::Windows::Forms::Label^  label26;
	private: System::Windows::Forms::TextBox^  textBox26;
	private: System::Windows::Forms::Label^  label27;
	private: System::Windows::Forms::Label^  label35;
	private: System::Windows::Forms::TextBox^  textBox34;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::TextBox^  textBox11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::TextBox^  textBox12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox27;
	private: System::Windows::Forms::Label^  label28;
	private: System::Windows::Forms::TextBox^  textBox28;
	private: System::Windows::Forms::Label^  label29;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox29;
	private: ZedGraph::ZedGraphControl^  zedGraphControl3;
	private: System::Windows::Forms::Label^  label30;
	private: System::Windows::Forms::TextBox^  textBox30;
	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Label^  label32;
	private: System::Windows::Forms::Label^  label33;
	private: System::Windows::Forms::Label^  label34;
	private: System::Windows::Forms::TextBox^  textBox31;
	private: System::Windows::Forms::TextBox^  textBox32;
	private: System::Windows::Forms::TextBox^  textBox33;
	private: System::Windows::Forms::Button^  button9;
private: ZedGraph::ZedGraphControl^  zedGraphControl4;
private: System::Windows::Forms::Label^  label38;
private: System::Windows::Forms::Label^  label37;
private: System::Windows::Forms::Label^  label36;
private: System::Windows::Forms::TextBox^  textBox37;
private: System::Windows::Forms::TextBox^  textBox36;
private: System::Windows::Forms::TextBox^  textBox35;
private: ZedGraph::ZedGraphControl^  zedGraphControl5;

	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl2 = (gcnew ZedGraph::ZedGraphControl());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl1 = (gcnew ZedGraph::ZedGraphControl());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->zedGraphControl5 = (gcnew ZedGraph::ZedGraphControl());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label36 = (gcnew System::Windows::Forms::Label());
			this->textBox37 = (gcnew System::Windows::Forms::TextBox());
			this->textBox36 = (gcnew System::Windows::Forms::TextBox());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl4 = (gcnew ZedGraph::ZedGraphControl());
			this->label35 = (gcnew System::Windows::Forms::Label());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->label28 = (gcnew System::Windows::Forms::Label());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->label29 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->zedGraphControl3 = (gcnew ZedGraph::ZedGraphControl());
			this->label30 = (gcnew System::Windows::Forms::Label());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->label32 = (gcnew System::Windows::Forms::Label());
			this->label33 = (gcnew System::Windows::Forms::Label());
			this->label34 = (gcnew System::Windows::Forms::Label());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->tabPage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Controls->Add(this->tabPage3);
			this->tabControl1->Location = System::Drawing::Point(2, 3);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(644, 281);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->AutoScroll = true;
			this->tabPage1->Controls->Add(this->button8);
			this->tabPage1->Controls->Add(this->textBox21);
			this->tabPage1->Controls->Add(this->label22);
			this->tabPage1->Controls->Add(this->textBox22);
			this->tabPage1->Controls->Add(this->label23);
			this->tabPage1->Controls->Add(this->textBox20);
			this->tabPage1->Controls->Add(this->label21);
			this->tabPage1->Controls->Add(this->textBox19);
			this->tabPage1->Controls->Add(this->label20);
			this->tabPage1->Controls->Add(this->textBox16);
			this->tabPage1->Controls->Add(this->label17);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->zedGraphControl2);
			this->tabPage1->Controls->Add(this->label6);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->label15);
			this->tabPage1->Controls->Add(this->textBox14);
			this->tabPage1->Controls->Add(this->label4);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(636, 255);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L" test";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button8->Location = System::Drawing::Point(174, 142);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(98, 23);
			this->button8->TabIndex = 28;
			this->button8->Text = L"Run";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(42, 178);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(100, 20);
			this->textBox21->TabIndex = 27;
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Location = System::Drawing::Point(2, 181);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(33, 13);
			this->label22->TabIndex = 26;
			this->label22->Text = L"at x =";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(42, 152);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(100, 20);
			this->textBox22->TabIndex = 25;
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Location = System::Drawing::Point(2, 152);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(35, 13);
			this->label23->TabIndex = 24;
			this->label23->Text = L"min = ";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(41, 123);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(100, 20);
			this->textBox20->TabIndex = 23;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(2, 126);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(33, 13);
			this->label21->TabIndex = 22;
			this->label21->Text = L"at x =";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(42, 97);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(100, 20);
			this->textBox19->TabIndex = 21;
			this->textBox19->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox19_TextChanged);
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(2, 100);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(38, 13);
			this->label20->TabIndex = 20;
			this->label20->Text = L"max = ";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(202, 69);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(70, 20);
			this->textBox16->TabIndex = 19;
			this->textBox16->Text = L"0,0001";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(145, 72);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(58, 13);
			this->label17->TabIndex = 18;
			this->label17->Text = L"eps local =";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(51, 69);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(69, 20);
			this->textBox5->TabIndex = 17;
			this->textBox5->Text = L"10";
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox5_TextChanged);
			// 
			// zedGraphControl2
			// 
			this->zedGraphControl2->Location = System::Drawing::Point(295, 0);
			this->zedGraphControl2->Name = L"zedGraphControl2";
			this->zedGraphControl2->ScrollGrace = 0;
			this->zedGraphControl2->ScrollMaxX = 0;
			this->zedGraphControl2->ScrollMaxY = 0;
			this->zedGraphControl2->ScrollMaxY2 = 0;
			this->zedGraphControl2->ScrollMinX = 0;
			this->zedGraphControl2->ScrollMinY = 0;
			this->zedGraphControl2->ScrollMinY2 = 0;
			this->zedGraphControl2->Size = System::Drawing::Size(321, 252);
			this->zedGraphControl2->TabIndex = 16;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(7, 72);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(38, 13);
			this->label6->TabIndex = 15;
			this->label6->Text = L"limX = ";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(174, 34);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(69, 20);
			this->textBox4->TabIndex = 14;
			this->textBox4->Text = L"0,0001";
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox4_TextChanged);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(145, 37);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 13);
			this->label5->TabIndex = 13;
			this->label5->Text = L"E =";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(7, 37);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 12;
			this->label15->Text = L"Steps = ";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(60, 34);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(69, 20);
			this->textBox14->TabIndex = 11;
			this->textBox14->Text = L"100";
			this->textBox14->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox14_TextChanged);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(186, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(22, 13);
			this->label4->TabIndex = 9;
			this->label4->Text = L"h =";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(107, 9);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(22, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"v =";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(24, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 7;
			this->label2->Text = L"x =";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(353, 100);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(0, 13);
			this->label1->TabIndex = 6;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(214, 6);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(43, 20);
			this->textBox3->TabIndex = 4;
			this->textBox3->Text = L"0,01";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(135, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(29, 20);
			this->textBox2->TabIndex = 3;
			this->textBox2->Text = L"1";
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox2_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(59, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(39, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"1";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// button4
			// 
			this->button4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button4->Location = System::Drawing::Point(174, 171);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(98, 23);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Run with LP";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Location = System::Drawing::Point(23, 214);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Table";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->label24);
			this->tabPage2->Controls->Add(this->textBox24);
			this->tabPage2->Controls->Add(this->label25);
			this->tabPage2->Controls->Add(this->textBox25);
			this->tabPage2->Controls->Add(this->label26);
			this->tabPage2->Controls->Add(this->textBox26);
			this->tabPage2->Controls->Add(this->label27);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->label18);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->label19);
			this->tabPage2->Controls->Add(this->button7);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->zedGraphControl1);
			this->tabPage2->Controls->Add(this->label16);
			this->tabPage2->Controls->Add(this->textBox13);
			this->tabPage2->Controls->Add(this->label14);
			this->tabPage2->Controls->Add(this->button5);
			this->tabPage2->Controls->Add(this->label7);
			this->tabPage2->Controls->Add(this->label8);
			this->tabPage2->Controls->Add(this->label9);
			this->tabPage2->Controls->Add(this->textBox6);
			this->tabPage2->Controls->Add(this->textBox7);
			this->tabPage2->Controls->Add(this->textBox8);
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(636, 255);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L" task1";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(45, 172);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(100, 20);
			this->textBox23->TabIndex = 36;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Location = System::Drawing::Point(6, 175);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(33, 13);
			this->label24->TabIndex = 35;
			this->label24->Text = L"at x =";
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(42, 143);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(100, 20);
			this->textBox24->TabIndex = 34;
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Location = System::Drawing::Point(6, 146);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(35, 13);
			this->label25->TabIndex = 33;
			this->label25->Text = L"min = ";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(42, 119);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(100, 20);
			this->textBox25->TabIndex = 32;
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Location = System::Drawing::Point(6, 122);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(33, 13);
			this->label26->TabIndex = 31;
			this->label26->Text = L"at x =";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(45, 93);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(100, 20);
			this->textBox26->TabIndex = 30;
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Location = System::Drawing::Point(6, 96);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(38, 13);
			this->label27->TabIndex = 29;
			this->label27->Text = L"max = ";
			this->label27->Click += gcnew System::EventHandler(this, &MyForm::label27_Click);
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(198, 62);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(70, 20);
			this->textBox17->TabIndex = 28;
			this->textBox17->Text = L"0,0001";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(134, 65);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(58, 13);
			this->label18->TabIndex = 27;
			this->label18->Text = L"eps local =";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(59, 62);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(69, 20);
			this->textBox18->TabIndex = 26;
			this->textBox18->Text = L"10";
			this->textBox18->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox18_TextChanged);
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(12, 65);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(38, 13);
			this->label19->TabIndex = 25;
			this->label19->Text = L"limX = ";
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(183, 136);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(98, 23);
			this->button7->TabIndex = 24;
			this->button7->Text = L"Run";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(183, 33);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(69, 20);
			this->textBox15->TabIndex = 23;
			this->textBox15->Text = L"0,0001";
			this->textBox15->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox15_TextChanged);
			// 
			// zedGraphControl1
			// 
			this->zedGraphControl1->Location = System::Drawing::Point(314, 0);
			this->zedGraphControl1->Name = L"zedGraphControl1";
			this->zedGraphControl1->ScrollGrace = 0;
			this->zedGraphControl1->ScrollMaxX = 0;
			this->zedGraphControl1->ScrollMaxY = 0;
			this->zedGraphControl1->ScrollMaxY2 = 0;
			this->zedGraphControl1->ScrollMinX = 0;
			this->zedGraphControl1->ScrollMinY = 0;
			this->zedGraphControl1->ScrollMinY2 = 0;
			this->zedGraphControl1->Size = System::Drawing::Size(322, 262);
			this->zedGraphControl1->TabIndex = 0;
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Location = System::Drawing::Point(144, 36);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(23, 13);
			this->label16->TabIndex = 22;
			this->label16->Text = L"E =";
			// 
			// textBox13
			// 
			this->textBox13->Location = System::Drawing::Point(59, 33);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(69, 20);
			this->textBox13->TabIndex = 21;
			this->textBox13->Text = L"100";
			this->textBox13->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox13_TextChanged);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(15, 36);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(46, 13);
			this->label14->TabIndex = 20;
			this->label14->Text = L"Steps = ";
			// 
			// button5
			// 
			this->button5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button5->Location = System::Drawing::Point(183, 175);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(98, 23);
			this->button5->TabIndex = 19;
			this->button5->Text = L"Run with LP";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(205, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 17;
			this->label7->Text = L"h =";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(120, 9);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(22, 13);
			this->label8->TabIndex = 16;
			this->label8->Text = L"v =";
			this->label8->Click += gcnew System::EventHandler(this, &MyForm::label8_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(29, 9);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(21, 13);
			this->label9->TabIndex = 15;
			this->label9->Text = L"x =";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(233, 6);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(43, 20);
			this->textBox6->TabIndex = 13;
			this->textBox6->Text = L"0,01";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(148, 6);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(30, 20);
			this->textBox7->TabIndex = 12;
			this->textBox7->Text = L"1";
			this->textBox7->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox7_TextChanged);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(59, 6);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(44, 20);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"1";
			this->textBox8->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox8_TextChanged);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Location = System::Drawing::Point(18, 212);
			this->button2->Name = L"button2";
			this->button2->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button2->Size = System::Drawing::Size(98, 23);
			this->button2->TabIndex = 0;
			this->button2->Text = L"Table";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// tabPage3
			// 
			this->tabPage3->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->tabPage3->Controls->Add(this->zedGraphControl5);
			this->tabPage3->Controls->Add(this->label38);
			this->tabPage3->Controls->Add(this->label37);
			this->tabPage3->Controls->Add(this->label36);
			this->tabPage3->Controls->Add(this->textBox37);
			this->tabPage3->Controls->Add(this->textBox36);
			this->tabPage3->Controls->Add(this->textBox35);
			this->tabPage3->Controls->Add(this->zedGraphControl4);
			this->tabPage3->Controls->Add(this->label35);
			this->tabPage3->Controls->Add(this->textBox34);
			this->tabPage3->Controls->Add(this->textBox9);
			this->tabPage3->Controls->Add(this->label10);
			this->tabPage3->Controls->Add(this->textBox10);
			this->tabPage3->Controls->Add(this->label11);
			this->tabPage3->Controls->Add(this->textBox11);
			this->tabPage3->Controls->Add(this->label12);
			this->tabPage3->Controls->Add(this->textBox12);
			this->tabPage3->Controls->Add(this->label13);
			this->tabPage3->Controls->Add(this->textBox27);
			this->tabPage3->Controls->Add(this->label28);
			this->tabPage3->Controls->Add(this->textBox28);
			this->tabPage3->Controls->Add(this->label29);
			this->tabPage3->Controls->Add(this->button3);
			this->tabPage3->Controls->Add(this->textBox29);
			this->tabPage3->Controls->Add(this->zedGraphControl3);
			this->tabPage3->Controls->Add(this->label30);
			this->tabPage3->Controls->Add(this->textBox30);
			this->tabPage3->Controls->Add(this->label31);
			this->tabPage3->Controls->Add(this->button6);
			this->tabPage3->Controls->Add(this->label32);
			this->tabPage3->Controls->Add(this->label33);
			this->tabPage3->Controls->Add(this->label34);
			this->tabPage3->Controls->Add(this->textBox31);
			this->tabPage3->Controls->Add(this->textBox32);
			this->tabPage3->Controls->Add(this->textBox33);
			this->tabPage3->Controls->Add(this->button9);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(636, 255);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L" task2";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// zedGraphControl5
			// 
			this->zedGraphControl5->Location = System::Drawing::Point(429, 84);
			this->zedGraphControl5->Name = L"zedGraphControl5";
			this->zedGraphControl5->ScrollGrace = 0;
			this->zedGraphControl5->ScrollMaxX = 0;
			this->zedGraphControl5->ScrollMaxY = 0;
			this->zedGraphControl5->ScrollMaxY2 = 0;
			this->zedGraphControl5->ScrollMinX = 0;
			this->zedGraphControl5->ScrollMinY = 0;
			this->zedGraphControl5->ScrollMinY2 = 0;
			this->zedGraphControl5->Size = System::Drawing::Size(201, 168);
			this->zedGraphControl5->TabIndex = 72;
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->Location = System::Drawing::Point(484, 190);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(13, 13);
			this->label38->TabIndex = 71;
			this->label38->Text = L"c";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->Location = System::Drawing::Point(479, 203);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(13, 13);
			this->label37->TabIndex = 70;
			this->label37->Text = L"b";
			// 
			// label36
			// 
			this->label36->AutoSize = true;
			this->label36->Location = System::Drawing::Point(147, 36);
			this->label36->Name = L"label36";
			this->label36->Size = System::Drawing::Size(22, 13);
			this->label36->TabIndex = 69;
			this->label36->Text = L"a =";
			// 
			// textBox37
			// 
			this->textBox37->Location = System::Drawing::Point(487, 219);
			this->textBox37->Name = L"textBox37";
			this->textBox37->Size = System::Drawing::Size(27, 20);
			this->textBox37->TabIndex = 68;
			this->textBox37->Text = L"0";
			// 
			// textBox36
			// 
			this->textBox36->Location = System::Drawing::Point(456, 216);
			this->textBox36->Name = L"textBox36";
			this->textBox36->Size = System::Drawing::Size(27, 20);
			this->textBox36->TabIndex = 67;
			this->textBox36->Text = L"0";
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(175, 33);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(27, 20);
			this->textBox35->TabIndex = 66;
			this->textBox35->Text = L"1";
			// 
			// zedGraphControl4
			// 
			this->zedGraphControl4->Location = System::Drawing::Point(218, 84);
			this->zedGraphControl4->Name = L"zedGraphControl4";
			this->zedGraphControl4->ScrollGrace = 0;
			this->zedGraphControl4->ScrollMaxX = 0;
			this->zedGraphControl4->ScrollMaxY = 0;
			this->zedGraphControl4->ScrollMaxY2 = 0;
			this->zedGraphControl4->ScrollMinX = 0;
			this->zedGraphControl4->ScrollMinY = 0;
			this->zedGraphControl4->ScrollMinY2 = 0;
			this->zedGraphControl4->Size = System::Drawing::Size(204, 168);
			this->zedGraphControl4->TabIndex = 65;
			this->zedGraphControl4->Load += gcnew System::EventHandler(this, &MyForm::zedGraphControl4_Load);
			// 
			// label35
			// 
			this->label35->AutoSize = true;
			this->label35->Location = System::Drawing::Point(141, 12);
			this->label35->Name = L"label35";
			this->label35->Size = System::Drawing::Size(28, 13);
			this->label35->TabIndex = 64;
			this->label35->Text = L"v2 =";
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(175, 9);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(27, 20);
			this->textBox34->TabIndex = 63;
			this->textBox34->Text = L"1";
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(409, 59);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(76, 20);
			this->textBox9->TabIndex = 62;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(370, 62);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(33, 13);
			this->label10->TabIndex = 61;
			this->label10->Text = L"at x =";
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(402, 33);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(100, 20);
			this->textBox10->TabIndex = 60;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(368, 36);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(35, 13);
			this->label11->TabIndex = 59;
			this->label11->Text = L"min = ";
			// 
			// textBox11
			// 
			this->textBox11->Location = System::Drawing::Point(252, 54);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(100, 20);
			this->textBox11->TabIndex = 58;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(208, 57);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(33, 13);
			this->label12->TabIndex = 57;
			this->label12->Text = L"at x =";
			// 
			// textBox12
			// 
			this->textBox12->Location = System::Drawing::Point(252, 33);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(100, 20);
			this->textBox12->TabIndex = 56;
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(208, 36);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 13);
			this->label13->TabIndex = 55;
			this->label13->Text = L"max = ";
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(65, 33);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(70, 20);
			this->textBox27->TabIndex = 54;
			this->textBox27->Text = L"0,0001";
			// 
			// label28
			// 
			this->label28->AutoSize = true;
			this->label28->Location = System::Drawing::Point(3, 36);
			this->label28->Name = L"label28";
			this->label28->Size = System::Drawing::Size(58, 13);
			this->label28->TabIndex = 53;
			this->label28->Text = L"eps local =";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(543, 9);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(69, 20);
			this->textBox28->TabIndex = 52;
			this->textBox28->Text = L"10";
			// 
			// label29
			// 
			this->label29->AutoSize = true;
			this->label29->Location = System::Drawing::Point(503, 12);
			this->label29->Name = L"label29";
			this->label29->Size = System::Drawing::Size(38, 13);
			this->label29->TabIndex = 51;
			this->label29->Text = L"limX = ";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(3, 55);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(98, 23);
			this->button3->TabIndex = 50;
			this->button3->Text = L"Run";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click_1);
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(428, 9);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(69, 20);
			this->textBox29->TabIndex = 49;
			this->textBox29->Text = L"0,0001";
			// 
			// zedGraphControl3
			// 
			this->zedGraphControl3->Location = System::Drawing::Point(0, 84);
			this->zedGraphControl3->Name = L"zedGraphControl3";
			this->zedGraphControl3->ScrollGrace = 0;
			this->zedGraphControl3->ScrollMaxX = 0;
			this->zedGraphControl3->ScrollMaxY = 0;
			this->zedGraphControl3->ScrollMaxY2 = 0;
			this->zedGraphControl3->ScrollMinX = 0;
			this->zedGraphControl3->ScrollMinY = 0;
			this->zedGraphControl3->ScrollMinY2 = 0;
			this->zedGraphControl3->Size = System::Drawing::Size(212, 168);
			this->zedGraphControl3->TabIndex = 38;
			// 
			// label30
			// 
			this->label30->AutoSize = true;
			this->label30->Location = System::Drawing::Point(399, 12);
			this->label30->Name = L"label30";
			this->label30->Size = System::Drawing::Size(23, 13);
			this->label30->TabIndex = 48;
			this->label30->Text = L"E =";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(324, 9);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(69, 20);
			this->textBox30->TabIndex = 47;
			this->textBox30->Text = L"1000";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->Location = System::Drawing::Point(275, 12);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(43, 13);
			this->label31->TabIndex = 46;
			this->label31->Text = L"Steps =";
			// 
			// button6
			// 
			this->button6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button6->Location = System::Drawing::Point(104, 55);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(98, 23);
			this->button6->TabIndex = 45;
			this->button6->Text = L"Run with LP";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click_1);
			// 
			// label32
			// 
			this->label32->AutoSize = true;
			this->label32->Location = System::Drawing::Point(208, 12);
			this->label32->Name = L"label32";
			this->label32->Size = System::Drawing::Size(22, 13);
			this->label32->TabIndex = 44;
			this->label32->Text = L"h =";
			// 
			// label33
			// 
			this->label33->AutoSize = true;
			this->label33->Location = System::Drawing::Point(74, 12);
			this->label33->Name = L"label33";
			this->label33->Size = System::Drawing::Size(28, 13);
			this->label33->TabIndex = 43;
			this->label33->Text = L"v1 =";
			// 
			// label34
			// 
			this->label34->AutoSize = true;
			this->label34->Location = System::Drawing::Point(12, 12);
			this->label34->Name = L"label34";
			this->label34->Size = System::Drawing::Size(21, 13);
			this->label34->TabIndex = 42;
			this->label34->Text = L"x =";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(236, 9);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(33, 20);
			this->textBox31->TabIndex = 41;
			this->textBox31->Text = L"0,01";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(108, 9);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(27, 20);
			this->textBox32->TabIndex = 40;
			this->textBox32->Text = L"1";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(36, 9);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(27, 20);
			this->textBox33->TabIndex = 39;
			this->textBox33->Text = L"1";
			// 
			// button9
			// 
			this->button9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button9->Location = System::Drawing::Point(514, 55);
			this->button9->Name = L"button9";
			this->button9->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->button9->Size = System::Drawing::Size(98, 23);
			this->button9->TabIndex = 37;
			this->button9->Text = L"Table";
			this->button9->UseVisualStyleBackColor = false;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(647, 284);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		MyForm1^table1 = gcnew MyForm1();
		MyForm2^table2 = gcnew MyForm2();
		MyForm3^table3 = gcnew MyForm3();
	private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		table1->ShowDialog();
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		table2->ShowDialog();
	}
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		table1->ShowDialog();
	}
	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {// тестовая задача с локальной погрешностью
		GraphPane^ panel = zedGraphControl2->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		table2->dataGridView1->Rows->Clear();
		c1 = 0; c2 = 0;
		x = Convert::ToDouble(textBox1->Text);
		v = Convert::ToDouble(textBox2->Text);
		h = Convert::ToDouble(textBox3->Text);
		X = Convert::ToDouble(textBox5->Text);
		eloc = Convert::ToDouble(textBox16->Text);
		quan = Convert::ToInt32(textBox14->Text);
		num = 1; double u;
		E = Convert::ToDouble(textBox4->Text);
		x1 = x; v1 = v;
		int i = 1;
		emax = 0; emin = 0;
		double randomno = x;
		while ((i < quan + 1) && (X - randomno > eloc)) {
			x1 = x; v1 = v;
			CheckLocalFault(num, x, v, h, E, c1, c2);
			RK4(x, v, h, num);
			RK42(x1, v1, h, num);
			RK42(x1, v1, h, num);
			f1_list->Add(x, v);
			u = exp(2 * x);
			table2->dataGridView1->Rows->Add(i, x, v, v1, v - v1, abs((v1 - v) / 15), h, c1, c2, u, u - v);
			randomno = x;
			if (i == 1) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			if (emax < abs((v1 - v) / 15)) {
				emax = abs((v1 - v) / 15);
				xmax = x;
			}
			if (emin > abs((v1 - v) / 15)) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			i++;
			if (x > 2) {
				continue;
			}
		}
		textBox19->Text = Convert::ToString(emax);
		textBox20->Text = Convert::ToString(xmax);
		textBox22->Text = Convert::ToString(emin);
		textBox21->Text = Convert::ToString(xmin);
		LineItem Curve1 = panel->AddCurve("diagram", f1_list, Color::Red, SymbolType::None);
		zedGraphControl2->AxisChange();
		//// Обновляем график
		zedGraphControl2->Invalidate();
	}
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {// первая задача с локальной погрешностью
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		table1->dataGridView1->Rows->Clear();
		c1 = 0; c2 = 0;
		x = Convert::ToDouble(textBox8->Text);
		v = Convert::ToDouble(textBox7->Text);
		h = Convert::ToDouble(textBox6->Text);
		quan = Convert::ToInt32(textBox13->Text);
		X = Convert::ToDouble(textBox18->Text);
		eloc = Convert::ToDouble(textBox17->Text);
		num = 2;
		E = Convert::ToDouble(textBox15->Text);
		x1 = x; v1 = v;
		int i = 1;
		double randomno = x;
		while ((i < quan + 1) && (X - x > eloc)) {
			x1 = x; v1 = v;
			CheckLocalFault(num, x, v, h, E, c1, c2);
			RK4(x, v, h, num);
			RK42(x1, v1, h, num);
			RK42(x1, v1, h, num);
			f1_list->Add(x, v);
			table1->dataGridView1->Rows->Add(i, x, v, v1, v - v1, abs((v1 - v) / 15), h, c1, c2);
			randomno = x;
			if (i == 1) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			if (emax < abs((v1 - v) / 15)) {
				emax = abs((v1 - v) / 15);
				xmax = x;
			}
			if (emin > abs((v1 - v) / 15)) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			i++;
			if (x > 2) {
				continue;
			}
		}
		textBox26->Text = Convert::ToString(emax);
		textBox25->Text = Convert::ToString(xmax);
		textBox24->Text = Convert::ToString(emin);
		textBox23->Text = Convert::ToString(xmin);
		LineItem Curve1 = panel->AddCurve("diagram", f1_list, Color::Red, SymbolType::None);
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
	}
	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {// первая задача без локальной погрешности
		GraphPane^ panel = zedGraphControl1->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		table1->dataGridView1->Rows->Clear();
		c1 = 0; c2 = 0;
		x = Convert::ToDouble(textBox8->Text);
		v = Convert::ToDouble(textBox7->Text);
		h = Convert::ToDouble(textBox6->Text);
		quan = Convert::ToInt32(textBox13->Text);
		num = 2;
		double randomno = x;
		int i = 1;
		E = Convert::ToDouble(textBox15->Text);
		x1 = x; v1 = v;
		while ((i < quan + 1) && (X - x > eloc)) {
			x1 = x; v1 = v;
			RK4(x, v, h, num);
			RK42(x1, v1, h, num);
			RK42(x1, v1, h, num);
			f1_list->Add(x, v);
			table1->dataGridView1->Rows->Add(i, x, v, v1, v - v1, abs((v1 - v) / 15), h, 0, 0);
			randomno = x;
			if (i == 1) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			if (emax < abs((v1 - v) / 15)) {
				emax = abs((v1 - v) / 15);
				xmax = x;
			}
			if (emin > abs((v1 - v) / 15)) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			i++;
			if (x > 2) {
				continue;
			}
		}
		textBox26->Text = Convert::ToString(emax);
		textBox25->Text = Convert::ToString(xmax);
		textBox24->Text = Convert::ToString(emin);
		textBox23->Text = Convert::ToString(xmin);
		LineItem Curve1 = panel->AddCurve("diagram", f1_list, Color::Green, SymbolType::None);
		zedGraphControl1->AxisChange();
		// Обновляем график
		zedGraphControl1->Invalidate();
	}
	private: System::Void textBox8_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox7_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox4_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox14_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox2_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox15_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox13_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox5_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox18_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void textBox19_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	}
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {//тестовая задача без погрешности
		GraphPane^ panel = zedGraphControl2->GraphPane;
		panel->CurveList->Clear();
		PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
		table2->dataGridView1->Rows->Clear();
		c1 = 0; c2 = 0;
		x = Convert::ToDouble(textBox1->Text);
		v = Convert::ToDouble(textBox2->Text);
		h = Convert::ToDouble(textBox3->Text);
		X = Convert::ToDouble(textBox5->Text);
		eloc = Convert::ToDouble(textBox16->Text);
		quan = Convert::ToInt32(textBox14->Text);
		num = 1; double u;
		E = Convert::ToDouble(textBox4->Text);
		x1 = x; v1 = v;
		int i = 1;
		emax = 0; emin = 0;
		double randomno = x;
		while ((i < quan + 1) && (X - randomno > eloc)) {
			x1 = x; v1 = v;
			RK4(x, v, h, num);
			RK42(x1, v1, h, num);
			RK42(x1, v1, h, num);
			f1_list->Add(x, v);
			u = exp(2 * x);
			table2->dataGridView1->Rows->Add(i, x, v, v1, v - v1, abs((v1 - v) / 15), h, c1, c2, u, u - v);
			randomno = x;
			if (i == 1) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			if (emax < abs((v1 - v) / 15)) {
				emax = abs((v1 - v) / 15);
				xmax = x;
			}
			if (emin > abs((v1 - v) / 15)) {
				emin = abs((v1 - v) / 15);
				xmin = x;
			}
			i++;
			if (x > 2) {
				continue;
			}

		}			
			textBox19->Text = Convert::ToString(emax);
			textBox20->Text = Convert::ToString(xmax);
			textBox22->Text = Convert::ToString(emin);
			textBox21->Text = Convert::ToString(xmin);
			LineItem Curve1 = panel->AddCurve("diagram", f1_list, Color::Green, SymbolType::None);
			zedGraphControl2->AxisChange();
			//// Обновляем график
			zedGraphControl2->Invalidate();
	}
private: System::Void button3_Click_1(System::Object^  sender, System::EventArgs^  e) {//2я задача без локальной погрешности
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	GraphPane^ panel1 = zedGraphControl4->GraphPane;
	panel1->CurveList->Clear();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	GraphPane^ panel2 = zedGraphControl5->GraphPane;//!!!
	/*panel2->CurveList->Clear();*/
	PointPairList^ f3_list = gcnew ZedGraph::PointPairList();//!!!
	table3->dataGridView1->Rows->Clear();
	c1 = 0; c2 = 0;
	double a, b, c;
	a = Convert::ToDouble(textBox35->Text);
	b = Convert::ToDouble(textBox36->Text);
	c = Convert::ToDouble(textBox37->Text);
	x = Convert::ToDouble(textBox33->Text);
	V1 = Convert::ToDouble(textBox32->Text);
	V2 = Convert::ToDouble(textBox34->Text);
	h = Convert::ToDouble(textBox31->Text);
	X = Convert::ToDouble(textBox28->Text);
	eloc = Convert::ToDouble(textBox27->Text);
	quan = Convert::ToInt32(textBox30->Text);
	num = 1; double u;
	E = Convert::ToDouble(textBox29->Text);
	x1 = x; v1 = v;
	int i = 1, igr=1;
	emax = 0; emin = 0;
	double randomno = x;
	double v2;
	double v1gr = V1, v2gr = V2, xgr = x, hgr = h;
	int c1gr = 0, c2gr = 0;
	while ((i < quan + 1) && (X - randomno > eloc)) {
		x1 = x; v1 = V1; v2 = V2;
		RKsys(x, V1, V2, h, a, b, c);
		RKsys(x, v1, v2, h/2, a, b, c);
		RKsys(x, v1, v2, h/2, a, b, c);
		f1_list->Add(x, V1);
		f2_list->Add(x, V2);
		double pogr = sqrt((V1 - v1)*(V1 - v1)+(V2-v2)*(V2-v2));
		table3->dataGridView1->Rows->Add(i, x, v1, v2, V1, V2, pogr, abs(pogr / 15), h, c1, c2);
		randomno = x;
		if (i == 1) {
			emin = abs(pogr / 15);
			xmin = x;
		}
		if (emax < abs(pogr / 15)) {
			emax = abs(pogr / 15);
			xmax = x;
		}
		if (emin > abs(pogr / 15)) {
			emin = abs(pogr / 15);
			xmin = x;
		}
		i++;
		if (x > 2) {
			continue;
		}
	}
	double v1gr1 = 0, v2gr1 = 0;
	while ((igr < quan + 1) && (X - xgr > eloc)) {
		for (int j = 0;j < 5;j++) {
			RKsys(xgr, v1gr, v2gr, hgr, a, b, c);
			RKsys(xgr, v1gr, v2gr, hgr / 2, a, b, c);
			RKsys(xgr, v1gr, v2gr, hgr / 2, a, b, c);
			/*f3_list->Add(v1gr*igr, v2gr*igr);*/
			/*LineItem Curve4 = panel2->AddCurve("", f3_list, Color::Green, SymbolType::None);*/
		}
		/*f3_list->Add(v1gr*igr, v2gr*igr);*/
		f3_list->Add(v1gr, v2gr);
		LineItem Curve4 = panel2->AddCurve("", f3_list, Color::Green, SymbolType::None);
		zedGraphControl5->AxisChange();
		igr++;
	}
	textBox12->Text = Convert::ToString(emax);
	textBox11->Text = Convert::ToString(xmax);
	textBox10->Text = Convert::ToString(emin);
	textBox9->Text = Convert::ToString(xmin);
	LineItem Curve1 = panel->AddCurve("diagram", f1_list, Color::Green, SymbolType::None);
	LineItem Curve2 = panel1->AddCurve("diagram", f2_list, Color::Green, SymbolType::None);
	zedGraphControl3->AxisChange();
	zedGraphControl4->AxisChange();
	//// Обновляем график
	zedGraphControl3->Invalidate();
	zedGraphControl4->Invalidate();
	zedGraphControl5->Invalidate();
}
private: System::Void button6_Click_1(System::Object^  sender, System::EventArgs^  e) {//2я задача с локальной погрешностью
	GraphPane^ panel = zedGraphControl3->GraphPane;
	panel->CurveList->Clear();
	PointPairList^ f1_list = gcnew ZedGraph::PointPairList();
	GraphPane^ panel1 = zedGraphControl4->GraphPane;
	panel1->CurveList->Clear();
	PointPairList^ f2_list = gcnew ZedGraph::PointPairList();
	GraphPane^ panel2 = zedGraphControl5->GraphPane;//!!!
	/*panel2->CurveList->Clear();*/
	PointPairList^ f3_list = gcnew ZedGraph::PointPairList();//!!!
	table3->dataGridView1->Rows->Clear();
	c1 = 0; c2 = 0;
	double a, b, c;
	a = Convert::ToDouble(textBox35->Text);
	b = Convert::ToDouble(textBox36->Text);
	c = Convert::ToDouble(textBox37->Text);
	x = Convert::ToDouble(textBox33->Text);
	V1 = Convert::ToDouble(textBox32->Text);
	V2 = Convert::ToDouble(textBox34->Text);
	h = Convert::ToDouble(textBox31->Text);
	X = Convert::ToDouble(textBox28->Text);
	eloc = Convert::ToDouble(textBox27->Text);
	quan = Convert::ToInt32(textBox30->Text);
	num = 1; double u;
	E = Convert::ToDouble(textBox29->Text);
	x1 = x; v1 = v;
	int i = 1, igr = 1;
	emax = 0; emin = 0;
	double randomno = x;
	double v2;
	double v1gr = V1, v2gr = V2, xgr = x, hgr = h;
	int c1gr = 0, c2gr = 0;		
	while ((i < quan + 1) && (X - randomno > eloc)) {
		x1 = x; v1 = V1; v2 = V2;
		CheckLocalFaultSys(x, v1, v2, h, E, c1, c2, a, b, c);
		RKsys(x, V1, V2, h, a, b, c);
		RKsys(x, v1, v2, h / 2, a, b, c);
		RKsys(x, v1, v2, h / 2, a, b, c);
		f1_list->Add(x, V1);
		f2_list->Add(x, V2);	
		double pogr = sqrt((V1 - v1)*(V1 - v1) + (V2 - v2)*(V2 - v2));
		table3->dataGridView1->Rows->Add(i, x, v1, v2, V1, V2, pogr, abs(pogr / 15), h, c1, c2);
		randomno = x;
		if (i == 1) {
			emin = abs(pogr / 15);
			xmin = x;
		}
		if (emax < abs(pogr / 15)) {
			emax = abs(pogr / 15);
			xmax = x;
		}
		if (emin > abs(pogr / 15)) {
			emin = abs(pogr / 15);
			xmin = x;
		}
		i++;
		if (x > 2) {
			continue;
		}
	}
	double v1gr1 = 0, v2gr1 = 0;
	while ((igr < quan + 1) && (X - xgr > eloc)) {
		for (int j = 0;j < 5;j++) {
			CheckLocalFaultSys(xgr, v1gr, v2gr, hgr, E, c1gr, c2gr, a, b, c);
			RKsys(xgr, v1gr, v2gr, hgr, a, b, c);
			RKsys(xgr, v1gr, v2gr, hgr / 2, a, b, c);
			RKsys(xgr, v1gr, v2gr, hgr / 2, a, b, c);
				/*f3_list->Add(v1gr*igr, v2gr*igr);*/
				/*LineItem Curve4 = panel2->AddCurve("", f3_list, Color::Green, SymbolType::None);*/
		}
		/*f3_list->Add(v1gr*igr, v2gr*igr);*/
		f3_list->Add(v1gr, v2gr);
		LineItem Curve4 = panel2->AddCurve("", f3_list, Color::Green, SymbolType::None);
		zedGraphControl5->AxisChange();
		igr++;
	}
	textBox12->Text = Convert::ToString(emax);
	textBox11->Text = Convert::ToString(xmax);
	textBox10->Text = Convert::ToString(emin);
	textBox9->Text = Convert::ToString(xmin);
	LineItem Curve1 = panel->AddCurve("diagram", f1_list, Color::Green, SymbolType::None);
	LineItem Curve2 = panel1->AddCurve("diagram", f2_list, Color::Green, SymbolType::None);
	//!!!
	zedGraphControl3->AxisChange();
	zedGraphControl4->AxisChange();
	//!!!
	//// Обновляем график
	zedGraphControl3->Invalidate();
	zedGraphControl4->Invalidate();
	zedGraphControl5->Invalidate();
}
private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	table3->ShowDialog();
}
private: System::Void zedGraphControl4_Load(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label8_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void label27_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}