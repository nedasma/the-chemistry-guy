﻿#pragma once
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
		Klase Kl1; // klasės objektas
	};
	/// <summary>
	/// Summary for Molmase1var
	/// </summary>
	public ref class Molmase1var : public System::Windows::Forms::Form
	{
	public:
		Molmase1var(void)
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
		~Molmase1var()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  periodinėCheminiųElementųLentelėToolStripMenuItem;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;


	protected: 

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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->periodinėCheminiųElementųLentelėToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(50, 24);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1. Kiek molių ir molekulių  yra 5 g vandenilio\?";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(143, 55);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(156, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Ats. (mol):";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(143, 81);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(156, 20);
			this->textBox2->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 84);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Ats. (molekulių, x 10²³):";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(3, 117);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(319, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"2. Kokia yra 3,01 x 10²³ kalcio karbonato (CaCO₃) molekulių masė\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(16, 149);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Ats. (g):";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(143, 142);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(156, 20);
			this->textBox3->TabIndex = 7;
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(3, 182);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(319, 26);
			this->label6->TabIndex = 8;
			this->label6->Text = L"3. Kokį tūrį užims n.s. ir kiek svers 1,806 x 10²³ deguonies (O₂) molekulių\?";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(143, 220);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(156, 20);
			this->textBox4->TabIndex = 9;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(20, 253);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(43, 13);
			this->label7->TabIndex = 10;
			this->label7->Text = L"Ats. (g):";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(143, 253);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(156, 20);
			this->textBox5->TabIndex = 11;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(20, 223);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(39, 13);
			this->label8->TabIndex = 12;
			this->label8->Text = L"Ats. (l):";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(84, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 23);
			this->button1->TabIndex = 13;
			this->button1->Text = L"Pateikti sprendimą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Molmase1var::button1_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(131, 339);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(156, 20);
			this->textBox6->TabIndex = 14;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(131, 365);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(156, 20);
			this->textBox7->TabIndex = 15;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(131, 391);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(156, 20);
			this->textBox8->TabIndex = 16;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(131, 417);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(156, 20);
			this->textBox9->TabIndex = 17;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(131, 443);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(156, 20);
			this->textBox10->TabIndex = 18;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(63, 346);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Ats. 1.1";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(63, 450);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 20;
			this->label10->Text = L"Ats. 3.2";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(63, 424);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(43, 13);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Ats. 3.1";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(63, 398);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(34, 13);
			this->label12->TabIndex = 22;
			this->label12->Text = L"Ats. 2";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(63, 372);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"Ats. 1.2";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->periodinėCheminiųElementųLentelėToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(322, 24);
			this->menuStrip1->TabIndex = 24;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinėCheminiųElementųLentelėToolStripMenuItem
			// 
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Name = L"periodinėCheminiųElementųLentelėToolStripMenuItem";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Text = L"Periodinė cheminių elementų lentelė ir kt. lentelės";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Click += gcnew System::EventHandler(this, &Molmase1var::periodinėCheminiųElementųLentelėToolStripMenuItem_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(50, 503);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 13);
			this->label14->TabIndex = 25;
			this->label14->Text = L"Atsakei teisingai užduočių:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(200, 503);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 26;
			this->label15->Text = L"label15";
			// 
			// Molmase1var
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(322, 555);
			this->Controls->Add(this->label15);
			this->Controls->Add(this->label14);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"Molmase1var";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"1 variantas";
			this->Load += gcnew System::EventHandler(this, &Molmase1var::Molmase1var_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Molmase1var_Load(System::Object^  sender, System::EventArgs^  e) {
				label9->Hide();
				label10->Hide();
				label11->Hide();
				label12->Hide();
				label13->Hide();
				textBox6->Hide();
				textBox7->Hide();
				textBox8->Hide();
				textBox9->Hide();
				textBox10->Hide();
				label14->Hide();
				label15->Hide();
				MaximizeBox = false;
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				double ats11 = 0, ats12 = 0, ats2 = 0, ats31 = 0, ats32 = 0;
				double human11, human12, human2, human31, human32;
				double mol;
				int k = 0;
				human11 = double::Parse(textBox1->Text);
				human12 = double::Parse(textBox2->Text);
				human2 = double::Parse(textBox3->Text);
				human31 = double::Parse(textBox4->Text);
				human32 = double::Parse(textBox5->Text);
				ats11 = Kl1.Mol(Kl1.A, Kl1.n, 5, "H", 0, 0, "", 0);
				ats12 = Kl1.Molsk(ats11) / pow(10, 23);
				mol = 0;
				mol = Kl1.Mol(Kl1.A, Kl1.n, 0, "", 0, 0, "", 3.01 * pow(10, 23));
				ats2 = Kl1.Molinemase(Kl1.D, Kl1.A, Kl1.n, Kl1.l, mol, "CaCO3");
				mol = 0;
				mol = Kl1.Mol(Kl1.A, Kl1.n, 0, "", 0, 0, "", 1.806 * pow(10, 23));
				ats31 = Kl1.Turis(Kl1.A, Kl1.n, mol, "O", 0);
				ats32 = Kl1.Molinemase(0, Kl1.A, Kl1.n, 0, mol, "O2");
				ats11 = Math::Round(ats11, 2);
				ats12 = Math::Round(ats12, 2);
				ats2 = Math::Round(ats2, 2);
				ats31 = Math::Round(ats31, 2);
				ats32 = Math::Round(ats32, 2);
				label9->Show();
				label10->Show();
				label11->Show();
				label12->Show();
				label13->Show();
				textBox6->Show();
				textBox7->Show();
				textBox8->Show();
				textBox9->Show();
				textBox10->Show();
				label14->Show();
				label15->Show();
				textBox6->Text = ats11.ToString();
				textBox7->Text = ats12.ToString();
				textBox8->Text = ats2.ToString();
				textBox9->Text = ats31.ToString();
				textBox10->Text = ats32.ToString();
				if(human11 == ats11)
				   k++;
			    if(human12 == ats12)
				   k++;
				if(human2 == ats2)
				   k++;
			    if(human31 == ats31)
				   k++;
				if(human32 == ats32)
				   k++;
				label15->Text = k.ToString() + " iš 5";
				this->button1->Enabled = false;
			 }

	private: System::Void periodinėCheminiųElementųLentelėToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Periodine form;
				 form.ShowDialog();
			 }
};
}
