#pragma once
#include "SmallAddingPage.h"

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for EditFoodMenu
	/// </summary>
	public ref class EditFoodMenu : public System::Windows::Forms::Form
	{
	public:
		EditFoodMenu(void)
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
		~EditFoodMenu()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ListView^ listView1;
	protected:
	private: System::Windows::Forms::ColumnHeader^ name;



	private: System::Windows::Forms::Button^ back_button;



	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::PictureBox^ rest_pic;
	private: System::Windows::Forms::Button^ delete_btn;
	private: System::Windows::Forms::Button^ add_btn;
	private: System::Windows::Forms::Button^ edit_btn;




	private: System::Windows::Forms::PictureBox^ add_pic_box;
	private: System::Windows::Forms::PictureBox^ edit_pic_box;
	private: System::Windows::Forms::PictureBox^ del_pic_box;







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
			this->listView1 = (gcnew System::Windows::Forms::ListView());
			this->name = (gcnew System::Windows::Forms::ColumnHeader());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->add_pic_box = (gcnew System::Windows::Forms::PictureBox());
			this->edit_pic_box = (gcnew System::Windows::Forms::PictureBox());
			this->del_pic_box = (gcnew System::Windows::Forms::PictureBox());
			this->delete_btn = (gcnew System::Windows::Forms::Button());
			this->add_btn = (gcnew System::Windows::Forms::Button());
			this->edit_btn = (gcnew System::Windows::Forms::Button());
			this->rest_pic = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_pic_box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_pic_box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->del_pic_box))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rest_pic))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->name });
			this->listView1->Font = (gcnew System::Drawing::Font(L"Verdana", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(182, 118);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(390, 258);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			this->listView1->SelectedIndexChanged += gcnew System::EventHandler(this, &EditFoodMenu::listView1_SelectedIndexChanged);
			// 
			// name
			// 
			this->name->Text = L"Lista kategorija";
			this->name->Width = 384;
			// 
			// back_button
			// 
			this->back_button->FlatAppearance->BorderSize = 0;
			this->back_button->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->back_button->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->back_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->back_button->Location = System::Drawing::Point(3, 318);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(150, 45);
			this->back_button->TabIndex = 13;
			this->back_button->Text = L"  Izlaz";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &EditFoodMenu::back_button_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->panel1->Controls->Add(this->add_pic_box);
			this->panel1->Controls->Add(this->edit_pic_box);
			this->panel1->Controls->Add(this->del_pic_box);
			this->panel1->Controls->Add(this->delete_btn);
			this->panel1->Controls->Add(this->add_btn);
			this->panel1->Controls->Add(this->edit_btn);
			this->panel1->Controls->Add(this->rest_pic);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Controls->Add(this->back_button);
			this->panel1->Location = System::Drawing::Point(1, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(153, 465);
			this->panel1->TabIndex = 17;
			// 
			// add_pic_box
			// 
			this->add_pic_box->Location = System::Drawing::Point(3, 159);
			this->add_pic_box->Name = L"add_pic_box";
			this->add_pic_box->Size = System::Drawing::Size(49, 45);
			this->add_pic_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->add_pic_box->TabIndex = 24;
			this->add_pic_box->TabStop = false;
			// 
			// edit_pic_box
			// 
			this->edit_pic_box->Location = System::Drawing::Point(3, 210);
			this->edit_pic_box->Name = L"edit_pic_box";
			this->edit_pic_box->Size = System::Drawing::Size(49, 45);
			this->edit_pic_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->edit_pic_box->TabIndex = 23;
			this->edit_pic_box->TabStop = false;
			// 
			// del_pic_box
			// 
			this->del_pic_box->Location = System::Drawing::Point(3, 261);
			this->del_pic_box->Name = L"del_pic_box";
			this->del_pic_box->Size = System::Drawing::Size(49, 45);
			this->del_pic_box->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->del_pic_box->TabIndex = 22;
			this->del_pic_box->TabStop = false;
			// 
			// delete_btn
			// 
			this->delete_btn->FlatAppearance->BorderSize = 0;
			this->delete_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->delete_btn->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->delete_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->delete_btn->Location = System::Drawing::Point(0, 267);
			this->delete_btn->Name = L"delete_btn";
			this->delete_btn->Size = System::Drawing::Size(150, 45);
			this->delete_btn->TabIndex = 21;
			this->delete_btn->Text = L"     Izbrisi";
			this->delete_btn->UseVisualStyleBackColor = true;
			this->delete_btn->Click += gcnew System::EventHandler(this, &EditFoodMenu::button5_Click);
			// 
			// add_btn
			// 
			this->add_btn->FlatAppearance->BorderSize = 0;
			this->add_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->add_btn->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->add_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->add_btn->Location = System::Drawing::Point(3, 159);
			this->add_btn->Name = L"add_btn";
			this->add_btn->Size = System::Drawing::Size(150, 45);
			this->add_btn->TabIndex = 20;
			this->add_btn->Text = L"  Dodaj";
			this->add_btn->UseVisualStyleBackColor = true;
			this->add_btn->Click += gcnew System::EventHandler(this, &EditFoodMenu::button4_Click);
			// 
			// edit_btn
			// 
			this->edit_btn->FlatAppearance->BorderSize = 0;
			this->edit_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->edit_btn->Font = (gcnew System::Drawing::Font(L"Verdana", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->edit_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->edit_btn->Location = System::Drawing::Point(3, 216);
			this->edit_btn->Name = L"edit_btn";
			this->edit_btn->Size = System::Drawing::Size(150, 45);
			this->edit_btn->TabIndex = 19;
			this->edit_btn->Text = L"  Uredi";
			this->edit_btn->UseVisualStyleBackColor = true;
			this->edit_btn->Click += gcnew System::EventHandler(this, &EditFoodMenu::edit_btn_Click);
			// 
			// rest_pic
			// 
			this->rest_pic->Location = System::Drawing::Point(23, 35);
			this->rest_pic->Name = L"rest_pic";
			this->rest_pic->Size = System::Drawing::Size(88, 67);
			this->rest_pic->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->rest_pic->TabIndex = 18;
			this->rest_pic->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(3, 318);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(49, 45);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &EditFoodMenu::pictureBox1_Click);
			// 
			// EditFoodMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoValidate = System::Windows::Forms::AutoValidate::EnablePreventFocusChange;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(610, 459);
			this->Controls->Add(this->listView1);
			this->Controls->Add(this->panel1);
			this->Name = L"EditFoodMenu";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"EditFoodMenu";
			this->Load += gcnew System::EventHandler(this, &EditFoodMenu::EditFoodMenu_Load);
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->add_pic_box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->edit_pic_box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->del_pic_box))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->rest_pic))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EditFoodMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		
		MaximizeBox = false;
		ControlBox = false;
		this->Text = "Restoran aplikacija";

		//this->Left = Screen::PrimaryScreen->WorkingArea.Left;
		//this->Top = Screen::PrimaryScreen->WorkingArea.Height - this->Height;

		System::IO::StreamReader^ din = IO::File::OpenText("Meni.txt");
		String^ s = gcnew String("");
		while ((s = din->ReadLine()) != nullptr)
		{
			listView1->Items->Add(s);
		}
		din->Close();
		rest_pic->Load("rest_icon.png");
		pictureBox1->Load("log_out.png");
		add_pic_box->Load("add.png");
		edit_pic_box->Load("edit.png");
		del_pic_box->Load("del.png");
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt", true);
		SmallAddingPage^ add = gcnew SmallAddingPage();
		add->ShowDialog();
		if (add->isCanceled() == false)
		{
			String^ new_item = gcnew String(add->GetAddingText());
			dat->Write("\n" + new_item);
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(new_item + ".txt");
			sw->Close();
			listView1->Items->Add(new_item);
		}
		dat->Close();
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count == 0)
	{
		MessageBox::Show("Morate odabrati neki element. ");
	}
	else
	{
		String^ name = listView1->SelectedItems[0]->Text;
		listView1->Items->Remove(listView1->SelectedItems[0]);
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt");
		for (int i = 0; i < listView1->Items->Count; i++)
		{
			dat->WriteLine(listView1->Items[i]->Text);
		}
		dat->Close();
		System::IO::File::Delete(name + ".txt");
	}
}
private: System::Void back_button_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Hide();
}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count == 0)
	{
		MessageBox::Show("Morate odabrati neku kategoriju iz menija. ");
	}
	else
	{
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt");
		SmallAddingPage^ add = gcnew SmallAddingPage();
		add->ShowDialog();
		String^ last_name = listView1->SelectedItems[0]->Text;
		if (add->isCanceled() == false)
		{
			String^ changed_item = gcnew String(add->GetAddingText());
			listView1->SelectedItems[0]->Text = changed_item;
			for (int i = 0; i < listView1->Items->Count; i++)
			{
				dat->Write(listView1->Items[i]->SubItems[0]->Text + "\n");
			}

			System::IO::File::Delete(last_name + ".txt");
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(changed_item + ".txt");

			sw->Close();
		}
		dat->Close();
	}

}
private: System::Void listView1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	if (listView1->SelectedItems->Count == 0)
	{
		MessageBox::Show("Morate odabrati neki element. ");
	}
	else
	{
		String^ name = listView1->SelectedItems[0]->Text;
		listView1->Items->Remove(listView1->SelectedItems[0]);
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt");
		for (int i = 0; i < listView1->Items->Count; i++)
		{
			dat->WriteLine(listView1->Items[i]->Text);
		}
		dat->Close();
		System::IO::File::Delete(name + ".txt");
	}
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {

	System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt", true);
	SmallAddingPage^ add = gcnew SmallAddingPage();
	add->ShowDialog();
	if (add->isCanceled() == false)
	{
		String^ new_item = gcnew String(add->GetAddingText());
		dat->Write("\n" + new_item);
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(new_item + ".txt");
		sw->Close();
		listView1->Items->Add(new_item);
	}
	dat->Close();
}
private: System::Void edit_btn_Click(System::Object^ sender, System::EventArgs^ e) {

	if (listView1->SelectedItems->Count == 0)
	{
		MessageBox::Show("Morate odabrati neku kategoriju iz menija. ");
	}
	else
	{
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt");
		SmallAddingPage^ add = gcnew SmallAddingPage();
		add->ShowDialog();
		String^ last_name = listView1->SelectedItems[0]->Text;
		if (add->isCanceled() == false)
		{
			String^ changed_item = gcnew String(add->GetAddingText());
			listView1->SelectedItems[0]->Text = changed_item;
			for (int i = 0; i < listView1->Items->Count; i++)
			{
				dat->Write(listView1->Items[i]->SubItems[0]->Text + "\n");
			}

			System::IO::File::Delete(last_name + ".txt");
			System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(changed_item + ".txt");

			sw->Close();
		}
		dat->Close();
	}

}
private: System::Void delete_label_Click(System::Object^ sender, System::EventArgs^ e) {}
};
}
