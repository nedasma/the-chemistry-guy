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
		Klase R; // klasës objektas
	};

	public ref class Reakcijos : public System::Windows::Forms::Form
	{
	public:
		Reakcijos(void)
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
		~Reakcijos()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  periodinëCheminiøElementøLentelëToolStripMenuItem;






	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;



	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;





	private: System::Windows::Forms::Label^  label18;
	private: System::Windows::Forms::Label^  label19;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::TextBox^  textBox10;
	private: System::Windows::Forms::Panel^  panel1;
	protected: 
	private: System::ComponentModel::IContainer^  components;

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		int ind, ind2, ind3, ind4, ind5;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Reakcijos::typeid));
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->periodinëCheminiøElementøLentelëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->periodinëCheminiøElementøLentelëToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(414, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinëCheminiøElementøLentelëToolStripMenuItem
			// 
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Name = L"periodinëCheminiøElementøLentelëToolStripMenuItem";
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Text = L"Periodinë cheminiø elementø lentelë ir kt. lentelës";
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Click += gcnew System::EventHandler(this, &Reakcijos::periodinëCheminiøElementøLentelëToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(227, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(148, 20);
			this->textBox1->TabIndex = 13;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(227, 130);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(148, 20);
			this->textBox2->TabIndex = 14;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(227, 175);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(148, 20);
			this->textBox3->TabIndex = 15;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(227, 230);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(148, 20);
			this->textBox4->TabIndex = 16;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::Color::Transparent;
			this->label9->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label9->ForeColor = System::Drawing::Color::FloralWhite;
			this->label9->Location = System::Drawing::Point(111, 374);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(24, 19);
			this->label9->TabIndex = 20;
			this->label9->Text = L"2.";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->BackColor = System::Drawing::Color::Transparent;
			this->label10->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label10->ForeColor = System::Drawing::Color::FloralWhite;
			this->label10->Location = System::Drawing::Point(111, 410);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(24, 19);
			this->label10->TabIndex = 21;
			this->label10->Text = L"3.";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label11->ForeColor = System::Drawing::Color::FloralWhite;
			this->label11->Location = System::Drawing::Point(111, 445);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(24, 19);
			this->label11->TabIndex = 22;
			this->label11->Text = L"4.";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->BackColor = System::Drawing::Color::Transparent;
			this->label12->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label12->ForeColor = System::Drawing::Color::FloralWhite;
			this->label12->Location = System::Drawing::Point(112, 481);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(24, 19);
			this->label12->TabIndex = 23;
			this->label12->Text = L"5.";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->BackColor = System::Drawing::Color::Transparent;
			this->label18->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label18->Location = System::Drawing::Point(26, 527);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(210, 18);
			this->label18->TabIndex = 29;
			this->label18->Text = L"Atsakei teisingai uþduoèiø:";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->BackColor = System::Drawing::Color::Transparent;
			this->label19->Font = (gcnew System::Drawing::Font(L"Modern No. 20", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label19->Location = System::Drawing::Point(283, 527);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(60, 18);
			this->label19->TabIndex = 30;
			this->label19->Text = L"label19";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(123, 312);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(166, 23);
			this->button1->TabIndex = 31;
			this->button1->Text = L"Pateikti sprendimà";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Reakcijos::button1_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(227, 278);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(148, 20);
			this->textBox5->TabIndex = 17;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Font = (gcnew System::Drawing::Font(L"Tahoma", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label8->ForeColor = System::Drawing::Color::FloralWhite;
			this->label8->Location = System::Drawing::Point(110, 345);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(24, 19);
			this->label8->TabIndex = 19;
			this->label8->Text = L"1.";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(142, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(147, 13);
			this->label1->TabIndex = 32;
			this->label1->Text = L"Iðspræskite ðias reakcijø lygtis:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::Control;
			this->label2->Location = System::Drawing::Point(58, 64);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(35, 13);
			this->label2->TabIndex = 33;
			this->label2->Text = L"label2";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(58, 137);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 13);
			this->label3->TabIndex = 34;
			this->label3->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(58, 182);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(35, 13);
			this->label4->TabIndex = 35;
			this->label4->Text = L"label4";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(58, 230);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(35, 13);
			this->label5->TabIndex = 36;
			this->label5->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(58, 285);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 13);
			this->label6->TabIndex = 37;
			this->label6->Text = L"label6";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(227, 371);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(148, 20);
			this->textBox6->TabIndex = 38;
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(227, 401);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(148, 20);
			this->textBox7->TabIndex = 39;
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(227, 437);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(148, 20);
			this->textBox8->TabIndex = 40;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(227, 472);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(148, 20);
			this->textBox9->TabIndex = 41;
			// 
			// textBox10
			// 
			this->textBox10->Location = System::Drawing::Point(227, 508);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(148, 20);
			this->textBox10->TabIndex = 42;
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label19);
			this->panel1->Controls->Add(this->label18);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(414, 568);
			this->panel1->TabIndex = 43;
			// 
			// Reakcijos
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(414, 593);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->Name = L"Reakcijos";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Reakcijos";
			this->Load += gcnew System::EventHandler(this, &Reakcijos::Reakcijos_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Reakcijos_Load(System::Object^  sender, System::EventArgs^  e) {
				 MaximizeBox = false;
				 label8->Hide();
				 label9->Hide();
				 label10->Hide();
				 label11->Hide();
				 label12->Hide();
				 textBox6->Hide();
				 textBox7->Hide();
				 textBox8->Hide();
				 textBox9->Hide();
				 textBox10->Hide();
				 label18->Hide();
				 label19->Hide();
				 int index, index2, index3, index4, index5;
				 R.Reakcijos(R.R, R.a, index, index2, index3, index4, index5);
				 ind = index;
				 ind2 = index2;
				 ind3 = index3;
				 ind4 = index4;
				 ind5 = index5;
				 String^ uzd1 = gcnew String(R.R[index].reakcija.c_str());
				 String^ uzd2 = gcnew String(R.R[index2].reakcija.c_str());
				 String^ uzd3 = gcnew String(R.R[index3].reakcija.c_str());
				 String^ uzd4 = gcnew String(R.R[index4].reakcija.c_str());
				 String^ uzd5 = gcnew String(R.R[index5].reakcija.c_str());
				 label2->Text = uzd1;
				 label3->Text = uzd2;
				 label4->Text = uzd3;
				 label5->Text = uzd4;
				 label6->Text = uzd5;
			 }
	private: System::Void periodinëCheminiøElementøLentelëToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Periodine form;
				 form.ShowDialog();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 String^ human1; 
				 String^ human2;
				 String^ human3; 
				 String^ human4; 
				 String^ human5;
				 int k = 0;
				 human1 = textBox1->Text;
				 human2 = textBox2->Text;
				 human3 = textBox3->Text;
				 human4 = textBox4->Text;
				 human5 = textBox5->Text;
				 String^ ats1 = gcnew String(R.R[ind].atsak.c_str());
				 String^ ats2 = gcnew String(R.R[ind2].atsak.c_str());
				 String^ ats3 = gcnew String(R.R[ind3].atsak.c_str());
				 String^ ats4 = gcnew String(R.R[ind4].atsak.c_str());
				 String^ ats5 = gcnew String(R.R[ind5].atsak.c_str());
				 label8->Show();
				 label9->Show();
				 label10->Show();
				 label11->Show();
				 label12->Show();
				 textBox6->Show();
				 textBox7->Show();
				 textBox8->Show();
				 textBox9->Show();
				 textBox10->Show();
				 label18->Show();
				 label19->Show();
				 textBox6->Text = ats1;
				 textBox7->Text = ats2;
				 textBox8->Text = ats3;
				 textBox9->Text = ats4;
				 textBox10->Text = ats5;
				 if(human1 == ats1)
				   k++;
			     if(human2 == ats2)
				   k++;
			     if(human3 == ats3)
				   k++;
				 if(human4 == ats3)
				   k++;
				 if(human5 == ats3)
				   k++;
			     label19->Text = k.ToString() + " ið 5";
				 this->button1->Enabled = false;
			 }
};
}
