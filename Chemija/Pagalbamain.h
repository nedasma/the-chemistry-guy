#pragma once

namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pagalbamain
	/// </summary>
	public ref class Pagalbamain : public System::Windows::Forms::Form
	{
	public:
		Pagalbamain(void)
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
		~Pagalbamain()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;

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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(31, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(350, 37);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Sveiki atvykæ á programà, padedanèià geriau ásisavinti chemijos teorines þinias i" 
				L"r pritaikyti praktiðkai atliekant uþdavinius.\r\n";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(31, 58);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(359, 45);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Lango virðuje matysite meniu juostà, suskirstytà á dvi dalis. \r\nPaspaudus meniu j" 
				L"uostoje mygtukà \"Eiti á uþduotis\", jums atsidarys naujas langas su uþduoèiø temo" 
				L"mis.";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(31, 112);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(356, 33);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Paspaudæ meniu juostoje mygtukà \"Pagalba\", jums atsidarys langas, kuriame yra nur" 
				L"odymai, kaip naudotis programa.";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(153, 161);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(84, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Gero naudojimo!";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(60, 200);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(300, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Programà sukûrë P-5/1R grupës mokinys Nedas Matulevièius.";
			// 
			// Pagalbamain
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(402, 235);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Pagalbamain";
			this->Text = L"Pagalba";
			this->Load += gcnew System::EventHandler(this, &Pagalbamain::Pagalbamain_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pagalbamain_Load(System::Object^  sender, System::EventArgs^  e) {
				 MaximizeBox = false;
			 }
	};
}
