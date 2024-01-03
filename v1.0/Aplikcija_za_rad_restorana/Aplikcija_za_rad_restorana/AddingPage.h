#pragma once

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddingPage
	/// </summary>
	public ref class AddingPage : public System::Windows::Forms::Form
	{
	public:
		AddingPage(void)
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
		~AddingPage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ name_txt_box;
	private: System::Windows::Forms::TextBox^ price_txt_box;

	private: System::Windows::Forms::TextBox^ count_txt_box;


	private: System::Windows::Forms::TextBox^ description_txt_box;
	private: System::Windows::Forms::Label^ label_name;
	private: System::Windows::Forms::Label^ count_label;
	private: System::Windows::Forms::Label^ price_label;
	private: System::Windows::Forms::Label^ desc_label;
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ cancel_button;
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
			this->name_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->price_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->count_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->description_txt_box = (gcnew System::Windows::Forms::TextBox());
			this->label_name = (gcnew System::Windows::Forms::Label());
			this->count_label = (gcnew System::Windows::Forms::Label());
			this->price_label = (gcnew System::Windows::Forms::Label());
			this->desc_label = (gcnew System::Windows::Forms::Label());
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->cancel_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name_txt_box
			// 
			this->name_txt_box->Location = System::Drawing::Point(38, 61);
			this->name_txt_box->Name = L"name_txt_box";
			this->name_txt_box->Size = System::Drawing::Size(195, 22);
			this->name_txt_box->TabIndex = 0;
			// 
			// price_txt_box
			// 
			this->price_txt_box->Location = System::Drawing::Point(38, 153);
			this->price_txt_box->Name = L"price_txt_box";
			this->price_txt_box->Size = System::Drawing::Size(195, 22);
			this->price_txt_box->TabIndex = 1;
			// 
			// count_txt_box
			// 
			this->count_txt_box->Location = System::Drawing::Point(317, 153);
			this->count_txt_box->Name = L"count_txt_box";
			this->count_txt_box->Size = System::Drawing::Size(219, 22);
			this->count_txt_box->TabIndex = 2;
			this->count_txt_box->TextChanged += gcnew System::EventHandler(this, &AddingPage::textBox2_TextChanged);
			// 
			// description_txt_box
			// 
			this->description_txt_box->Location = System::Drawing::Point(317, 51);
			this->description_txt_box->Multiline = true;
			this->description_txt_box->Name = L"description_txt_box";
			this->description_txt_box->Size = System::Drawing::Size(219, 57);
			this->description_txt_box->TabIndex = 3;
			// 
			// label_name
			// 
			this->label_name->AutoSize = true;
			this->label_name->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label_name->Location = System::Drawing::Point(34, 38);
			this->label_name->Name = L"label_name";
			this->label_name->Size = System::Drawing::Size(123, 20);
			this->label_name->TabIndex = 4;
			this->label_name->Text = L"Naziv_Artikla";
			// 
			// count_label
			// 
			this->count_label->AutoSize = true;
			this->count_label->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->count_label->Location = System::Drawing::Point(313, 129);
			this->count_label->Name = L"count_label";
			this->count_label->Size = System::Drawing::Size(62, 20);
			this->count_label->TabIndex = 5;
			this->count_label->Text = L"Zalihe";
			// 
			// price_label
			// 
			this->price_label->AutoSize = true;
			this->price_label->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->price_label->Location = System::Drawing::Point(34, 129);
			this->price_label->Name = L"price_label";
			this->price_label->Size = System::Drawing::Size(63, 20);
			this->price_label->TabIndex = 6;
			this->price_label->Text = L"Cijena";
			// 
			// desc_label
			// 
			this->desc_label->AutoSize = true;
			this->desc_label->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->desc_label->Location = System::Drawing::Point(313, 28);
			this->desc_label->Name = L"desc_label";
			this->desc_label->Size = System::Drawing::Size(47, 20);
			this->desc_label->TabIndex = 7;
			this->desc_label->Text = L"Opis";
			// 
			// add_button
			// 
			this->add_button->Font = (gcnew System::Drawing::Font(L"Verdana", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_button->Location = System::Drawing::Point(199, 215);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(161, 35);
			this->add_button->TabIndex = 8;
			this->add_button->Text = L"Dodaj";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &AddingPage::add_button_Click);
			// 
			// cancel_button
			// 
			this->cancel_button->Location = System::Drawing::Point(2, 12);
			this->cancel_button->Name = L"cancel_button";
			this->cancel_button->Size = System::Drawing::Size(95, 23);
			this->cancel_button->TabIndex = 9;
			this->cancel_button->Text = L"Odustani";
			this->cancel_button->UseVisualStyleBackColor = true;
			this->cancel_button->Click += gcnew System::EventHandler(this, &AddingPage::cancel_button_Click);
			// 
			// AddingPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(557, 287);
			this->Controls->Add(this->cancel_button);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->desc_label);
			this->Controls->Add(this->price_label);
			this->Controls->Add(this->count_label);
			this->Controls->Add(this->label_name);
			this->Controls->Add(this->description_txt_box);
			this->Controls->Add(this->count_txt_box);
			this->Controls->Add(this->price_txt_box);
			this->Controls->Add(this->name_txt_box);
			this->Name = L"AddingPage";
			this->Text = L"AddingPage";
			this->Load += gcnew System::EventHandler(this, &AddingPage::AddingPage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	public: bool val = true;
	/*private: System::Void price_txt_box_TextChanged(System::Object^ sender, System::EventArgs^ e)
	{
		if (System::Text::RegularExpressions::Regex::IsMatch(price_txt_box->Text, "[^0-9]"))
		{
			MessageBox::Show("Please enter only numbers.");
			price_txt_box->Text = price_txt_box->Text->Remove(price_txt_box->Text->Length - 1);
		}
	}*/
	private: System::Void AddingPage_Load(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
		MinimizeBox = false;
		ControlBox = false;
	}
	private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrEmpty(name_txt_box->Text))
		{
			MessageBox::Show("Unesite naziv. ");
		}
		else if (String::IsNullOrEmpty(description_txt_box->Text))
		{
			MessageBox::Show("Unesite opis. ");
		}
		else if (String::IsNullOrEmpty(price_txt_box->Text))
		{
			MessageBox::Show("Unesite cijenu. ");
		}
		else if (String::IsNullOrEmpty(count_txt_box->Text))
		{
			MessageBox::Show("Unesite broj zaliha. ");
		}
		else
		{
			this->Hide();
		}
	}
	public: System::String^ GetName()
	{
		return name_txt_box->Text;
	}
	public: System::String^ GetDescription()
	{
		return description_txt_box->Text;
	}
	public: System::String^ GetPrice()
	{
		return price_txt_box->Text;
	}
	public: System::String^ GetCount()
	{
		return count_txt_box->Text;
	}
	public: bool AddOrNot()
	{
		return val;
	}
private: System::Void cancel_button_Click(System::Object^ sender, System::EventArgs^ e) {
		val = false;
		this->Hide();
}
};
}
