#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for UserPage
	/// </summary>
	public ref class CookPage : public System::Windows::Forms::Form
	{
	public:
		CookPage(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CookPage(String^ name, String^ role)
		{
			InitializeComponent();
			this->acc_type_label->Text = role;
			this->ImeLabel->Text = name;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CookPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ImeLabel;
	protected:
	private: System::Windows::Forms::Label^ acc_type_label;

	private: System::Windows::Forms::Button^ EditAccButton;
	private: System::Windows::Forms::TextBox^ OrderNumberBox;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::PictureBox^ AccPictureBox;
	private: System::Windows::Forms::Button^ LogOutButton;
	private: System::Windows::Forms::ListBox^ listaStavki;
	private: System::Windows::Forms::Panel^ side_bar;
	private: System::Windows::Forms::PictureBox^ rest_icon_box;
	private: System::Windows::Forms::PictureBox^ order_done;
	private: System::Windows::Forms::PictureBox^ log_out;
	private: System::Windows::Forms::PictureBox^ next_order;
	private: System::Windows::Forms::PictureBox^ settings;
	private: System::Windows::Forms::Panel^ acc_info_panel;









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
			this->ImeLabel = (gcnew System::Windows::Forms::Label());
			this->acc_type_label = (gcnew System::Windows::Forms::Label());
			this->EditAccButton = (gcnew System::Windows::Forms::Button());
			this->OrderNumberBox = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->AccPictureBox = (gcnew System::Windows::Forms::PictureBox());
			this->LogOutButton = (gcnew System::Windows::Forms::Button());
			this->listaStavki = (gcnew System::Windows::Forms::ListBox());
			this->side_bar = (gcnew System::Windows::Forms::Panel());
			this->log_out = (gcnew System::Windows::Forms::PictureBox());
			this->next_order = (gcnew System::Windows::Forms::PictureBox());
			this->settings = (gcnew System::Windows::Forms::PictureBox());
			this->order_done = (gcnew System::Windows::Forms::PictureBox());
			this->rest_icon_box = (gcnew System::Windows::Forms::PictureBox());
			this->acc_info_panel = (gcnew System::Windows::Forms::Panel());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccPictureBox))->BeginInit();
			this->side_bar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_out))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->next_order))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->settings))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->order_done))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rest_icon_box))->BeginInit();
			this->acc_info_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// ImeLabel
			// 
			this->ImeLabel->AutoSize = true;
			this->ImeLabel->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ImeLabel->Location = System::Drawing::Point(46, 114);
			this->ImeLabel->Name = L"ImeLabel";
			this->ImeLabel->Size = System::Drawing::Size(49, 25);
			this->ImeLabel->TabIndex = 0;
			this->ImeLabel->Text = L"ime";
			this->ImeLabel->Click += gcnew System::EventHandler(this, &CookPage::ImeLabel_Click);
			// 
			// acc_type_label
			// 
			this->acc_type_label->AutoSize = true;
			this->acc_type_label->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->acc_type_label->Location = System::Drawing::Point(46, 7);
			this->acc_type_label->Name = L"acc_type_label";
			this->acc_type_label->Size = System::Drawing::Size(93, 25);
			this->acc_type_label->TabIndex = 1;
			this->acc_type_label->Text = L"Korisnik";
			this->acc_type_label->Click += gcnew System::EventHandler(this, &CookPage::acc_type_label_Click);
			// 
			// EditAccButton
			// 
			this->EditAccButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->EditAccButton->FlatAppearance->BorderSize = 0;
			this->EditAccButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->EditAccButton->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->EditAccButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->EditAccButton->Location = System::Drawing::Point(13, 212);
			this->EditAccButton->Name = L"EditAccButton";
			this->EditAccButton->Size = System::Drawing::Size(236, 59);
			this->EditAccButton->TabIndex = 3;
			this->EditAccButton->Text = L"         Podesavanja naloga";
			this->EditAccButton->UseVisualStyleBackColor = false;
			this->EditAccButton->Click += gcnew System::EventHandler(this, &CookPage::EditAccButton_Click);
			// 
			// OrderNumberBox
			// 
			this->OrderNumberBox->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->OrderNumberBox->Location = System::Drawing::Point(355, 154);
			this->OrderNumberBox->Name = L"OrderNumberBox";
			this->OrderNumberBox->ReadOnly = true;
			this->OrderNumberBox->Size = System::Drawing::Size(64, 32);
			this->OrderNumberBox->TabIndex = 4;
			this->OrderNumberBox->TextChanged += gcnew System::EventHandler(this, &CookPage::OrderNumberBox_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(351, 119);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(272, 20);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Identifikacioni broj narudzbe: ";
			this->label1->Click += gcnew System::EventHandler(this, &CookPage::label1_Click);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button1->Location = System::Drawing::Point(13, 277);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(236, 63);
			this->button1->TabIndex = 6;
			this->button1->Text = L"       Sledeca narudzba";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &CookPage::button1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(351, 209);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Stavke na racunu:";
			this->label2->Click += gcnew System::EventHandler(this, &CookPage::label2_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->button2->Location = System::Drawing::Point(13, 143);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(242, 63);
			this->button2->TabIndex = 9;
			this->button2->Text = L"     Narduzba gotova";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &CookPage::button2_Click);
			// 
			// AccPictureBox
			// 
			this->AccPictureBox->Location = System::Drawing::Point(32, 35);
			this->AccPictureBox->Name = L"AccPictureBox";
			this->AccPictureBox->Size = System::Drawing::Size(127, 76);
			this->AccPictureBox->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->AccPictureBox->TabIndex = 10;
			this->AccPictureBox->TabStop = false;
			this->AccPictureBox->Click += gcnew System::EventHandler(this, &CookPage::AccPictureBox_Click);
			// 
			// LogOutButton
			// 
			this->LogOutButton->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->LogOutButton->FlatAppearance->BorderSize = 0;
			this->LogOutButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogOutButton->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOutButton->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->LogOutButton->Location = System::Drawing::Point(13, 346);
			this->LogOutButton->Name = L"LogOutButton";
			this->LogOutButton->Size = System::Drawing::Size(239, 58);
			this->LogOutButton->TabIndex = 11;
			this->LogOutButton->Text = L"Odjava";
			this->LogOutButton->UseVisualStyleBackColor = false;
			this->LogOutButton->Click += gcnew System::EventHandler(this, &CookPage::LogOutButton_Click);
			// 
			// listaStavki
			// 
			this->listaStavki->FormattingEnabled = true;
			this->listaStavki->ItemHeight = 16;
			this->listaStavki->Location = System::Drawing::Point(355, 249);
			this->listaStavki->Name = L"listaStavki";
			this->listaStavki->Size = System::Drawing::Size(227, 196);
			this->listaStavki->TabIndex = 12;
			// 
			// side_bar
			// 
			this->side_bar->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->side_bar->Controls->Add(this->log_out);
			this->side_bar->Controls->Add(this->next_order);
			this->side_bar->Controls->Add(this->settings);
			this->side_bar->Controls->Add(this->order_done);
			this->side_bar->Controls->Add(this->rest_icon_box);
			this->side_bar->Controls->Add(this->LogOutButton);
			this->side_bar->Controls->Add(this->button1);
			this->side_bar->Controls->Add(this->button2);
			this->side_bar->Controls->Add(this->EditAccButton);
			this->side_bar->Location = System::Drawing::Point(-1, -3);
			this->side_bar->Name = L"side_bar";
			this->side_bar->Size = System::Drawing::Size(255, 514);
			this->side_bar->TabIndex = 13;
			this->side_bar->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &CookPage::side_bar_Paint);
			// 
			// log_out
			// 
			this->log_out->Location = System::Drawing::Point(13, 346);
			this->log_out->Name = L"log_out";
			this->log_out->Size = System::Drawing::Size(60, 58);
			this->log_out->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->log_out->TabIndex = 18;
			this->log_out->TabStop = false;
			this->log_out->Click += gcnew System::EventHandler(this, &CookPage::pictureBox3_Click);
			// 
			// next_order
			// 
			this->next_order->Location = System::Drawing::Point(13, 277);
			this->next_order->Name = L"next_order";
			this->next_order->Size = System::Drawing::Size(60, 63);
			this->next_order->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->next_order->TabIndex = 17;
			this->next_order->TabStop = false;
			// 
			// settings
			// 
			this->settings->Location = System::Drawing::Point(13, 212);
			this->settings->Name = L"settings";
			this->settings->Size = System::Drawing::Size(60, 59);
			this->settings->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->settings->TabIndex = 16;
			this->settings->TabStop = false;
			// 
			// order_done
			// 
			this->order_done->Location = System::Drawing::Point(13, 143);
			this->order_done->Name = L"order_done";
			this->order_done->Size = System::Drawing::Size(60, 63);
			this->order_done->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->order_done->TabIndex = 15;
			this->order_done->TabStop = false;
			this->order_done->Click += gcnew System::EventHandler(this, &CookPage::order_done_Click);
			// 
			// rest_icon_box
			// 
			this->rest_icon_box->Location = System::Drawing::Point(58, 23);
			this->rest_icon_box->Name = L"rest_icon_box";
			this->rest_icon_box->Size = System::Drawing::Size(136, 91);
			this->rest_icon_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rest_icon_box->TabIndex = 14;
			this->rest_icon_box->TabStop = false;
			// 
			// acc_info_panel
			// 
			this->acc_info_panel->Controls->Add(this->ImeLabel);
			this->acc_info_panel->Controls->Add(this->AccPictureBox);
			this->acc_info_panel->Controls->Add(this->acc_type_label);
			this->acc_info_panel->Location = System::Drawing::Point(820, -3);
			this->acc_info_panel->Name = L"acc_info_panel";
			this->acc_info_panel->Size = System::Drawing::Size(216, 143);
			this->acc_info_panel->TabIndex = 14;
			// 
			// CookPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(1048, 510);
			this->ControlBox = false;
			this->Controls->Add(this->acc_info_panel);
			this->Controls->Add(this->side_bar);
			this->Controls->Add(this->listaStavki);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->OrderNumberBox);
			this->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->Name = L"CookPage";
			this->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->Text = L"UserPage";
			this->Load += gcnew System::EventHandler(this, &CookPage::UserPage_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->AccPictureBox))->EndInit();
			this->side_bar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->log_out))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->next_order))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->settings))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->order_done))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rest_icon_box))->EndInit();
			this->acc_info_panel->ResumeLayout(false);
			this->acc_info_panel->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UserPage_Load(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
		MinimizeBox = false;
		ControlBox = false;
		this->Text = "Restoran aplikacija";
		AccPictureBox->Load("accPic.png");
		rest_icon_box->Load("rest_icon.png");
		order_done->Load("order_done.png");
		log_out->Load("log_out.png");
		next_order->Load("next_order.png");
		settings->Load("settings.png");
	}
	private: System::Void acc_type_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void EditAccButton_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listaStavki->Items->Count != 0)
	{
		MessageBox::Show("Niste zavrsili zapocetu narudzbu. ");
	}
	else
	{
		System::IO::StreamReader^ din = gcnew IO::StreamReader("Narudzbe.txt");
		System::String^ s = gcnew String("");
		int order_index = 0;
		while ((s = din->ReadLine()) != nullptr)
		{
			order_index++;
			int index_name = 0;
			int index_desc = 0;
			int index_price = 0;
			int index_stock = 0;
			int finish_stock = 0;

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
					}
					else if (finish_stock == 0)
					{
						finish_stock = i;
						break;
					}
				}
			}
			if (s->Contains("Nezavrseno"))
			{
				int i = 0;
				String^ str = s->Substring(index_name + 1, index_desc - index_name - 3);
				int j = 0;
				int lst_com = 0;
				OrderNumberBox->Text = order_index.ToString();
				OrderNumberBox->ReadOnly;
				while (j < str->Length)
				{
					if (str[j] == ',')
					{
						listaStavki->Items->Insert(i, str->Substring(lst_com + 1, j - lst_com - 1));
						lst_com = j;
					}
					j++;
				}
				listaStavki->Items->Insert(i, str->Substring(lst_com + 1, str->Length - lst_com - 1));
				break;
			}

		}
		if (String::IsNullOrEmpty(OrderNumberBox->Text))
			MessageBox::Show("Sve narudzbe su zavrsene. ");
		din->Close();
	}
}
private: System::Void checkedListBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	if (String::IsNullOrEmpty(OrderNumberBox->Text))
	{
		MessageBox::Show("Nepostoji trenutna narudzba na kojoj se radi. ");
	}
	else
	{
		for (int i = 0; i < listaStavki->Items->Count; i++)
		{
			String^ line = listaStavki->Items[i]->ToString();

			System::IO::StreamReader^ categories = gcnew IO::StreamReader("Meni.txt");
			String^ categorie = gcnew String("");

			while ((categorie = categories->ReadLine()) != nullptr)
			{
				System::IO::StreamReader^ single_cat = gcnew IO::StreamReader(categorie + ".txt");
				String^ contents = gcnew String("");
				String^ single_item = gcnew String("");
				while ((single_item = single_cat->ReadLine()) != nullptr)
				{
					if (single_item->Contains(line))
					{
						int last_b = 0;
						int first_b = 0;
						for (int i = single_item->Length - 1; i >= 0; i--)
						{
							if (single_item[i] == '|')
							{ 
								if (last_b == 0)
								{
									last_b = i;
								}
								else
								{
									first_b = i;
									break;
								}
							}
						}
						String^ num = gcnew String(single_item->Substring(first_b + 1, single_item->Length - first_b - 3));
						
						int value = System::Int32::Parse(num);
						value = value - 1;
						String^ new_value_str = " " + value.ToString() + " ";
						String^ new_single_line;
						new_single_line = single_item->Replace(num, new_value_str);
						contents += new_single_line;
						contents += "\n";
					}
					else
					{
						contents += single_item;
						contents += "\n";
					}
				}
				single_cat->Close();
				System::IO::StreamWriter^ din = gcnew IO::StreamWriter(categorie + ".txt");
				din->Write(contents);
				din->Close();
			}
			categories->Close();
		
		}
		System::IO::StreamReader^ din = gcnew IO::StreamReader("Narudzbe.txt");
		System::String^ s = gcnew String("");
		int order_index = Convert::ToInt32(OrderNumberBox->Text);
		String^ before = gcnew String("");
		String^ after = gcnew String("");
		int n = 0;
		String^ g;
		while ((s = din->ReadLine()) != nullptr)
		{
			n++;
			if (n < order_index)
			{
				before = before + s;
				before = before + "\n";
			}
			else if (n > order_index)
			{
				after = after + s;
				after = after + "\n";
			}
			else
			{
				g = s->Replace("Nezavrseno", "Zavrseno");
				g = g + "\n";
			}
		}
		din->Close();
		System::IO::StreamWriter^ dat = gcnew IO::StreamWriter("Narudzbe.txt");
		dat->Write(before);
		dat->Write(g);
		dat->Write(after);
		dat->Close();
		OrderNumberBox->Clear();
		listaStavki->Items->Clear();
		MessageBox::Show("Narudzba je zavrsena. ");
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void AccPictureBox_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void LogOutButton_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void OrderNumberBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void ImeLabel_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void side_bar_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void order_done_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
