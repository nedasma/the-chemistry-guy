#pragma once

namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Pagalbauzd
	/// </summary>
	public ref class Pagalbauzd : public System::Windows::Forms::Form
	{
	public:
		Pagalbauzd(void)
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
		~Pagalbauzd()
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

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;

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
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Location = System::Drawing::Point(15, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(401, 33);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Meniu juosta yra programos vir�uje. Joje galite rasti du mygtukus: periodin�s che" 
				L"mini� element� lentel�s ir kit� lenteli� ir pagalbos.\r\n";
			// 
			// label2
			// 
			this->label2->Location = System::Drawing::Point(15, 66);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(398, 43);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Paspaud� ant mygtuko \"Periodin� chemini� element� lentel�\", jums atsidarys period" 
				L"in� chemini� element� lentel�. Ji bus prieinama vis� u�duo�i� tip� u�daviniams.";
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(15, 119);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(398, 35);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Taip pat j�s rasite ir kitas chemijai reikalingas lenteles. Jos bus prieinamos vi" 
				L"s� u�duo�i� tip� u�daviniams.\r\n";
			// 
			// label5
			// 
			this->label5->Location = System::Drawing::Point(15, 164);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(392, 50);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Programos lange matote �e�is mygtukus su atitinkamais u�duo�i� tipais, kurie yra " 
				L"para�yti vir� mygtuk�. Paspaud� vien� i� j�, jums atsidarys u�duo�i� langas, kur" 
				L"iame gal�site spr�sti u�davinius.";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(170, 232);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(84, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Gero naudojimo!";
			// 
			// Pagalbauzd
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(424, 264);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"Pagalbauzd";
			this->Text = L"Pagalba";
			this->Load += gcnew System::EventHandler(this, &Pagalbauzd::Pagalbauzd_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Pagalbauzd_Load(System::Object^  sender, System::EventArgs^  e) {
				 MaximizeBox = false;
			 }
};
}
