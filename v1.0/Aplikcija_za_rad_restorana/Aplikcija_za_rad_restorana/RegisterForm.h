#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for RegisterForm
	/// </summary>
	public ref class RegisterForm : public System::Windows::Forms::Form
	{
	public:
		RegisterForm(void)
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
		~RegisterForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LogInButton;
	private: System::Windows::Forms::Button^ confirm_register_button;
	private: System::Windows::Forms::RichTextBox^ input_password_box;


	private: System::Windows::Forms::RichTextBox^ input_name_box;

	private: System::Windows::Forms::Panel^ color_panel;
	private: System::Windows::Forms::Label^ email_label;
	private: System::Windows::Forms::Label^ input_pass_label;
	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::RichTextBox^ e_mail_textbox;
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
			this->LogInButton = (gcnew System::Windows::Forms::Button());
			this->confirm_register_button = (gcnew System::Windows::Forms::Button());
			this->input_password_box = (gcnew System::Windows::Forms::RichTextBox());
			this->input_name_box = (gcnew System::Windows::Forms::RichTextBox());
			this->color_panel = (gcnew System::Windows::Forms::Panel());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->input_pass_label = (gcnew System::Windows::Forms::Label());
			this->email_label = (gcnew System::Windows::Forms::Label());
			this->e_mail_textbox = (gcnew System::Windows::Forms::RichTextBox());
			this->color_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// LogInButton
			// 
			this->LogInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->LogInButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogInButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->LogInButton->Location = System::Drawing::Point(12, 12);
			this->LogInButton->Name = L"LogInButton";
			this->LogInButton->Size = System::Drawing::Size(117, 33);
			this->LogInButton->TabIndex = 1;
			this->LogInButton->Text = L"Nazad";
			this->LogInButton->UseVisualStyleBackColor = false;
			this->LogInButton->Click += gcnew System::EventHandler(this, &RegisterForm::LogInButton_Click);
			// 
			// confirm_register_button
			// 
			this->confirm_register_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)),
				static_cast<System::Int32>(static_cast<System::Byte>(83)), static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->confirm_register_button->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->confirm_register_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->confirm_register_button->Location = System::Drawing::Point(208, 436);
			this->confirm_register_button->Name = L"confirm_register_button";
			this->confirm_register_button->Size = System::Drawing::Size(291, 41);
			this->confirm_register_button->TabIndex = 2;
			this->confirm_register_button->Text = L"Registruj se";
			this->confirm_register_button->UseVisualStyleBackColor = false;
			this->confirm_register_button->Click += gcnew System::EventHandler(this, &RegisterForm::confirm_register_button_Click);
			// 
			// input_password_box
			// 
			this->input_password_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input_password_box->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->input_password_box->Location = System::Drawing::Point(39, 185);
			this->input_password_box->Multiline = false;
			this->input_password_box->Name = L"input_password_box";
			this->input_password_box->Size = System::Drawing::Size(376, 43);
			this->input_password_box->TabIndex = 3;
			this->input_password_box->Text = L"";
			this->input_password_box->TextChanged += gcnew System::EventHandler(this, &RegisterForm::input_password_box_TextChanged);
			// 
			// input_name_box
			// 
			this->input_name_box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input_name_box->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->input_name_box->Location = System::Drawing::Point(39, 73);
			this->input_name_box->Multiline = false;
			this->input_name_box->Name = L"input_name_box";
			this->input_name_box->Size = System::Drawing::Size(376, 43);
			this->input_name_box->TabIndex = 4;
			this->input_name_box->Text = L"";
			// 
			// color_panel
			// 
			this->color_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->color_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->color_panel->Controls->Add(this->e_mail_textbox);
			this->color_panel->Controls->Add(this->email_label);
			this->color_panel->Controls->Add(this->input_pass_label);
			this->color_panel->Controls->Add(this->name_label);
			this->color_panel->Controls->Add(this->input_password_box);
			this->color_panel->Controls->Add(this->input_name_box);
			this->color_panel->Location = System::Drawing::Point(135, 12);
			this->color_panel->Name = L"color_panel";
			this->color_panel->Size = System::Drawing::Size(461, 409);
			this->color_panel->TabIndex = 7;
			// 
			// name_label
			// 
			this->name_label->AutoSize = true;
			this->name_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->name_label->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->name_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->name_label->Location = System::Drawing::Point(33, 36);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(79, 34);
			this->name_label->TabIndex = 5;
			this->name_label->Text = L"Ime";
			// 
			// input_pass_label
			// 
			this->input_pass_label->AutoSize = true;
			this->input_pass_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->input_pass_label->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->input_pass_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)),
				static_cast<System::Int32>(static_cast<System::Byte>(170)), static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->input_pass_label->Location = System::Drawing::Point(33, 135);
			this->input_pass_label->Name = L"input_pass_label";
			this->input_pass_label->Size = System::Drawing::Size(90, 34);
			this->input_pass_label->TabIndex = 6;
			this->input_pass_label->Text = L"Sifra";
			// 
			// email_label
			// 
			this->email_label->AutoSize = true;
			this->email_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->email_label->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->email_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->email_label->Location = System::Drawing::Point(33, 250);
			this->email_label->Name = L"email_label";
			this->email_label->Size = System::Drawing::Size(116, 34);
			this->email_label->TabIndex = 7;
			this->email_label->Text = L"E-mail";
			// 
			// e_mail_textbox
			// 
			this->e_mail_textbox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->e_mail_textbox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->e_mail_textbox->Location = System::Drawing::Point(39, 287);
			this->e_mail_textbox->Multiline = false;
			this->e_mail_textbox->Name = L"e_mail_textbox";
			this->e_mail_textbox->Size = System::Drawing::Size(376, 43);
			this->e_mail_textbox->TabIndex = 8;
			this->e_mail_textbox->Text = L"";
			// 
			// RegisterForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(772, 489);
			this->Controls->Add(this->color_panel);
			this->Controls->Add(this->confirm_register_button);
			this->Controls->Add(this->LogInButton);
			this->Name = L"RegisterForm";
			this->Text = L"RegisterForm";
			this->Load += gcnew System::EventHandler(this, &RegisterForm::RegisterForm_Load);
			this->color_panel->ResumeLayout(false);
			this->color_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void RegisterForm_Load(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
	}
	private: System::Void LogInButton_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void input_password_box_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void confirm_register_button_Click(System::Object^ sender, System::EventArgs^ e) {
	bool add = false;
	if (String::IsNullOrEmpty(input_password_box->Text) || String::IsNullOrWhiteSpace(input_name_box->Text))
	{
		MessageBox::Show("Unesite sifru. ");
	}
	else if (String::IsNullOrEmpty(input_name_box->Text) || String::IsNullOrWhiteSpace(input_name_box->Text))
	{
		MessageBox::Show("Unesite korisnicko ime. ");
	}
	else if (String::IsNullOrEmpty(e_mail_textbox->Text) || String::IsNullOrWhiteSpace(e_mail_textbox->Text))
	{
		MessageBox::Show("Unesite Email. ");
	}
	else
	{
		System::IO::StreamReader^ din = IO::File::OpenText("Nalozi.txt");
		System::String^ s;

		int index_name = 0;
		int index_desc = 0;
		int index_price = 0;
		int index_stock = 0;
		

		while ((s = din->ReadLine()) != nullptr)
		{

			for (int i = 0; i < s->Length; i++) {
				if (s[i] == '|') {
					if (index_name == 0) {
						index_name = i;
					}
					else if (index_desc == 0) {
						index_desc = i;
					}
					else if (index_price == 0) {
						index_price = i;
					}
					else if (index_stock == 0) {
						index_stock = i;
						break;
					}
				}
			}
			if (s->Substring(0, index_name - 1) == input_name_box->Text)
			{
				MessageBox::Show("Ime je zauzeto. ");
			}
			else
			{
				add = true;
			}
		}

		din->Close();
		if (add == true)
		{
			System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Nalozi.txt", true);
			dat->WriteLine("\n" + input_name_box->Text + " | " + input_password_box->Text + " | " + "USER" + " | " + " 0 " + " | ");
			dat->Close();
			MessageBox::Show("Uspjsesna registracija. ");
			add = false;
			this->Hide();
		}

	}
}
};
}
