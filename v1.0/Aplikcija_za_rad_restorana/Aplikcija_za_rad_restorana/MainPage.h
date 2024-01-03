#pragma once

#include <string>
#include <fstream>
#include <string.h>
#include "AddingPage.h"
#include "EditFoodMenu.h"

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


	private: System::Windows::Forms::Button^ brisanje_button;


	private: System::Windows::Forms::Button^ add_button;








	private: System::Windows::Forms::Button^ change_item_button;
	private: System::Windows::Forms::TextBox^ to_change_name_textbox;
	private: System::Windows::Forms::Button^ save_changes_button;
	private: System::Windows::Forms::Label^ label_items_des;
	private: System::Windows::Forms::Label^ label_description_accounts;
	private: System::Windows::Forms::Button^ services_button;
	private: System::Windows::Forms::ListView^ listView1;
	private: System::Windows::Forms::ColumnHeader^ Naziv;
	private: System::Windows::Forms::ColumnHeader^ Opis;
	private: System::Windows::Forms::ColumnHeader^ Cijena;
	private: System::Windows::Forms::ColumnHeader^ Broj_zaliha;
	private: System::Windows::Forms::TextBox^ to_change_description_textbox;
	private: System::Windows::Forms::TextBox^ to_change_price_textbox;
	private: System::Windows::Forms::TextBox^ to_change_count_textbox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ statistics_panel;
	private: System::Windows::Forms::Label^ full_cost_label;
	private: System::Windows::Forms::Label^ potelntial_cost_label;
	private: System::Windows::Forms::Label^ paid_label;
	private: System::Windows::Forms::Label^ should_paid_label;
	private: System::Windows::Forms::ComboBox^ kategorije_comboBox;

	private: System::Windows::Forms::Button^ prizak_button;
	private: System::Windows::Forms::Button^ edit_meni_button;














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
			this->brisanje_button = (gcnew System::Windows::Forms::Button());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->change_item_button = (gcnew System::Windows::Forms::Button());
			this->to_change_name_textbox = (gcnew System::Windows::Forms::TextBox());
			this->save_changes_button = (gcnew System::Windows::Forms::Button());
			this->label_items_des = (gcnew System::Windows::Forms::Label());
			this->label_description_accounts = (gcnew System::Windows::Forms::Label());
			this->services_button = (gcnew System::Windows::Forms::Button());
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->Naziv = (gcnew System::Windows::Forms::ColumnHeader());
			this->Opis = (gcnew System::Windows::Forms::ColumnHeader());
			this->Cijena = (gcnew System::Windows::Forms::ColumnHeader());
			this->Broj_zaliha = (gcnew System::Windows::Forms::ColumnHeader());
			this->to_change_description_textbox = (gcnew System::Windows::Forms::TextBox());
			this->to_change_price_textbox = (gcnew System::Windows::Forms::TextBox());
			this->to_change_count_textbox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->statistics_panel = (gcnew System::Windows::Forms::Panel());
			this->should_paid_label = (gcnew System::Windows::Forms::Label());
			this->paid_label = (gcnew System::Windows::Forms::Label());
			this->potelntial_cost_label = (gcnew System::Windows::Forms::Label());
			this->full_cost_label = (gcnew System::Windows::Forms::Label());
			this->kategorije_comboBox = (gcnew System::Windows::Forms::ComboBox());
			this->prizak_button = (gcnew System::Windows::Forms::Button());
			this->edit_meni_button = (gcnew System::Windows::Forms::Button());
			this->statistics_panel->SuspendLayout();
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
			this->button_meni->Location = System::Drawing::Point(350, 17);
			this->button_meni->Name = L"button_meni";
			this->button_meni->Size = System::Drawing::Size(251, 76);
			this->button_meni->TabIndex = 1;
			this->button_meni->Text = L"Uredjivanje kategorija";
			this->button_meni->UseVisualStyleBackColor = true;
			this->button_meni->Click += gcnew System::EventHandler(this, &MainPage::button_meni_Click);
			// 
			// button_accounts
			// 
			this->button_accounts->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_accounts->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button_accounts->Location = System::Drawing::Point(619, 17);
			this->button_accounts->Name = L"button_accounts";
			this->button_accounts->Size = System::Drawing::Size(185, 74);
			this->button_accounts->TabIndex = 3;
			this->button_accounts->Text = L"Upravljanje nalozima";
			this->button_accounts->UseVisualStyleBackColor = true;
			this->button_accounts->Click += gcnew System::EventHandler(this, &MainPage::button_accounts_Click);
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
			this->add_button->Size = System::Drawing::Size(140, 33);
			this->add_button->TabIndex = 9;
			this->add_button->Text = L"Dodaj";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &MainPage::add_button_Click);
			// 
			// change_item_button
			// 
			this->change_item_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->change_item_button->Location = System::Drawing::Point(820, 128);
			this->change_item_button->Name = L"change_item_button";
			this->change_item_button->Size = System::Drawing::Size(144, 24);
			this->change_item_button->TabIndex = 18;
			this->change_item_button->Text = L"Izmeni";
			this->change_item_button->UseVisualStyleBackColor = true;
			this->change_item_button->Click += gcnew System::EventHandler(this, &MainPage::change_item_button_Click);
			// 
			// to_change_name_textbox
			// 
			this->to_change_name_textbox->Location = System::Drawing::Point(986, 128);
			this->to_change_name_textbox->Name = L"to_change_name_textbox";
			this->to_change_name_textbox->Size = System::Drawing::Size(161, 22);
			this->to_change_name_textbox->TabIndex = 19;
			// 
			// save_changes_button
			// 
			this->save_changes_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)),
				static_cast<System::Int32>(static_cast<System::Byte>(73)), static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->save_changes_button->Location = System::Drawing::Point(983, 260);
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
			this->label_items_des->Location = System::Drawing::Point(40, 112);
			this->label_items_des->Name = L"label_items_des";
			this->label_items_des->Size = System::Drawing::Size(244, 25);
			this->label_items_des->TabIndex = 21;
			this->label_items_des->Text = L"Odaberite kategoriju";
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
			this->label_description_accounts->Location = System::Drawing::Point(40, 157);
			this->label_description_accounts->Name = L"label_description_accounts";
			this->label_description_accounts->Size = System::Drawing::Size(148, 25);
			this->label_description_accounts->TabIndex = 22;
			this->label_description_accounts->Text = L"Lista naloga";
			this->label_description_accounts->Visible = false;
			// 
			// services_button
			// 
			this->services_button->Font = (gcnew System::Drawing::Font(L"Verdana", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->services_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->services_button->Location = System::Drawing::Point(820, 16);
			this->services_button->Name = L"services_button";
			this->services_button->Size = System::Drawing::Size(163, 74);
			this->services_button->TabIndex = 23;
			this->services_button->Text = L"Narudzbe";
			this->services_button->UseVisualStyleBackColor = true;
			this->services_button->Click += gcnew System::EventHandler(this, &MainPage::services_button_Click);
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(4) {
				this->Naziv, this->Opis,
					this->Cijena, this->Broj_zaliha
			});
			this->listView1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HeaderStyle = System::Windows::Forms::ColumnHeaderStyle::Nonclickable;
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(45, 190);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(603, 276);
			this->listView1->TabIndex = 24;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::listView1_SelectedIndexChanged);
			// 
			// Naziv
			// 
			this->Naziv->Text = L"Naziv";
			this->Naziv->Width = 100;
			// 
			// Opis
			// 
			this->Opis->Text = L"Opis";
			this->Opis->Width = 200;
			// 
			// Cijena
			// 
			this->Cijena->Text = L"Cijena";
			// 
			// Broj_zaliha
			// 
			this->Broj_zaliha->Text = L"Broj zaliha";
			this->Broj_zaliha->Width = 100;
			// 
			// to_change_description_textbox
			// 
			this->to_change_description_textbox->Location = System::Drawing::Point(986, 162);
			this->to_change_description_textbox->Name = L"to_change_description_textbox";
			this->to_change_description_textbox->Size = System::Drawing::Size(161, 22);
			this->to_change_description_textbox->TabIndex = 25;
			// 
			// to_change_price_textbox
			// 
			this->to_change_price_textbox->Location = System::Drawing::Point(986, 190);
			this->to_change_price_textbox->Name = L"to_change_price_textbox";
			this->to_change_price_textbox->Size = System::Drawing::Size(161, 22);
			this->to_change_price_textbox->TabIndex = 26;
			// 
			// to_change_count_textbox
			// 
			this->to_change_count_textbox->Location = System::Drawing::Point(986, 218);
			this->to_change_count_textbox->Name = L"to_change_count_textbox";
			this->to_change_count_textbox->Size = System::Drawing::Size(161, 22);
			this->to_change_count_textbox->TabIndex = 27;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(3, 6);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 16);
			this->label1->TabIndex = 28;
			this->label1->Text = L"Proracun:";
			this->label1->Click += gcnew System::EventHandler(this, &MainPage::label1_Click_1);
			// 
			// statistics_panel
			// 
			this->statistics_panel->Controls->Add(this->should_paid_label);
			this->statistics_panel->Controls->Add(this->paid_label);
			this->statistics_panel->Controls->Add(this->potelntial_cost_label);
			this->statistics_panel->Controls->Add(this->full_cost_label);
			this->statistics_panel->Controls->Add(this->label1);
			this->statistics_panel->Location = System::Drawing::Point(675, 190);
			this->statistics_panel->Name = L"statistics_panel";
			this->statistics_panel->Size = System::Drawing::Size(254, 188);
			this->statistics_panel->TabIndex = 29;
			this->statistics_panel->Visible = false;
			this->statistics_panel->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MainPage::panel1_Paint);
			// 
			// should_paid_label
			// 
			this->should_paid_label->AutoSize = true;
			this->should_paid_label->Location = System::Drawing::Point(142, 61);
			this->should_paid_label->Name = L"should_paid_label";
			this->should_paid_label->Size = System::Drawing::Size(18, 16);
			this->should_paid_label->TabIndex = 32;
			this->should_paid_label->Text = L"pl";
			// 
			// paid_label
			// 
			this->paid_label->AutoSize = true;
			this->paid_label->Location = System::Drawing::Point(111, 34);
			this->paid_label->Name = L"paid_label";
			this->paid_label->Size = System::Drawing::Size(18, 16);
			this->paid_label->TabIndex = 31;
			this->paid_label->Text = L"pl";
			// 
			// potelntial_cost_label
			// 
			this->potelntial_cost_label->AutoSize = true;
			this->potelntial_cost_label->Location = System::Drawing::Point(3, 61);
			this->potelntial_cost_label->Name = L"potelntial_cost_label";
			this->potelntial_cost_label->Size = System::Drawing::Size(133, 16);
			this->potelntial_cost_label->TabIndex = 30;
			this->potelntial_cost_label->Text = L"Potrencijalna zarada:";
			this->potelntial_cost_label->Click += gcnew System::EventHandler(this, &MainPage::label2_Click);
			// 
			// full_cost_label
			// 
			this->full_cost_label->AutoSize = true;
			this->full_cost_label->Location = System::Drawing::Point(3, 34);
			this->full_cost_label->Name = L"full_cost_label";
			this->full_cost_label->Size = System::Drawing::Size(102, 16);
			this->full_cost_label->TabIndex = 29;
			this->full_cost_label->Text = L"Ukupna zarada:";
			this->full_cost_label->Click += gcnew System::EventHandler(this, &MainPage::full_cost_label_Click);
			// 
			// kategorije_comboBox
			// 
			this->kategorije_comboBox->FormattingEnabled = true;
			this->kategorije_comboBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Napitci", L"Pizza" });
			this->kategorije_comboBox->Location = System::Drawing::Point(45, 149);
			this->kategorije_comboBox->Name = L"kategorije_comboBox";
			this->kategorije_comboBox->Size = System::Drawing::Size(121, 24);
			this->kategorije_comboBox->TabIndex = 30;
			this->kategorije_comboBox->Visible = false;
			this->kategorije_comboBox->SelectedIndexChanged += gcnew System::EventHandler(this, &MainPage::comboBox1_SelectedIndexChanged);
			// 
			// prizak_button
			// 
			this->prizak_button->Location = System::Drawing::Point(193, 150);
			this->prizak_button->Name = L"prizak_button";
			this->prizak_button->Size = System::Drawing::Size(91, 23);
			this->prizak_button->TabIndex = 31;
			this->prizak_button->Text = L"Prikaz";
			this->prizak_button->UseVisualStyleBackColor = true;
			this->prizak_button->Visible = false;
			this->prizak_button->Click += gcnew System::EventHandler(this, &MainPage::prizak_button_Click);
			// 
			// edit_meni_button
			// 
			this->edit_meni_button->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_meni_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->edit_meni_button->Location = System::Drawing::Point(130, 17);
			this->edit_meni_button->Name = L"edit_meni_button";
			this->edit_meni_button->Size = System::Drawing::Size(204, 76);
			this->edit_meni_button->TabIndex = 32;
			this->edit_meni_button->Text = L"Uredjivanje menija";
			this->edit_meni_button->UseVisualStyleBackColor = true;
			this->edit_meni_button->Click += gcnew System::EventHandler(this, &MainPage::button1_Click_1);
			// 
			// MainPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(1188, 522);
			this->Controls->Add(this->edit_meni_button);
			this->Controls->Add(this->prizak_button);
			this->Controls->Add(this->kategorije_comboBox);
			this->Controls->Add(this->statistics_panel);
			this->Controls->Add(this->to_change_count_textbox);
			this->Controls->Add(this->to_change_price_textbox);
			this->Controls->Add(this->to_change_description_textbox);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->services_button);
			this->Controls->Add(this->label_description_accounts);
			this->Controls->Add(this->label_items_des);
			this->Controls->Add(this->save_changes_button);
			this->Controls->Add(this->to_change_name_textbox);
			this->Controls->Add(this->change_item_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->brisanje_button);
			this->Controls->Add(this->button_accounts);
			this->Controls->Add(this->button_meni);
			this->Controls->Add(this->LogOutButton);
			this->Name = L"MainPage";
			this->Load += gcnew System::EventHandler(this, &MainPage::MainPage_Load);
			this->statistics_panel->ResumeLayout(false);
			this->statistics_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion/*
	private: System::Void listView1_ColumnWidthChanging(System::Object^ sender, System::Windows::Forms::ColumnWidthChangingEventArgs^ e) {
		e->Cancel = true; // Blokiranje promjene širine stupaca
	}
	private: System::Void listView1_Resize(System::Object^ sender, System::EventArgs^ e) {
			   for (int i = 0; i < listView1->Columns->Count; i++) {
				   listView1->Columns[i]->Width = listView1->Columns[i]->Width;
			   }
	}*/
	public: 	System::String^ file_name = "";
	private: System::Void MainPage_Load(System::Object^ sender, System::EventArgs^ e) {
		
		MaximizeBox = false;
		
		
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button_meni_Click(System::Object^ sender, System::EventArgs^ e) {
	if (kategorije_comboBox->Visible == false)
		kategorije_comboBox->Visible = true;
	if (prizak_button->Visible == false)
		prizak_button->Visible = true;
	if (label_items_des->Visible == false)
		label_items_des->Visible = true;
	if (label_description_accounts->Visible == true)
		label_description_accounts->Visible = false;
	if (statistics_panel->Visible == true)
		statistics_panel->Visible = false;
	System::IO::StreamReader^ din = IO::File::OpenText("Meni.txt");
	if (listView1->Items->Count != 0)
	{
		listView1->Items->Clear();
	}
	String^ s = gcnew String("");
	kategorije_comboBox->Items->Clear();
	while ((s = din->ReadLine()) != nullptr)
	{
		kategorije_comboBox->Items->Add(s);
	}
	din->Close();
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

	listView1->Columns[0]->Text = "Naziv";
	listView1->Columns[0]->Width = 100;
	listView1->Columns[1]->Text = "Opis";
	listView1->Columns[1]->Width = 230;
	listView1->Columns[2]->Text = "Cijena";
	listView1->Columns[2]->Width = 60;
	listView1->Columns[3]->Text = "Broj zaliha";
	listView1->Columns[3]->Width = 70;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (listView1->Items->Count != 0)
	{
		listView1->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		int index_name = 0;
		int index_desc = 0;
		int index_price = 0;
		int index_stock = 0;

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
		ListViewItem^ item = gcnew ListViewItem(s->Substring(0,index_name-1));
		item->SubItems->Add(s->Substring(index_name+2, index_desc - index_name - 3));
		item->SubItems->Add(s->Substring(index_desc + 2, index_price - index_desc - 3));
		item->SubItems->Add(s->Substring(index_price + 2, index_stock - index_price - 3));
		listView1->Items->Add(item);
	}
	din->Close();
	
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->Items->Count == 0)
	{
		MessageBox::Show("Lista ne smije biti prazna.");
	}
	else
	{
		if (!listView1->SelectedItems[0])
		{
			MessageBox::Show("Morate odabrati element koji brisete.");
		}
		else
		{
			listView1->Items->Remove(listView1->SelectedItems[0]);
			System::String^ spaces = " | ";
			System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter(file_name);
			for (int i = 0; i < listView1->Items->Count; i++)
			{
				dat->WriteLine(listView1->Items[i]->SubItems[0]->Text + spaces + listView1->Items[i]->SubItems[1]->Text + spaces + listView1->Items[i]->SubItems[2]->Text + spaces + listView1->Items[i]->SubItems[3]->Text + spaces);
			}
			dat->Close();

		}
	}
}
private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->Items->Count == 0)
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
			System::String^ spaces = " | ";
			
			ListViewItem^ item = gcnew ListViewItem(name);
			item->SubItems->Add(desp);
			item->SubItems->Add(price);
			item->SubItems->Add(count);
			listView1->Items->Add(item);

			System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter(file_name);
			for (int i = 0; i < listView1->Items->Count; i++)
			{
				dat->WriteLine(listView1->Items[i]->SubItems[0]->Text + spaces + listView1->Items[i]->SubItems[1]->Text + spaces + listView1->Items[i]->SubItems[2]->Text + spaces + listView1->Items[i]->SubItems[3]->Text + spaces);
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
	if (listView1->Items->Count == 0)
	{
		MessageBox::Show("Ucitajte kategoriju. ");
	}
	else
	{
		if (listView1->SelectedItems->Count == 0)
		{
			MessageBox::Show("Morate odabrati neku stavku. ");
		}
		else
		{
			System::String^ name = listView1->SelectedItems[0]->SubItems[0]->Text;
			System::String^ desp = listView1->SelectedItems[0]->SubItems[1]->Text;
			System::String^ price = listView1->SelectedItems[0]->SubItems[2]->Text;
			System::String^ count = listView1->SelectedItems[0]->SubItems[3]->Text;
			
			to_change_name_textbox->Text = name;
			to_change_description_textbox->Text = desp;
			to_change_price_textbox->Text = price;
			to_change_count_textbox->Text = count;
		}
	}
}
private: System::Void save_changes_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!String::IsNullOrEmpty(to_change_name_textbox->Text) && !String::IsNullOrEmpty(to_change_description_textbox->Text) && !String::IsNullOrEmpty(to_change_price_textbox->Text) && !String::IsNullOrEmpty(to_change_count_textbox->Text))
	{
		
		int indx = listView1->SelectedItems[0]->Index;
		listView1->Items[indx]->SubItems[0]->Text = to_change_name_textbox->Text;
		listView1->Items[indx]->SubItems[1]->Text = to_change_description_textbox->Text;
		listView1->Items[indx]->SubItems[2]->Text = to_change_price_textbox->Text;
		listView1->Items[indx]->SubItems[3]->Text = to_change_count_textbox->Text;

		System::String^ spaces = " | ";

		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter(file_name);
		for (int i = 0; i < listView1->Items->Count; i++)
		{
			dat->WriteLine(listView1->Items[i]->SubItems[0]->Text + spaces + listView1->Items[i]->SubItems[1]->Text + spaces + listView1->Items[i]->SubItems[2]->Text + spaces + listView1->Items[i]->SubItems[3]->Text + spaces);
		}
		dat->Close();
		to_change_count_textbox->Clear();
		to_change_name_textbox->Clear();
		to_change_description_textbox->Clear();
		to_change_price_textbox->Clear();
		listView1->SelectedItems->Clear();
	}
}
private: System::Void drink_button_Click(System::Object^ sender, System::EventArgs^ e) {
	file_name = gcnew String("Napitci.txt");
	System::String^ s;

	listView1->Columns[0]->Text = "Naziv";
	listView1->Columns[0]->Width = 100;
	listView1->Columns[1]->Text = "Opis";
	listView1->Columns[1]->Width = 230;
	listView1->Columns[2]->Text = "Cijena";
	listView1->Columns[2]->Width = 60;
	listView1->Columns[3]->Text = "Broj zaliha";
	listView1->Columns[3]->Width = 70;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (listView1->Items->Count != 0)
	{
		listView1->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		int index_name = 0;
		int index_desc = 0;
		int index_price = 0;
		int index_stock = 0;

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
		double stock = Double::Parse(s->Substring(index_price + 2, index_stock - index_price - 3));
		if (stock <= 1)
		{
			MessageBox::Show(s->Substring(0, index_name - 1) + "- Obavjestenje o malom broju zaliha. ");
		}
		ListViewItem^ item = gcnew ListViewItem(s->Substring(0, index_name - 1));
		item->SubItems->Add(s->Substring(index_name + 2, index_desc - index_name - 3));
		item->SubItems->Add(s->Substring(index_desc + 2, index_price - index_desc - 3));
		item->SubItems->Add(s->Substring(index_price + 2, index_stock - index_price - 3));
		listView1->Items->Add(item);
	}
	din->Close();

}
private: System::Void label_items_des_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_accounts_Click(System::Object^ sender, System::EventArgs^ e) {

	if (statistics_panel->Visible == true)
		statistics_panel->Visible = false;

	if (label_description_accounts->Visible == false)
	{
		label_description_accounts->Visible = true;
	}
	if (label_items_des->Visible == true)
	{
		label_items_des->Visible = false;
	}
	if (kategorije_comboBox->Visible == true)
		kategorije_comboBox->Visible = false;
	if (prizak_button->Visible == true)
		prizak_button->Visible = false;
	
	file_name = gcnew String("Nalozi.txt");
	System::String^ s;
	listView1->Columns[0]->Text = "Korisniscko ime";
	listView1->Columns[0]->Width = 110;
	listView1->Columns[1]->Text = "Sifra";
	listView1->Columns[1]->Width = 100;
	listView1->Columns[2]->Text = "Ovlastenje";
	listView1->Columns[2]->Width = 80;
	listView1->Columns[3]->Text = "Broj narudzbi";
	listView1->Columns[3]->Width = 100;
	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (listView1->Items->Count != 0)
	{
		listView1->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		int index_name = 0;
		int index_desc = 0;
		int index_price = 0;
		int index_stock = 0;

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
		ListViewItem^ item = gcnew ListViewItem(s->Substring(0, index_name - 1));
		item->SubItems->Add(s->Substring(index_name + 2, index_desc - index_name - 3));
		item->SubItems->Add(s->Substring(index_desc + 2, index_price - index_desc - 3));
		item->SubItems->Add(s->Substring(index_price + 2, index_stock - index_price - 3));
		listView1->Items->Add(item);
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
	if (kategorije_comboBox->Visible == true)
		kategorije_comboBox->Visible = false;
	if (prizak_button->Visible == true)
		prizak_button->Visible = false;

	file_name = gcnew String("Narudzbe.txt");
	System::String^ s;
	
	listView1->Columns[0]->Text = "Narucioc";
	listView1->Columns[0]->Width = 100;
	listView1->Columns[1]->Text = "Stavke";
	listView1->Columns[1]->Width = 250;
	listView1->Columns[2]->Text = "Cijena";
	listView1->Columns[2]->Width = 60;
	listView1->Columns[3]->Text = "Stanje";
	listView1->Columns[3]->Width = 80;

	System::IO::StreamReader^ din = IO::File::OpenText(file_name);
	if (listView1->Items->Count != 0)
	{
		listView1->Items->Clear();
	}
	while ((s = din->ReadLine()) != nullptr)
	{
		int index_name = 0;
		int index_desc = 0;
		int index_price = 0;
		int index_stock = 0;

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
		ListViewItem^ item = gcnew ListViewItem(s->Substring(0, index_name - 1));
		item->SubItems->Add(s->Substring(index_name + 2, index_desc - index_name - 3));
		item->SubItems->Add(s->Substring(index_desc + 2, index_price - index_desc - 3));
		item->SubItems->Add(s->Substring(index_price + 2, index_stock - index_price - 3));
		listView1->Items->Add(item);
	}
	din->Close();
	double paid = 0;
	double should_be_paid = 0;
	for (int i = 0; i < listView1->Items->Count; i++)
	{
		if (listView1->Items[i]->SubItems[3]->Text->Contains("Placeno"))
			paid += Double::Parse(listView1->Items[i]->SubItems[2]->Text);
		should_be_paid += Double::Parse(listView1->Items[i]->SubItems[2]->Text);
	}
	paid_label->Text = paid.ToString();
	should_paid_label->Text = should_be_paid.ToString();

	statistics_panel->Show();


}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void full_cost_label_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void prizak_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (kategorije_comboBox->SelectedIndex > -1)
	{
		file_name = kategorije_comboBox->SelectedItem->ToString() + ".txt";
		System::String^ s;

		listView1->Columns[0]->Text = "Naziv";
		listView1->Columns[0]->Width = 100;
		listView1->Columns[1]->Text = "Opis";
		listView1->Columns[1]->Width = 230;
		listView1->Columns[2]->Text = "Cijena";
		listView1->Columns[2]->Width = 60;
		listView1->Columns[3]->Text = "Broj zaliha";
		listView1->Columns[3]->Width = 70;

		
		System::IO::StreamReader^ din = IO::File::OpenText(file_name);
		if (listView1->Items->Count != 0)
		{
			listView1->Items->Clear();
		}
		while ((s = din->ReadLine()) != nullptr)
		{
			int index_name = 0;
			int index_desc = 0;
			int index_price = 0;
			int index_stock = 0;

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
			double stock = Double::Parse(s->Substring(index_price + 2, index_stock - index_price - 3));
			if (stock <= 1)
			{
				MessageBox::Show(s->Substring(0, index_name - 1) + "- Obavjestenje o malom broju zaliha. ");
			}
			ListViewItem^ item = gcnew ListViewItem(s->Substring(0, index_name - 1));
			item->SubItems->Add(s->Substring(index_name + 2, index_desc - index_name - 3));
			item->SubItems->Add(s->Substring(index_desc + 2, index_price - index_desc - 3));
			item->SubItems->Add(s->Substring(index_price + 2, index_stock - index_price - 3));
			listView1->Items->Add(item);
		}
		din->Close();
	}
	else
	{
		MessageBox::Show("Morate odabrati kategoriju.");
	}
}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
	EditFoodMenu^ foodmenu = gcnew EditFoodMenu();
	foodmenu->ShowDialog();
}
};
}
