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
		Klase Kl5; // klasės objektas
	};
	/// <summary>
	/// Summary for Molmase5var
	/// </summary>
	public ref class Molmase5var : public System::Windows::Forms::Form
	{
	public:
		Molmase5var(void)
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
		~Molmase5var()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
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
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->periodinėCheminiųElementųLentelėToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label15);
			this->groupBox1->Controls->Add(this->label14);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox9);
			this->groupBox1->Controls->Add(this->textBox8);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label13);
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->textBox4);
			this->groupBox1->Controls->Add(this->textBox3);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label12);
			this->groupBox1->Controls->Add(this->label11);
			this->groupBox1->Controls->Add(this->label10);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->label5);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(291, 593);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(68, 333);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(162, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Pateikti sprendimą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Molmase5var::button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(95, 489);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(171, 20);
			this->textBox10->TabIndex = 22;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(95, 463);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(171, 20);
			this->textBox9->TabIndex = 21;
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
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(26, 496);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(43, 13);
			this->label13->TabIndex = 17;
			this->label13->Text = L"Ats. 3.2";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(120, 298);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 20);
			this->textBox5->TabIndex = 16;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(120, 272);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(171, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(120, 185);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(171, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(120, 98);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(171, 20);
			this->textBox2->TabIndex = 13;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(120, 66);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(171, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(26, 466);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(43, 13);
			this->label12->TabIndex = 11;
			this->label12->Text = L"Ats. 3.1";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(26, 435);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Ats. 2";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(26, 405);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(43, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ats. 1.2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(26, 379);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(43, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Ats. 1.1";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(0, 301);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(43, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Ats. (g):";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(0, 275);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(39, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ats. (l):";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(0, 231);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(291, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"3. Kokį tūrį užims n.s. ir kiek svers 5,659 x 10²³ helio (He) molekulių\?";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(0, 192);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ats. (g):";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(0, 144);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(307, 29);
			this->label4->TabIndex = 3;
			this->label4->Text = L"2. Kokia yra 2,874 x 10²³ kalio nitrato (KNO₃) molekulių masė\? ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(0, 98);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Ats. (molekulių, x 10²³):";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(0, 69);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ats. (mol):";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(46, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(201, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1. Kiek molių ir molekulių yra 12 g chloro\?";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->periodinėCheminiųElementųLentelėToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(319, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinėCheminiųElementųLentelėToolStripMenuItem
			// 
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Name = L"periodinėCheminiųElementųLentelėToolStripMenuItem";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Text = L"Periodinė cheminių elementų lentelė ir kt. lentelės";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Click += gcnew System::EventHandler(this, &Molmase5var::periodinėCheminiųElementųLentelėToolStripMenuItem_Click);
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Location = System::Drawing::Point(17, 544);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(132, 13);
			this->label14->TabIndex = 29;
			this->label14->Text = L"Atsakei teisingai užduočių:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Location = System::Drawing::Point(189, 544);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(41, 13);
			this->label15->TabIndex = 30;
			this->label15->Text = L"label15";
			// 
			// Molmase5var
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 617);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Molmase5var";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"5 variantas";
			this->Load += gcnew System::EventHandler(this, &Molmase5var::Molmase5var_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Molmase5var_Load(System::Object^  sender, System::EventArgs^  e) {
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
			ats11 = Kl5.Mol(Kl5.A, Kl5.n, 12, "Cl", 0, 0, "", 0);
			ats12 = Kl5.Molsk(ats11) / pow(10, 23);
			mol = Kl5.Mol(Kl5.A, Kl5.n, 0, "", 0, 0, "", 2.874 * pow(10, 23));
			ats2 = Kl5.Molinemase(Kl5.D, Kl5.A, Kl5.n, Kl5.l, mol, "KNO3");
			mol = 0;
			mol = Kl5.Mol(Kl5.A, Kl5.n, 0, "", 0, 0, "", 5.659 * pow(10, 23));
			ats31 = Kl5.Turis(Kl5.A, Kl5.n, mol, "He", 0);
			ats32 = Kl5.Molinemase(0, Kl5.A, Kl5.n, 0, mol, "He");
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
