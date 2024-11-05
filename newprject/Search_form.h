#pragma once
#include "items.h"
#include <string>
#include <fstream>


namespace newprject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de Search_form
	/// </summary>
	public ref class Search_form : public System::Windows::Forms::Form
	{
	public:
		Search_form(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//

		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Search_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ menu_panel;
	private: System::Windows::Forms::TextBox^ textBoxTarget;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ textLbl;
	private: System::Windows::Forms::Button^ Search_btn;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Search_form::typeid));
			this->menu_panel = (gcnew System::Windows::Forms::Panel());
			this->textBoxTarget = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textLbl = (gcnew System::Windows::Forms::Label());
			this->Search_btn = (gcnew System::Windows::Forms::Button());
			this->menu_panel->SuspendLayout();
			this->SuspendLayout();
			// 
			// menu_panel
			// 
			this->menu_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->menu_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menu_panel.BackgroundImage")));
			this->menu_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menu_panel->Controls->Add(this->textBoxTarget);
			this->menu_panel->Controls->Add(this->panel2);
			this->menu_panel->Controls->Add(this->textLbl);
			this->menu_panel->Controls->Add(this->Search_btn);
			this->menu_panel->Location = System::Drawing::Point(12, 21);
			this->menu_panel->Name = L"menu_panel";
			this->menu_panel->Size = System::Drawing::Size(535, 291);
			this->menu_panel->TabIndex = 13;
			// 
			// textBoxTarget
			// 
			this->textBoxTarget->BackColor = System::Drawing::Color::Black;
			this->textBoxTarget->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBoxTarget->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBoxTarget->ForeColor = System::Drawing::Color::White;
			this->textBoxTarget->Location = System::Drawing::Point(127, 82);
			this->textBoxTarget->Name = L"textBoxTarget";
			this->textBoxTarget->Size = System::Drawing::Size(251, 27);
			this->textBoxTarget->TabIndex = 24;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(127, 100);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(251, 11);
			this->panel2->TabIndex = 25;
			// 
			// textLbl
			// 
			this->textLbl->AutoSize = true;
			this->textLbl->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->textLbl->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->textLbl->ForeColor = System::Drawing::Color::White;
			this->textLbl->Location = System::Drawing::Point(28, 83);
			this->textLbl->Name = L"textLbl";
			this->textLbl->Size = System::Drawing::Size(50, 28);
			this->textLbl->TabIndex = 23;
			this->textLbl->Text = L"text";
			// 
			// Search_btn
			// 
			this->Search_btn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->Search_btn->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Search_btn.BackgroundImage")));
			this->Search_btn->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->Search_btn->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)),
				static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->Search_btn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Search_btn->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Search_btn->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->Search_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Search_btn.Image")));
			this->Search_btn->Location = System::Drawing::Point(164, 143);
			this->Search_btn->Name = L"Search_btn";
			this->Search_btn->Size = System::Drawing::Size(214, 106);
			this->Search_btn->TabIndex = 16;
			this->Search_btn->Text = L"Search";
			this->Search_btn->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->Search_btn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Search_btn->UseVisualStyleBackColor = false;
			this->Search_btn->Click += gcnew System::EventHandler(this, &Search_form::Search_btn_Click);
			// 
			// Search_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(559, 326);
			this->Controls->Add(this->menu_panel);
			this->Name = L"Search_form";
			this->Text = L"Search_form";
			this->menu_panel->ResumeLayout(false);
			this->menu_panel->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

		int getItems(Items MyItems[]) { // function to store values into an Item object
			ifstream items;
			items.open("items.txt");
			string prodArr[200];
			string temp;
			int i = 0;
			while (getline(items, temp)) {
				prodArr[i] = temp;
				i++;
			} // store lines into a primary array

			int quantity = (i + 1) / 4;

			i = 0;
			int x;
			for (x = 0; x < quantity; x++) {
				MyItems[x].setItems(prodArr[i], prodArr[i + 1], stof(prodArr[i + 2]), prodArr[i + 3]);
				i = i + 4; // call setter function to store the properties of each object into an array of the type item
			}
			return quantity; // return how many objects were found on the txt file
		}
	
		//function to convert a standard string to system string (String - used in GUI)
	private: static string toStandardString(System::String^ string) { 
		using System::Runtime::InteropServices::Marshal;
		System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
		char* charPointer = reinterpret_cast<char*>(pointer.ToPointer());
		std::string returnString(charPointer, string->Length);
		Marshal::FreeHGlobal(pointer);
		return returnString;

	}

	//function to convert a System string to standard string (string - used in the code)
	private: static String^ toSystemString(string str) {
		return gcnew String(str.c_str());
	}

private: System::Void Search_btn_Click(System::Object^ sender, System::EventArgs^ e) {
	//once the btn search is clicked

	//VARIABLES	
	int quantity_S;
	const int SIZE_S = 100; // Sets max size of the array.
	Items myItemsS[SIZE_S]; // Array that will recieve the data from file.
	quantity_S = getItems(myItemsS);//store items into myItemsS and return how many objects were found


	//file that stores which button did the user clicked
	//-either search by name or by id
	ifstream choice;//txt to store 
	string choicevar;
	choice.open("choice.txt", ios::out);
	getline(choice, choicevar); // obtain choice from the user

	//get the target inputed in the gui
	string targetName = toStandardString(this->textBoxTarget->Text);

	//PROCESS
	if (choicevar == "1") { // search by id


		//binary sort by id algorithm
		int i, j;
		Items key;
		for (i = 1; i < quantity_S; i++) {
			key = myItemsS[i];
			j = i - 1;

			while (j >= 0 && myItemsS[j].getId() > key.getId()) {
				myItemsS[j + 1] = myItemsS[j];
				j--;
			}
			myItemsS[j + 1] = key;
		}

		//variables for the searching algorithm
		int left = 0;
		int right = quantity_S - 1;
		bool found;
		int mid;
		while (left <= right && found != true) {
			mid = left + (right - left) / 2;
			string midId = myItemsS[mid].getId();

			if (myItemsS[mid].getId() == targetName) { // if target is found
				//variables to store the properties of that object
				String^ name = toSystemString(myItemsS[mid].getName());
				String^ description = toSystemString(myItemsS[mid].getDescription());
				String^ price = toSystemString(to_string(myItemsS[mid].getPrice()));

				//create a messagebox to output the item searched
				MessageBox::Show("Product: " + name + " \nprice: " + price + " \ndescription: " + description);
				found = true; //found = true to end while loop
			}
			else if (myItemsS[mid].getId() < targetName) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		if (found != true){//if while loop was ended and found still not true
			MessageBox::Show("Item not found"); // create a messagebox stating that the target was not found
		}
	}

	else if (choicevar == "2") { // search by name

		//binary sort the array of item by names
		int i, j;
		Items key;
		for (i = 1; i < quantity_S; i++) {
			Items key = myItemsS[i];
			j = i - 1;
			while (j >= 0 && myItemsS[j].getName() > key.getName()) {
				myItemsS[j + 1] = myItemsS[j];
				j--;
			}
			myItemsS[j + 1] = key;
		}
		int left = 0;
		int right = quantity_S - 1;
		bool found;
		int mid;


		while (left <= right && found != true) {
			mid = left + (right - left) / 2;
			string midName = myItemsS[mid].getName();

			if (myItemsS[mid].getName() == targetName) { // if item is found
				
				//store the properties of the object into variables
				String^ id = toSystemString(myItemsS[mid].getId());
				String^ description = toSystemString(myItemsS[mid].getDescription());
				String^ price = toSystemString(to_string(myItemsS[mid].getPrice()));

				//output a message box with the properties of the object
				MessageBox::Show("Id: " + id + " \nprice: " + price + " \ndescription: " + description);
				found = true; // found = true to end the while loop
			}
			else if (myItemsS[mid].getName() < targetName) {
				left = mid + 1;
			}
			else {
				right = mid - 1;
			}
		}
		if (found != true){//if found != true and the while loop already ended
			MessageBox::Show("Item not found"); // create a messagebox stating that the item was not found.
		}

	}

	
}
};
}
