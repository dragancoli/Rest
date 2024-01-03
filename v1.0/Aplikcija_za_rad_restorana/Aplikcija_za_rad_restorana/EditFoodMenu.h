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
	private: System::Windows::Forms::Button^ add_button;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ back_button;



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
			this->add_button = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->back_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// listView1
			// 
			this->listView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::ColumnHeader^  >(1) { this->name });
			this->listView1->HideSelection = false;
			this->listView1->Location = System::Drawing::Point(36, 66);
			this->listView1->Name = L"listView1";
			this->listView1->Size = System::Drawing::Size(207, 337);
			this->listView1->TabIndex = 0;
			this->listView1->UseCompatibleStateImageBehavior = false;
			this->listView1->View = System::Windows::Forms::View::Details;
			// 
			// name
			// 
			this->name->Text = L"Naziv kategorije";
			this->name->Width = 203;
			// 
			// add_button
			// 
			this->add_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->add_button->Location = System::Drawing::Point(292, 151);
			this->add_button->Name = L"add_button";
			this->add_button->Size = System::Drawing::Size(140, 33);
			this->add_button->TabIndex = 10;
			this->add_button->Text = L"Izmeni naziv";
			this->add_button->UseVisualStyleBackColor = true;
			this->add_button->Click += gcnew System::EventHandler(this, &EditFoodMenu::add_button_Click);
			// 
			// button1
			// 
			this->button1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button1->Location = System::Drawing::Point(292, 93);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 33);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Izbrisi";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &EditFoodMenu::button1_Click);
			// 
			// button2
			// 
			this->button2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->button2->Location = System::Drawing::Point(292, 31);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(140, 33);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Dodaj";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &EditFoodMenu::button2_Click);
			// 
			// back_button
			// 
			this->back_button->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(52)), static_cast<System::Int32>(static_cast<System::Byte>(73)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->back_button->Location = System::Drawing::Point(12, 12);
			this->back_button->Name = L"back_button";
			this->back_button->Size = System::Drawing::Size(87, 27);
			this->back_button->TabIndex = 13;
			this->back_button->Text = L"Izlaz";
			this->back_button->UseVisualStyleBackColor = true;
			this->back_button->Click += gcnew System::EventHandler(this, &EditFoodMenu::back_button_Click);
			// 
			// EditFoodMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(249)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(51)));
			this->ClientSize = System::Drawing::Size(570, 477);
			this->Controls->Add(this->back_button);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->add_button);
			this->Controls->Add(this->listView1);
			this->Name = L"EditFoodMenu";
			this->Text = L"EditFoodMenu";
			this->Load += gcnew System::EventHandler(this, &EditFoodMenu::EditFoodMenu_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void EditFoodMenu_Load(System::Object^ sender, System::EventArgs^ e) {
		MaximizeBox = false;
		ControlBox = false;

		System::IO::StreamReader^ din = IO::File::OpenText("Meni.txt");
		String^ s = gcnew String("");
		while ((s = din->ReadLine()) != nullptr)
		{
			listView1->Items->Add(s);
		}
		din->Close();
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		System::IO::StreamWriter^ dat = gcnew System::IO::StreamWriter("Meni.txt", true);
		SmallAddingPage^ add = gcnew SmallAddingPage();
		add->ShowDialog();
		String^ new_item = gcnew String(add->GetAddingText());
		dat->Write("\n" + new_item);
		dat->Close();
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(new_item + ".txt");
		sw->Close();
		listView1->Items->Add(new_item);
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
		String^ changed_item = gcnew String(add->GetAddingText());
		listView1->SelectedItems[0]->Text = changed_item;
		for (int i = 0; i < listView1->Items->Count; i++)
		{
			dat->Write(listView1->Items[i]->SubItems[0]->Text + "\n");
		}
		dat->Close();
		System::IO::File::Delete(last_name + ".txt");
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(changed_item + ".txt");
		sw->Close();
	}

}
};
}
