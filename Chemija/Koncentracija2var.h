#pragma once
#include <string>
#include "Klase.h"
#include "Periodine.h"

namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace {
		Klase K5; // klasës objektas
	};
	/// <summary>
	/// Summary for Koncentracija2var
	/// </summary>
	public ref class Koncentracija2var : public System::Windows::Forms::Form
	{
	public:
		Koncentracija2var(void)
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
		~Koncentracija2var()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  periodinëCheminiøElementøLentelëToolStripMenuItem;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label8;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->periodinëCheminiøElementøLentelëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(352, 539);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 295);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Pateikti sprendimà";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Koncentracija2var::button1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(95, 432);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(171, 20);
			this->textBox8->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(95, 402);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(95, 376);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(171, 20);
			this->textBox6->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(95, 257);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(171, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(95, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(95, 80);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 435);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Ats. 3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(26, 405);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ats. 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 379);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Ats. 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(26, 257);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ats. (l):";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(6, 201);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(340, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"3. Kiek litrø 0,48 mol/l koncentracijos tirpalo pagaminsime ið 0,96 mol medþiagos" 
				L"\?\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(26, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ats. (mol):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(6, 119);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(331, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"2. Kiek moliø berilio yra 75 ml tirpalo, kurio koncentracija 0,144 mol/l\?\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(22, 87);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ats. (mol/l):";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(6, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 30);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1. 3 l tirpalo iðtirpæ 0,87 mol kalcio bromido. Raskite tirpalo molinæ koncentrac" 
				L"ijà.";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->periodinëCheminiøElementøLentelëToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(380, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinëCheminiøElementøLentelëToolStripMenuItem
			// 
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Name = L"periodinëCheminiøElementøLentelëToolStripMenuItem";
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Text = L"Periodinë cheminiø elementø lentelë ir kt. lentelës";
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Click += gcnew System::EventHandler(this, &Koncentracija2var::periodinëCheminiøElementøLentelëToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(40, 493);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Atsakei teisingai uþduoèiø:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(222, 493);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 26;
			this->label8->Text = L"label8";
			// 
			// Koncentracija2var
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(380, 563);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Koncentracija2var";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"2 variantas";
			this->Load += gcnew System::EventHandler(this, &Koncentracija2var::Koncentracija2var_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Koncentracija2var_Load(System::Object^  sender, System::EventArgs^  e) {
				 label9->Hide();
				 label10->Hide();
				 label11->Hide();
				 textBox6->Hide();
				 textBox7->Hide();
				 textBox8->Hide();
				 label3->Hide();
				 label8->Hide();
				 MaximizeBox = false;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 double ats1 = 0, ats2 = 0, ats3 = 0;
				 double human1, human2, human3;
				 int k = 0;
				 human1 = double::Parse(textBox1->Text);
				 human2 = double::Parse(textBox3->Text);
				 human3 = double::Parse(textBox4->Text);
				 ats1 = K5.Molkoncentracija(3, 0.87);
				 ats2 = K5.Koncmol(0.075, 0.144);
				 ats3 = K5.Turis(K5.A, K5.n, 0.96, "", 0.48);
				 ats1 = Math::Round(ats1, 2);
				 ats2 = Math::Round(ats2, 2);
				 ats3 = Math::Round(ats3, 2);
				 label9->Show();
				 label10->Show();
				 label11->Show();
				 textBox6->Show();
				 textBox7->Show();
				 textBox8->Show();
				 label3->Show();
				 label8->Show();
				 textBox6->Text = ats1.ToString();
				 textBox7->Text = ats2.ToString();
				 textBox8->Text = ats3.ToString();
				 if(human1 == ats1)
				   k++;
			     if(human2 == ats2)
				   k++;
			     if(human3 == ats3)
				   k++;
				 label8->Text = k.ToString() + " ið 3";
				 this->button1->Enabled = false;
		 }
	private: System::Void periodinëCheminiøElementøLentelëToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
					Periodine form;
					form.ShowDialog();
			 }
};
}
