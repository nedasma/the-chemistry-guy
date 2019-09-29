#pragma once
#include "Pagalbauzd.h"
#include "Reakcijos.h"
#include "Molmase.h"
#include "Koncentracija.h"
#include "Masesdalis.h"
#include "Iseiga.h"
#include "Periodine.h"

namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Uzduotys
	/// </summary>
	public ref class Uzduotys : public System::Windows::Forms::Form
	{
	public:
		Uzduotys(void)
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
		~Uzduotys()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  periodinëCheminiøElementøLentelëToolStripMenuItem;


	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::ToolStripMenuItem^  pagalbaToolStripMenuItem;
	private: System::Windows::Forms::Panel^  panel1;


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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Uzduotys::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->periodinëCheminiøElementøLentelëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->periodinëCheminiøElementøLentelëToolStripMenuItem, 
				this->pagalbaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(696, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// periodinëCheminiøElementøLentelëToolStripMenuItem
			// 
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Name = L"periodinëCheminiøElementøLentelëToolStripMenuItem";
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Size = System::Drawing::Size(282, 20);
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Text = L"Periodinë cheminiø elementø lentelë ir kt. lentelës";
			this->periodinëCheminiøElementøLentelëToolStripMenuItem->Click += gcnew System::EventHandler(this, &Uzduotys::periodinëCheminiøElementøLentelëToolStripMenuItem_Click);
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Uzduotys::pagalbaToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label1->Location = System::Drawing::Point(266, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(204, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Pasirinkite uþduoèiø tipà";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(123, 138);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Pradëti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Uzduotys::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(123, 241);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Pradëti";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Uzduotys::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(123, 350);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Pradëti";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Uzduotys::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(482, 178);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Pradëti";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Uzduotys::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(482, 295);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Pradëti";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Uzduotys::button5_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label2->ForeColor = System::Drawing::Color::OrangeRed;
			this->label2->Location = System::Drawing::Point(87, 74);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(171, 19);
			this->label2->TabIndex = 8;
			this->label2->Text = L"CHEMINËS REAKCIJOS";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::OrangeRed;
			this->label3->Location = System::Drawing::Point(54, 172);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(252, 19);
			this->label3->TabIndex = 9;
			this->label3->Text = L"MOLINË MASË, KIEKIS IR TANKIS";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label4->ForeColor = System::Drawing::Color::OrangeRed;
			this->label4->Location = System::Drawing::Point(69, 272);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(202, 19);
			this->label4->TabIndex = 10;
			this->label4->Text = L"TIRPALØ KONCENTRACIJA\r\n";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label5->ForeColor = System::Drawing::Color::OrangeRed;
			this->label5->Location = System::Drawing::Point(380, 111);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(304, 19);
			this->label5->TabIndex = 11;
			this->label5->Text = L"MEDÞIAGOS IR ELEMENTO MASËS DALIS";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label6->ForeColor = System::Drawing::Color::OrangeRed;
			this->label6->Location = System::Drawing::Point(450, 218);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(142, 19);
			this->label6->TabIndex = 12;
			this->label6->Text = L"REAKCIJOS IÐEIGA";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(696, 417);
			this->panel1->TabIndex = 13;
			// 
			// Uzduotys
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 444);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Uzduotys";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Uþduoèiø meniu";
			this->Load += gcnew System::EventHandler(this, &Uzduotys::Uzduotys_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void pagalbaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Pagalbauzd form;
				 form.ShowDialog();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Reakcijos form;
				 form.ShowDialog();
		 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Molmase form;
				 form.ShowDialog();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Koncentracija form;
				 form.ShowDialog();
			 }
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
				 Masesdalis form;
				 form.ShowDialog();
			 }
	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
				 Iseiga form;
				 form.ShowDialog();
			 }
	private: System::Void Uzduotys_Load(System::Object^  sender, System::EventArgs^  e) {
				 MaximizeBox = false;
			 }
	private: System::Void periodinëCheminiøElementøLentelëToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				Periodine form;
				form.ShowDialog();
			 }
};
}
