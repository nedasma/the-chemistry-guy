#pragma once

namespace Chemija {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Periodine
	/// </summary>
	public ref class Periodine : public System::Windows::Forms::Form
	{
	public:
		Periodine(void)
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
		~Periodine()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxAcroPDFLib::AxAcroPDF^  axAcroPDF1;
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Periodine::typeid));
			this->axAcroPDF1 = (gcnew AxAcroPDFLib::AxAcroPDF());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axAcroPDF1))->BeginInit();
			this->SuspendLayout();
			// 
			// axAcroPDF1
			// 
			this->axAcroPDF1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom) 
				| System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->axAcroPDF1->Enabled = true;
			this->axAcroPDF1->Location = System::Drawing::Point(1, 0);
			this->axAcroPDF1->Name = L"axAcroPDF1";
			this->axAcroPDF1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axAcroPDF1.OcxState")));
			this->axAcroPDF1->Size = System::Drawing::Size(742, 555);
			this->axAcroPDF1->TabIndex = 0;
			// 
			// Periodine
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(739, 554);
			this->Controls->Add(this->axAcroPDF1);
			this->Name = L"Periodine";
			this->Text = L"Periodinë cheminiø elementø lentelë ir kt. lentelës";
			this->Load += gcnew System::EventHandler(this, &Periodine::Periodine_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axAcroPDF1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Periodine_Load(System::Object^  sender, System::EventArgs^  e) {
				 axAcroPDF1->LoadFile("Failai\\periodine_cheminiu_elementu_lentele.pdf");	
			 }
	};
}
