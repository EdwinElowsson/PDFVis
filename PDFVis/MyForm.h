#pragma once
#include <string>

using namespace std;

using namespace System;
using namespace System::Drawing;
using namespace System::Windows::Forms;



namespace PDFVis {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: AxAcroPDFLib::AxAcroPDF^ axAcroPDF1;
	protected:
	private: System::Windows::Forms::Button^ button1;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->axAcroPDF1 = (gcnew AxAcroPDFLib::AxAcroPDF());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axAcroPDF1))->BeginInit();
			this->SuspendLayout();
			// 
			// axAcroPDF1
			// 
			this->axAcroPDF1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left));
			this->axAcroPDF1->Enabled = true;
			this->axAcroPDF1->Location = System::Drawing::Point(106, 80);
			this->axAcroPDF1->Name = L"axAcroPDF1";
			this->axAcroPDF1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^>(resources->GetObject(L"axAcroPDF1.OcxState")));
			this->axAcroPDF1->Size = System::Drawing::Size(426, 446);
			this->axAcroPDF1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(549, 244);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(123, 63);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(878, 596);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->axAcroPDF1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->axAcroPDF1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ openFileDialog1 = gcnew OpenFileDialog;
		openFileDialog1->ShowDialog();
		axAcroPDF1->src = openFileDialog1->FileName;

		//axAcroPDF1-> LoadFile("Z:\\Filer\\3040502.pdf");

		//string str1{};
		//str1 = "Z:\\Filer\\3040502.pdf";
		//String^ stra = gcnew String(str1.c_str());
		//axAcroPDF1->src = stra;

		//axAcroPDF1->LoadFile(stra);
	}


	};
}
