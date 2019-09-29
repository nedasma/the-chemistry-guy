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
		Klase K8; // klasės objektas
	};
	/// <summary>
	/// Summary for Masesdalis2var
	/// </summary>
	public ref class Masesdalis2var : public System::Windows::Forms::Form
	{
	public:
		Masesdalis2var(void)
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
		~Masesdalis2var()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox2;
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
	private: System::Windows::Forms::ToolStripMenuItem^  periodinėCheminiųElementųLentelėToolStripMenuItem;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;



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
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->periodinėCheminiųElementųLentelėToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->textBox2);
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
			this->groupBox1->Location = System::Drawing::Point(0, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(336, 548);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(56, 365);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 27;
			this->label8->Text = L"Ats. 1.2";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(143, 362);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 20);
			this->textBox5->TabIndex = 26;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(41, 85);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(97, 13);
			this->label3->TabIndex = 25;
			this->label3->Text = L"Ats. (deguonies %):";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 82);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 20);
			this->textBox2->TabIndex = 24;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Pateikti sprendimą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Masesdalis2var::button1_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(143, 432);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(171, 20);
			this->textBox8->TabIndex = 20;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(143, 398);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(143, 336);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(171, 20);
			this->textBox6->TabIndex = 18;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(143, 250);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(171, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(143, 154);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 56);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(56, 435);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Ats. 3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(56, 401);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ats. 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(56, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Ats. 1.1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(41, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(28, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ats.:";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(12, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(330, 35);
			this->label6->TabIndex = 5;
			this->label6->Text = L"3.  Kuriame junginyje azoto masės dalis yra didžiausia: amoniake (NH₃), azoto mon" 
				L"okside (NO), ar azoto rūgštyje (HNO₃)\?\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 157);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(45, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ats. (%):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(26, 121);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(265, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"2. Raskite vandenilio masės dalį azoto rūgštyje (HNO₃).\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(74, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ats. (natrio %):";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(6, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(355, 20);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1. Apskaičiuokite natrio ir deguonies masės dalis natrio okside Na₂O.";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->periodinėCheminiųElementųLentelėToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(342, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinėCheminiųElementųLentelėToolStripMenuItem
			// 
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Name = L"periodinėCheminiųElementųLentelėToolStripMenuItem";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Text = L"Periodinė cheminių elementų lentelė ir kt. lentelės";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Click += gcnew System::EventHandler(this, &Masesdalis2var::periodinėCheminiųElementųLentelėToolStripMenuItem_Click);
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(41, 492);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(132, 13);
			this->label12->TabIndex = 29;
			this->label12->Text = L"Atsakei teisingai užduočių:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(226, 492);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(41, 13);
			this->label13->TabIndex = 30;
			this->label13->Text = L"label13";
			// 
			// Masesdalis2var
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(342, 562);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Masesdalis2var";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"2 variantas";
			this->Load += gcnew System::EventHandler(this, &Masesdalis2var::Masesdalis2var_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Masesdalis2var_Load(System::Object^  sender, System::EventArgs^  e) {
				label8->Hide();
				label9->Hide();
				label10->Hide();
				label11->Hide();
				textBox5->Hide();
				textBox6->Hide();
				textBox7->Hide();
				textBox8->Hide();
				label12->Hide();
				label13->Hide();
				MaximizeBox = false;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 double ats2 = 0;
				 int ats11 = 0, ats12 = 0;
				 std::string ats3;
				 double human11, human12, human2;
				 String^ human3;
				 int w1 = 0, w2 = 0;
				 int k = 0;
				 human11 = double::Parse(textBox1->Text);
				 human12 = double::Parse(textBox2->Text);
				 human2 = double::Parse(textBox3->Text);
				 human3 = textBox4->Text;
				 K8.Masesdalissk(K8.A, K8.n, "Na", 62, w1, w2);
				 ats11 = w1;
				 ats12 = w2;
				 ats2 = K8.Masesdalisjung(K8.A, K8.D, K8.n, K8.l, "HNO3", "H");
				 ats2 = Math::Round(ats2, 2);
			     String^ x2 = gcnew String(ats3.c_str()); 
				 x2 = "NH3";
				 label8->Show();
				 label9->Show();
				 label10->Show();
				 label11->Show();
				 textBox5->Show();
				 textBox6->Show();
				 textBox7->Show();
				 textBox8->Show();
				 label12->Show();
				 label13->Show();
				 textBox6->Text = ats11.ToString();
				 textBox5->Text = ats12.ToString();
				 textBox7->Text = ats2.ToString();
				 textBox8->Text = x2;
				 if(human11 == ats11)
				   k++;
			     if(human12 == ats12)
				   k++;
				 if(human2 == ats2)
				   k++;
			     if(human3 == x2)
				   k++;
				 label13->Text = k.ToString() + " iš 4";
				 this->button1->Enabled = false;
			 }
	private: System::Void periodinėCheminiųElementųLentelėToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Periodine form;
				 form.ShowDialog();
			 }
};
}
