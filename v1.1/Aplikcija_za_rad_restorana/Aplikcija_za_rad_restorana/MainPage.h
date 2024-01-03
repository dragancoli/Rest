#pragma once

#include <string>
#include <fstream>
#include "AddingPage.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainPage
	/// </summary>
	public ref class MainPage : public System::Windows::Forms::Form
	{
	public:
		MainPage(void)
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
		~MainPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ LogOutButton;
	private: System::Windows::Forms::Button^ button_meni;


	private: System::Windows::Forms::Button^ button_accounts;
	private: System::Windows::Forms::ListBox^ List_item;
	private: System::Windows::Forms::Button^ Pizza_button;
	private: System::Windows::Forms::Button^ brisanje_button;


	private: System::Windows::Forms::Button^ add_button;



	private: System::Windows::Forms::Button^ drink_button;




	private: System::Windows::Forms::Button^ change_item_button;
	private: System::Windows::Forms::TextBox^ to_change_name_textbox;
	private: System::Windows::Forms::Button^ save_changes_button;
	private: System::Windows::Forms::Label^ label_items_des;
	private: System::Windows::Forms::Label^ label_description_accounts;
	private: System::Windows::Forms::Button^ services_button;









	protected:

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
			this->LogOutButton = (gcnew System::Windows::Forms::Button());
			this->button_meni = (gcnew System::Windows::Forms::Button());
			this->button_accounts = (gcnew System::Windows::Forms::Button());
			this->List_item = (gcnew System::Windows::Forms::ListBox());
			this->Pizza_button = (gcnew System::Windows::Forms::Button());
			this->brisanje_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->drink_button = (gcnew System::Windows::Forms::Button());
			this->change_item_button = (gcnew System::Windows::Forms::Button());
			this->to_change_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->save_changes_button = (gcnew System::Windows::Forms::Button());
			this->label_items_des = (gcnew System::Windows::Forms::Label());
			this->label_description_accounts = (gcnew System::Windows::Forms::Label());
			this->services_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// LogOutButton
			// 
			this->LogOutButton->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOutButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->LogOutButton->Location = System::Drawing::Point(12, 12);
			this->LogOutButton->Name = L"LogOutButton";
			this->LogOutButton->Size = System::Drawing::Size(95, 36);
			this->LogOutButton->TabIndex = 0;
			this->LogOutButton->Text = L"Odjava";
			this->LogOutButton->UseVisualStyleBackColor = true;
			this->LogOutButton->Click += gcnew System::EventHandler(this, &MainPage::LogOutButton_Click);
			// 
			// button_meni
			// 
			this->button_meni->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_meni->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button_meni->Location = System::Drawing::Point(141, 14);
			this->button_meni->Name = L"button_meni";
			this->button_meni->Size = System::Drawing::Size(302, 76);
			this->button_meni->TabIndex = 1;
			this->button_meni->Text = L"Upravljane menijem i zalihama";
			this->button_meni->UseVisualStyleBackColor = true;
			this->button_meni->Click += gcnew System::EventHandler(this, &MainPage::button_meni_Click);
			// 
			// button_accounts
			// 
			this->button_accounts->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_accounts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button_accounts->Location = System::Drawing::Point(475, 16);
			this->button_accounts->Name = L"button_accounts";
			this->button_accounts->Size = System::Drawing::Size(185, 74);
			this->button_accounts->TabIndex = 3;
			this->button_accounts->Text = L"Upravljanje nalozima";
			this->button_accounts->UseVisualStyleBackColor = true;
			this->button_accounts->Click += gcnew System::EventHandler(this, &MainPage::button_accounts_Click);
			// 
			// List_item
			// 
			this->List_item->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->List_item->FormattingEnabled = true;
			this->List_item->ItemHeight = 27;
			this->List_item->Location = System::Drawing::Point(32, 182);
			this->List_item->Name = L"List_item";
			this->List_item->Size = System::Drawing::Size(721, 328);
			this->List_item->TabIndex = 4;
			this->List_item->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::List_item_SelectedIndexChanged);
			// 
			// Pizza_button
			// 
			this->Pizza_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->Pizza_button->Location = System::Drawing::Point(32, 126);
			this->Pizza_button->Name = L"Pizza_button";
			this->Pizza_button->Size = System::Drawing::Size(123, 24);
			this->Pizza_button->TabIndex = 5;
			this->Pizza_button->Text = L"Pizza";
			this->Pizza_button->UseVisualStyleBackColor = true;
			this->Pizza_button->Visible = false;
			this->Pizza_button->Click += gcnew System::EventHandler(this, &MainPage::Pizza_button_Click);
			// 
			// brisanje_button
			// 
			this->brisanje_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->brisanje_button->Location = System::Drawing::Point(763, 430);
			this->brisanje_button->Name = L"brisanje_button";
			this->brisanje_button->Size = System::Drawing::Size(140, 28);
			this->brisanje_button->TabIndex = 6;
			this->brisanje_button->Text = L"Brisanje";
			this->brisanje_button->UseVisualStyleBackColor = true;
			this->brisanje_button->Click += gcnew System::EventHandler(this, &MainPage::button1_Click);
			// 
			// add_button
			// 
			this->add_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->add_button->Location = System::Drawing::Point(763, 464);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(140, 23);
			this->add_button->TabIndex = 9;
			this->add_button->Text = L"Dodaj";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MainPage::add_button_Click);
			// 
			// drink_button
			// 
			this->drink_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->drink_button->Location = System::Drawing::Point(178, 126);
			this->drink_button->Name = L"drink_button";
			this->drink_button->Size = System::Drawing::Size(95, 24);
			this->drink_button->TabIndex = 13;
			this->drink_button->Text = L"Napitci";
			this->drink_button->UseVisualStyleBackColor = true;
			this->drink_button->Visible = false;
			this->drink_button->Click += gcnew System::EventHandler(this, &MainPage::drink_button_Click);
			// 
			// change_item_button
			// 
			this->change_item_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->change_item_button->Location = System::Drawing::Point(759, 186);
			this->change_item_button->Name = L"change_item_button";
			this->change_item_button->Size = System::Drawing::Size(144, 24);
			this->change_item_button->TabIndex = 18;
			this->change_item_button->Text = L"Izmeni";
			this->change_item_button->UseVisualStyleBackColor = true;
			this->change_item_button->Click += gcnew System::EventHandler(this, &MainPage::change_item_button_Click);
			// 
			// to_change_name_textbox
			// 
			this->to_change_name_textbox->Location = System::Drawing::Point(937, 176);
			this->to_change_name_textbox->Multiline = true;
			this->to_change_name_textbox->Name = L"to_change_name_textbox";
			this->to_change_name_textbox->Size = System::Drawing::Size(218, 34);
			this->to_change_name_textbox->TabIndex = 19;
			// 
			// save_changes_button
			// 
			this->save_changes_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->save_changes_button->Location = System::Drawing::Point(968, 216);
			this->save_changes_button->Name = L"save_changes_button";
			this->save_changes_button->Size = System::Drawing::Size(164, 29);
			this->save_changes_button->TabIndex = 20;
			this->save_changes_button->Text = L"Sacuvaj promene";
			this->save_changes_button->UseVisualStyleBackColor = true;
			this->save_changes_button->Click += gcnew System::EventHandler(this, &MainPage::save_changes_button_Click);
			// 
			// label_items_des
			// 
			this->label_items_des->AutoSize = true;
			this->label_items_des->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_items_des->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->label_items_des->Location = System::Drawing::Point(40, 154);
			this->label_items_des->Name = L"label_items_des";
			this->label_items_des->Size = System::Drawing::Size(378, 25);
			this->label_items_des->TabIndex = 21;
			this->label_items_des->Text = L"Ime | Opis  | Cijena | Broj zaliha";
			this->label_items_des->Visible = false;
			this->label_items_des->Click += gcnew System::EventHandler(this, &MainPage::label_items_des_Click);
			// 
			// label_description_accounts
			// 
			this->label_description_accounts->AutoSize = true;
			this->label_description_accounts->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_description_accounts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->label_description_accounts->Location = System::Drawing::Point(40, 153);
			this->label_description_accounts->Name = L"label_description_accounts";
			this->label_description_accounts->Size = System::Drawing::Size(263, 25);
			this->label_description_accounts->TabIndex = 22;
			this->label_description_accounts->Text = L"Ime | Opis | Permisije";
			this->label_description_accounts->Visible = false;
			// 
			// services_button
			// 
			this->services_button->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->services_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->services_button->Location = System::Drawing::Point(701, 16);
			this->services_button->Name = L"services_button";
			this->services_button->Size = System::Drawing::Size(157, 74);
			this->services_button->TabIndex = 23;
			this->services_button->Text = L"Narudzbe";
			this->services_button->UseVisualStyleBackColor = true;
			this->services_button->Visible = false;
			this->services_button->Click += gcnew System::EventHandler(this, &MainPage::services_button_Click);
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(1188, 522);
			this->Controls->Add(this->services_button);
			this->Controls->Add(this->label_description_accounts);
			this->Controls->Add(this->label_items_des);
			this->Controls->Add(this->save_changes_button);
			this->Controls->Add(this->to_change_name_textbox);
			this->Controls->Add(this->change_item_button);
			this->Controls->Add(this->drink_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->brisanje_button);
			this->Controls->Add(this->Pizza_button);
			this->Controls->Add(this->List_item);
			this->Controls->Add(this->button_accounts);
			this->Controls->Add(this->button_meni);
			this->Controls->Add(this->LogOutButton);
			this->Name = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: 	System::String^ file_name = "";
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button_meni_Click(System::Object^ sender, System::EventArgs^ e) {
	if (Pizza_button->Visible == false)
		Pizza_button->Visible = true;
	if (Pizza_button->Visible == false)
		drink_button->Visible = true;
	if (label_items_des->Visible == false)
		label_items_des->Visible = true;
	if (label_description_accounts->Visible == true)
		label_description_accounts->Visible = false;
	if (drink_button->Visible == false)
		drink_button->Visible = true;

}
private: System::Void item_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LogOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void List_item_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Pizza_button_Click(System::Object^ sender, System::EventArgs^ e) {

	file_name = gcnew String("Pizza.txt");
	System::String^ s;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (List_item->Items->Count != 0)
	{
		List_item->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		List_item->Items->Add(s);
	}
	din->Close();
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (List_item->Items->Count == 0)
	{
		MessageBox::Show("Lista ne smije biti prazna.");
	}
	else
	{
		if (!List_item->SelectedItem)
		{
			MessageBox::Show("Morate odabrati element koji brisete.");
		}
		else
		{
			System::String^ curr = List_item->SelectedItem->ToString();
			int index = List_item->FindString(curr);
			List_item->Items->RemoveAt(index);
			List_item->Hide();
			List_item->Show();
			System::String^ f_n = gcnew String("Pizza.txt");
			System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter(file_name);
			for (int i = 0; i < List_item->Items->Count; i++)
			{
				dat->WriteLine(List_item->GetItemText(List_item->Items[i]));
			}
			dat->Close();

		}
	}
}
private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (List_item->Items->Count == 0)
	{	
		MessageBox::Show("Morate odabrati neku kategoriju. ");
	}
	else
	{
		AddingPage^ add_page = gcnew AddingPage();
		add_page->ShowDialog();
		if (add_page->AddOrNot() == true)
		{
			System::String^ name = gcnew String(add_page->GetName());
			System::String^ desp = gcnew String(add_page->GetDescription());
			System::String^ price = gcnew String(add_page->GetPrice());
			System::String^ count = gcnew String(add_page->GetCount());
			System::String^ spaces = "  |  ";
			System::String^ new_item = gcnew String(name + spaces + desp + spaces + price + spaces + count + spaces);
			List_item->Items->Add(new_item);
			List_item->Hide();
			List_item->Show();

			System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter(file_name);
			for (int i = 0; i < List_item->Items->Count; i++)
			{
				dat->WriteLine(List_item->GetItemText(List_item->Items[i]));
			}
			dat->Close();
		}
	}
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void Description_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void change_item_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (List_item->Items->Count == 0)
	{
		MessageBox::Show("Ucitajte kategoriju. ");
	}
	else
	{
		if (!List_item->SelectedItem)
		{
			MessageBox::Show("Morate odabrati neku stavku. ");
		}
		else
		{
			System::String^ curr = List_item->SelectedItem->ToString();
			
			to_change_name_textbox->Text = curr;
		}
	}
}
private: System::Void save_changes_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (List_item->SelectedItem)
	{
		System::String^ curr = List_item->SelectedItem->ToString();
		int index = List_item->FindString(curr);
		List_item->Items->RemoveAt(index);
		List_item->Items->Insert(index, to_change_name_textbox->Text);
		List_item->Hide();
		List_item->Show();
		
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter(file_name);
		for (int i = 0; i < List_item->Items->Count; i++)
		{
			dat->WriteLine(List_item->GetItemText(List_item->Items[i]));
		}
		dat->Close();
	}
}
private: System::Void drink_button_Click(System::Object^ sender, System::EventArgs^ e) {
	file_name = gcnew String("Napitci.txt");
	System::String^ s;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (List_item->Items->Count != 0)
	{
		List_item->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		List_item->Items->Add(s);
	}
	din->Close();

}
private: System::Void label_items_des_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_accounts_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label_description_accounts->Visible == false)
	{
		label_description_accounts->Visible = true;
	}
	if (label_items_des->Visible == true)
	{
		label_items_des->Visible = false;
	}
	if (drink_button->Visible == true)
		drink_button->Visible = false;
	if (Pizza_button->Visible == true)
		Pizza_button->Visible = false;
	
	file_name = gcnew String("Nalozi.txt");
	System::String^ s;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (List_item->Items->Count != 0)
	{
		List_item->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		List_item->Items->Add(s);
	}
	din->Close();
}
private: System::Void services_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (label_description_accounts->Visible == true)
	{
		label_description_accounts->Visible = false;
	}
	if (label_items_des->Visible == true)
	{
		label_items_des->Visible = false;
	}
	if (drink_button->Visible == true)
		drink_button->Visible = false;
	if (Pizza_button->Visible == true)
		Pizza_button->Visible = false;

	file_name = gcnew String("Narudzbe.txt");
	System::String^ s;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (List_item->Items->Count != 0)
	{
		List_item->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		List_item->Items->Add(s);
	}
	din->Close();
}
};
}
