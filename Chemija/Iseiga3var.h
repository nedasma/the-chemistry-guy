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
		Klase K3; // klasės objektas
	};
	/// <summary>
	/// Summary for Iseiga3var
	/// </summary>
	public ref class Iseiga3var : public System::Windows::Forms::Form
	{
	public:
		Iseiga3var(void)
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
		~Iseiga3var()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Label^  label13;
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
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
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
			this->groupBox1->Controls->Add(this->textBox5);
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox10);
			this->groupBox1->Controls->Add(this->textBox7);
			this->groupBox1->Controls->Add(this->textBox6);
			this->groupBox1->Controls->Add(this->label13);
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
			this->groupBox1->Location = System::Drawing::Point(12, 22);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(607, 476);
			this->groupBox1->TabIndex = 5;
			this->groupBox1->TabStop = false;
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(308, 366);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(171, 20);
			this->textBox5->TabIndex = 26;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(95, 287);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(437, 23);
			this->button1->TabIndex = 23;
			this->button1->Text = L"Pateikti sprendimą";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Iseiga3var::button1_Click);
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(95, 489);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(171, 20);
			this->textBox10->TabIndex = 22;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(308, 398);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(171, 20);
			this->textBox7->TabIndex = 19;
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(308, 332);
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
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(319, 243);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(266, 20);
			this->textBox4->TabIndex = 15;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(319, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(266, 20);
			this->textBox3->TabIndex = 14;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(319, 59);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(266, 20);
			this->textBox1->TabIndex = 12;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(173, 405);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(34, 13);
			this->label11->TabIndex = 10;
			this->label11->Text = L"Ats. 3";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(173, 373);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 9;
			this->label10->Text = L"Ats. 2";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(173, 339);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 13);
			this->label9->TabIndex = 8;
			this->label9->Text = L"Ats. 1";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(39, 243);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(45, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Ats. (%):";
			// 
			// label6
			// 
			this->label6->Location = System::Drawing::Point(24, 196);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(595, 27);
			this->label6->TabIndex = 5;
			this->label6->Text = L"3.  27 g aliuminio jungėsi su 0,75 mol deguonies O₂. Reakcijos metu susidarė 46 g" 
				L" aliuminio hidroksido Al(OH)₃. Kokia jos išeiga\?  \r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(41, 140);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Ats. (g):";
			// 
			// label4
			// 
			this->label4->Location = System::Drawing::Point(24, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(595, 27);
			this->label4->TabIndex = 3;
			this->label4->Text = L"2. Kokios masės bromo Br₂ reikės reakcijai su natriu Na 31,65 g NaBr natrio bromi" 
				L"do gauti, jei reakcijos išeiga 63 %\?\r\n";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(41, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Ats. (%):";
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(24, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(595, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"1. Reaguojant 41 g magnio Mg su deguonimi O₂, susidarė 80 g magnio hidroksido MgO" 
				L"H. Kokia šios reakcijos išeiga\?";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->periodinėCheminiųElementųLentelėToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(631, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinėCheminiųElementųLentelėToolStripMenuItem
			// 
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Name = L"periodinėCheminiųElementųLentelėToolStripMenuItem";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Text = L"Periodinė cheminių elementų lentelė ir kt. lentelės";
			this->periodinėCheminiųElementųLentelėToolStripMenuItem->Click += gcnew System::EventHandler(this, &Iseiga3var::periodinėCheminiųElementųLentelėToolStripMenuItem_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(154, 440);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(132, 13);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Atsakei teisingai užduočių:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(335, 440);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(35, 13);
			this->label8->TabIndex = 29;
			this->label8->Text = L"label8";
			// 
			// Iseiga3var
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(631, 510);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Iseiga3var";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"3 variantas";
			this->Load += gcnew System::EventHandler(this, &Iseiga3var::Iseiga3var_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Iseiga3var_Load(System::Object^  sender, System::EventArgs^  e) {
				 label9->Hide();
				 label10->Hide();
				 label11->Hide();
				 textBox5->Hide();
				 textBox6->Hide();
				 textBox7->Hide();
				 label3->Hide();
				 label8->Hide();
				 MaximizeBox = false;
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 double ats1 = 0, ats2 = 0, ats3 = 0;
			 double human1, human2, human3;
			 double mol = 0, mase = 0;
			 int k = 0;
			 human1 = double::Parse(textBox1->Text);
			 human2 = double::Parse(textBox3->Text);
			 human3 = double::Parse(textBox4->Text);
			 mol = K3.Mol(K3.A, K3.n, 41, "Mg", 0, 0, "", 0);
			 ats1 = K3.Iseigask(K3.A, K3.n, 80, "Mg", mol, "OH", K3.D, K3.l);
			 ats1 = Math::Round(ats1, 2);
			 mase = K3.Teorine(31.65, 63);
			 mol = K3.Mol(K3.A, K3.n, mase, "Na", K3.D, K3.l, "Br", 0);
			 ats2 = K3.Mase(K3.A, K3.n, mol, 63, 31.65, "Br");
			 ats2 = Math::Round(ats2, 2);
			 ats3 = K3.Iseigask(K3.A, K3.n, 46, "Al", 0.75, "OH", K3.D, K3.l);
			 ats3 = Math::Round(ats3, 2);
			 label9->Show();
			 label10->Show();
			 label11->Show();
			 textBox5->Show();
			 textBox6->Show();
			 textBox7->Show();
			 label3->Show();
			 label8->Show();
			 textBox6->Text = ats1.ToString();
			 textBox5->Text = ats2.ToString();
			 textBox7->Text = ats3.ToString();
			 if(human1 == ats1)
				 k++;
			 if(human2 == ats2)
				 k++;
			 if(human3 == ats3)
				 k++;
			 label8->Text = k.ToString() + " iš 3";
			 this->button1->Enabled = false;
		 }
private: System::Void periodinėCheminiųElementųLentelėToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Periodine form;
			 form.ShowDialog();
		 }
};
}
