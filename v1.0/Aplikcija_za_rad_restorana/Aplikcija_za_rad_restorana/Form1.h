#pragma once
#include "MainPage.h"
#include "RegisterForm.h"
#include "CookPage.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LogInButton;
	private: System::Windows::Forms::RichTextBox^ NameTextBox;
	private: System::Windows::Forms::RichTextBox^ PasswordTextBox;
	private: System::Windows::Forms::Label^ name_label;
	private: System::Windows::Forms::Label^ password_label;
	private: System::Windows::Forms::CheckBox^ remember_data;
	private: System::Windows::Forms::Panel^ color_panel;
	private: System::Windows::Forms::Button^ Exit_App_Button;
	private: System::Windows::Forms::Button^ register_button;



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
			this->NameTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->PasswordTextBox = (gcnew System::Windows::Forms::RichTextBox());
			this->name_label = (gcnew System::Windows::Forms::Label());
			this->password_label = (gcnew System::Windows::Forms::Label());
			this->remember_data = (gcnew System::Windows::Forms::CheckBox());
			this->color_panel = (gcnew System::Windows::Forms::Panel());
			this->Exit_App_Button = (gcnew System::Windows::Forms::Button());
			this->register_button = (gcnew System::Windows::Forms::Button());
			this->color_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// LogInButton
			// 
			this->LogInButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->LogInButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogInButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->LogInButton->Location = System::Drawing::Point(81, 290);
			this->LogInButton->Name = L"LogInButton";
			this->LogInButton->Size = System::Drawing::Size(279, 59);
			this->LogInButton->TabIndex = 0;
			this->LogInButton->Text = L"Prijava";
			this->LogInButton->UseVisualStyleBackColor = false;
			this->LogInButton->Click += gcnew System::EventHandler(this, &Form1::LogInButton_Click);
			// 
			// NameTextBox
			// 
			this->NameTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->NameTextBox->Location = System::Drawing::Point(210, 105);
			this->NameTextBox->Name = L"NameTextBox";
			this->NameTextBox->Size = System::Drawing::Size(376, 43);
			this->NameTextBox->TabIndex = 1;
			this->NameTextBox->Text = L"";
			this->NameTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::richTextBox1_TextChanged);
			// 
			// PasswordTextBox
			// 
			this->PasswordTextBox->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordTextBox->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->PasswordTextBox->Location = System::Drawing::Point(209, 201);
			this->PasswordTextBox->Name = L"PasswordTextBox";
			this->PasswordTextBox->Size = System::Drawing::Size(376, 41);
			this->PasswordTextBox->TabIndex = 2;
			this->PasswordTextBox->Text = L"";
			this->PasswordTextBox->TextChanged += gcnew System::EventHandler(this, &Form1::PasswordTextBox_TextChanged);
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
			this->name_label->Location = System::Drawing::Point(203, 64);
			this->name_label->Name = L"name_label";
			this->name_label->Size = System::Drawing::Size(79, 34);
			this->name_label->TabIndex = 3;
			this->name_label->Text = L"Ime";
			this->name_label->Click += gcnew System::EventHandler(this, &Form1::name_label_Click);
			// 
			// password_label
			// 
			this->password_label->AutoSize = true;
			this->password_label->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->password_label->Font = (gcnew System::Drawing::Font(L"Verdana", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password_label->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->password_label->Location = System::Drawing::Point(204, 164);
			this->password_label->Name = L"password_label";
			this->password_label->Size = System::Drawing::Size(90, 34);
			this->password_label->TabIndex = 4;
			this->password_label->Text = L"Sifra";
			this->password_label->Click += gcnew System::EventHandler(this, &Form1::password_label_Click);
			// 
			// remember_data
			// 
			this->remember_data->AutoSize = true;
			this->remember_data->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->remember_data->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->remember_data->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->remember_data->Location = System::Drawing::Point(209, 264);
			this->remember_data->Name = L"remember_data";
			this->remember_data->Size = System::Drawing::Size(203, 24);
			this->remember_data->TabIndex = 5;
			this->remember_data->Text = L"Zapamti moje podatake";
			this->remember_data->UseVisualStyleBackColor = false;
			// 
			// color_panel
			// 
			this->color_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->color_panel->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->color_panel->Controls->Add(this->register_button);
			this->color_panel->Controls->Add(this->LogInButton);
			this->color_panel->Location = System::Drawing::Point(173, 51);
			this->color_panel->Name = L"color_panel";
			this->color_panel->Size = System::Drawing::Size(461, 367);
			this->color_panel->TabIndex = 6;
			this->color_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Form1::panel1_Paint);
			// 
			// Exit_App_Button
			// 
			this->Exit_App_Button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(62)), static_cast<System::Int32>(static_cast<System::Byte>(83)),
				static_cast<System::Int32>(static_cast<System::Byte>(90)));
			this->Exit_App_Button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->Exit_App_Button->Location = System::Drawing::Point(1, 1);
			this->Exit_App_Button->Name = L"Exit_App_Button";
			this->Exit_App_Button->Size = System::Drawing::Size(87, 34);
			this->Exit_App_Button->TabIndex = 7;
			this->Exit_App_Button->Text = L"Exit";
			this->Exit_App_Button->UseVisualStyleBackColor = false;
			this->Exit_App_Button->Click += gcnew System::EventHandler(this, &Form1::Exit_App_Button_Click);
			// 
			// register_button
			// 
			this->register_button->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->register_button->Cursor = System::Windows::Forms::Cursors::Hand;
			this->register_button->FlatAppearance->BorderSize = 0;
			this->register_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->register_button->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->register_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->register_button->Location = System::Drawing::Point(267, 207);
			this->register_button->Name = L"register_button";
			this->register_button->Size = System::Drawing::Size(161, 29);
			this->register_button->TabIndex = 1;
			this->register_button->Text = L"Registruj se";
			this->register_button->UseVisualStyleBackColor = false;
			this->register_button->Click += gcnew System::EventHandler(this, &Form1::register_button_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(876, 449);
			this->Controls->Add(this->Exit_App_Button);
			this->Controls->Add(this->remember_data);
			this->Controls->Add(this->PasswordTextBox);
			this->Controls->Add(this->password_label);
			this->Controls->Add(this->name_label);
			this->Controls->Add(this->NameTextBox);
			this->Controls->Add(this->color_panel);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->color_panel->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
		ControlBox = false;
		this->Text = "Restoran aplikacija";
	}
	private: System::Void LogInButton_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ admin = "admin";
		if (NameTextBox->Text == admin && PasswordTextBox->Text == admin)
		{
			if (!remember_data->Checked)
			{
				NameTextBox->Clear();
				PasswordTextBox->Clear();
			}
			MessageBox::Show("Admin.");
			this->Hide();
			
			MainPage^ main = gcnew MainPage();
			main->ShowDialog();
			this->Show();
		}
		else
		{
			bool in_base = false;
			String^ name = NameTextBox->Text;
			String^ pass = PasswordTextBox->Text;
			System::IO::StreamReader^ din = gcnew IO::StreamReader("Nalozi.txt");
			String^ s = gcnew String("");
			int index_name;
			int index_desc;
			int index_price;
			int index_stock;
			while ((s = din->ReadLine()) != nullptr)
			{

				index_name = 0;
				index_desc = 0;
				index_price = 0;
				index_stock = 0;

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
				if (s->Substring(0, index_name - 1) == name && s->Substring(index_name + 2, index_desc - index_name - 3) == pass)
				{
					if (s->Substring(index_desc + 2, index_price - index_desc - 3) == "USER")
						MessageBox::Show("Prijavljeni ste. ");
					else if (s->Substring(index_desc + 2, index_price - index_desc - 3) == "COOK")
					{
						MessageBox::Show("Kuvar. ");
						CookPage^ cp = gcnew CookPage(name,"Kuvar");
						this->Hide();
						cp->ShowDialog();
						this->Show();
					}
					in_base = true;

				}
			}

			din->Close();
			if(!in_base)
				MessageBox::Show("Pogresna sifra ili korisnicko ime. ");
		}
	}
	private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void password_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void PasswordTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void name_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Exit_App_Button_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void register_button_Click(System::Object^ sender, System::EventArgs^ e) {
	RegisterForm^ reg = gcnew RegisterForm();
	this->Hide();
	reg->ShowDialog();
	this->Show();
}
};
}
