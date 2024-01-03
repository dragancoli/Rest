#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for SmallAddingPage
	/// </summary>
	public ref class SmallAddingPage : public System::Windows::Forms::Form
	{
	public:
		SmallAddingPage(void)
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
		~SmallAddingPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ inputTextBox;
	protected:
	private: System::Windows::Forms::Label^ NameTextLabel;
	private: System::Windows::Forms::Button^ ConfirmButtonBox;


	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->inputTextBox = (gcnew System::Windows::Forms::TextBox());
			this->NameTextLabel = (gcnew System::Windows::Forms::Label());
			this->ConfirmButtonBox = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// inputTextBox
			// 
			this->inputTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->inputTextBox->Location = System::Drawing::Point(38, 118);
			this->inputTextBox->Name = L"inputTextBox";
			this->inputTextBox->Size = System::Drawing::Size(261, 30);
			this->inputTextBox->TabIndex = 0;
			// 
			// NameTextLabel
			// 
			this->NameTextLabel->AutoSize = true;
			this->NameTextLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTextLabel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->NameTextLabel->Location = System::Drawing::Point(86, 60);
			this->NameTextLabel->Name = L"NameTextLabel";
			this->NameTextLabel->Size = System::Drawing::Size(168, 29);
			this->NameTextLabel->TabIndex = 1;
			this->NameTextLabel->Text = L"Unesite naziv";
			this->NameTextLabel->Click += gcnew System::EventHandler(this, &SmallAddingPage::NameTextLabel_Click);
			// 
			// ConfirmButtonBox
			// 
			this->ConfirmButtonBox->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->ConfirmButtonBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ConfirmButtonBox->Location = System::Drawing::Point(91, 178);
			this->ConfirmButtonBox->Name = L"ConfirmButtonBox";
			this->ConfirmButtonBox->Size = System::Drawing::Size(152, 45);
			this->ConfirmButtonBox->TabIndex = 2;
			this->ConfirmButtonBox->Text = L"Sacuvaj promjene";
			this->ConfirmButtonBox->UseVisualStyleBackColor = false;
			this->ConfirmButtonBox->Click += gcnew System::EventHandler(this, &SmallAddingPage::ConfirmButtonBox_Click);
			// 
			// SmallAddingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(350, 260);
			this->Controls->Add(this->ConfirmButtonBox);
			this->Controls->Add(this->NameTextLabel);
			this->Controls->Add(this->inputTextBox);
			this->Name = L"SmallAddingPage";
			this->Text = L"SmallAddingPage";
			this->Load += gcnew System::EventHandler(this, &SmallAddingPage::SmallAddingPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: System::String^ GetAddingText()
	{
		return inputTextBox->Text;
	}
	private: System::Void SmallAddingPage_Load(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
		MinimizeBox = false;
		ControlBox = false;
	}
	private: System::Void NameTextLabel_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ConfirmButtonBox_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(inputTextBox->Text) || String::IsNullOrWhiteSpace(inputTextBox->Text))
	{
		MessageBox::Show("Morate unjeti naziv. ");
	}
	else
	{
		MessageBox::Show("Promjene izvrsene uspjesno. ");
		this->Hide();
	}
}
};
}
