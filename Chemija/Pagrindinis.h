#pragma once
#include "Uzduotys.h"
#include "Pagalbamain.h"


namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;


	/// <summary>
	/// Summary for Pagrindinis
	/// </summary>
	public ref class Pagrindinis : public System::Windows::Forms::Form
	{
	public:
		Pagrindinis(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
	

	protected:
		

		~Pagrindinis()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  eitiÁUþduotisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  pagalbaToolStripMenuItem;
	private: System::Windows::Forms::Label^  label1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Pagrindinis::typeid));
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->eitiÁUþduotisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->pagalbaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->menuStrip1->SuspendLayout();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->eitiÁUþduotisToolStripMenuItem, 
				this->pagalbaToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(609, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// eitiÁUþduotisToolStripMenuItem
			// 
			this->eitiÁUþduotisToolStripMenuItem->Name = L"eitiÁUþduotisToolStripMenuItem";
			this->eitiÁUþduotisToolStripMenuItem->Size = System::Drawing::Size(89, 20);
			this->eitiÁUþduotisToolStripMenuItem->Text = L"Eiti á uþduotis";
			this->eitiÁUþduotisToolStripMenuItem->Click += gcnew System::EventHandler(this, &Pagrindinis::eitiÁUþduotisToolStripMenuItem_Click);
			// 
			// pagalbaToolStripMenuItem
			// 
			this->pagalbaToolStripMenuItem->Name = L"pagalbaToolStripMenuItem";
			this->pagalbaToolStripMenuItem->Size = System::Drawing::Size(61, 20);
			this->pagalbaToolStripMenuItem->Text = L"Pagalba";
			this->pagalbaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Pagrindinis::pagalbaToolStripMenuItem_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::SaddleBrown;
			this->label1->Location = System::Drawing::Point(90, 10);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(443, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Chemijos mokomoji medþiaga moksleiviams";
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(0, 27);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(609, 234);
			this->panel1->TabIndex = 3;
			// 
			// Pagrindinis
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(609, 257);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menuStrip1);
			this->ForeColor = System::Drawing::Color::LightGray;
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Pagrindinis";
			this->Text = L"Chemikas-2017, v.1.0";
			this->Load += gcnew System::EventHandler(this, &Pagrindinis::Pagrindinis_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void eitiÁUþduotisToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Uzduotys form;
				 form.ShowDialog();
				 Close();
			 }
	private: System::Void pagalbaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
				 Pagalbamain form;
				 form.ShowDialog();
			 }
	private: System::Void Pagrindinis_Load(System::Object^  sender, System::EventArgs^  e) {
				 MaximizeBox = false;
			 }
	};
}
