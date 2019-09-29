#pragma once
#include "Koncentracija1var.h"
#include "Koncentracija2var.h"
#include "Koncentracija3var.h"

namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Koncentracija
	/// </summary>
	public ref class Koncentracija : public System::Windows::Forms::Form
	{
	public:
		Koncentracija(void)
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
		~Koncentracija()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Panel^  panel1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Koncentracija::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Cambria", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(186)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(59, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(157, 19);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Pasirinkite variantà";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(82, 58);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(115, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1 variantas";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Koncentracija::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, 115);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(115, 23);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2 variantas";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Koncentracija::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(82, 175);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(115, 23);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3 variantas";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Koncentracija::button3_Click);
			// 
			// panel1
			// 
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(2, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(293, 265);
			this->panel1->TabIndex = 4;
			// 
			// Koncentracija
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(289, 265);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->panel1);
			this->Name = L"Koncentracija";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Koncentracija";
			this->Load += gcnew System::EventHandler(this, &Koncentracija::Koncentracija_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 Koncentracija1var form;
				 form.ShowDialog();
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
				 Koncentracija2var form;
				 form.ShowDialog();
			 }
	private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
				 Koncentracija3var form;
				 form.ShowDialog();
		 }
private: System::Void Koncentracija_Load(System::Object^  sender, System::EventArgs^  e) {
			 MaximizeBox = false;
		 }
};
}
