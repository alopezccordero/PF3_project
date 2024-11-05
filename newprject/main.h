#pragma once
#include "items.h"
#include <fstream>
#include <string>
#include <cctype>
#include "Search_form.h"


//global variables
const int SIZE = 50;//maximun size of products to store into myItems
int quantity;//variable to store how many products are found on txt file
Items myItems[SIZE];//create an array of the type Items to store products

namespace newprject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de main
	/// </summary>
	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			quantity = getItems(myItems);//stores items from the txt file right after gui is constructed
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ invoice_data;
	protected:
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ product;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ client;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Invoice_number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Quantity;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Product_description;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Selling_price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Total;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ menu_panel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Button^ SortId;

	private: System::Windows::Forms::Button^ ListItems;

	private: System::Windows::Forms::Button^ SearchName;

	private: System::Windows::Forms::Button^ SearchID;
	private: System::Windows::Forms::Button^ SortPrice;


	private: System::Windows::Forms::Button^ SortName;


	protected:

	protected:

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle21 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle22 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle23 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle24 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->invoice_data = (gcnew System::Windows::Forms::DataGridView());
			this->product = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->client = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Invoice_number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Quantity = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Product_description = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Selling_price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Total = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->menu_panel = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->SortPrice = (gcnew System::Windows::Forms::Button());
			this->SortName = (gcnew System::Windows::Forms::Button());
			this->SortId = (gcnew System::Windows::Forms::Button());
			this->ListItems = (gcnew System::Windows::Forms::Button());
			this->SearchName = (gcnew System::Windows::Forms::Button());
			this->SearchID = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->invoice_data))->BeginInit();
			this->panel2->SuspendLayout();
			this->menu_panel->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel3->SuspendLayout();
			this->SuspendLayout();
			// 
			// invoice_data
			// 
			dataGridViewCellStyle21->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			dataGridViewCellStyle21->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle21->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle21->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->invoice_data->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle21;
			this->invoice_data->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->invoice_data->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->invoice_data->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle22->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle22->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(23)));
			dataGridViewCellStyle22->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle22->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle22->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(206)));
			dataGridViewCellStyle22->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle22->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->invoice_data->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle22;
			this->invoice_data->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->invoice_data->ColumnHeadersVisible = false;
			this->invoice_data->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(7) {
				this->product,
					this->client, this->Invoice_number, this->Quantity, this->Product_description, this->Selling_price, this->Total
			});
			dataGridViewCellStyle23->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle23->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle23->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle23->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle23->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			dataGridViewCellStyle23->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle23->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->invoice_data->DefaultCellStyle = dataGridViewCellStyle23;
			this->invoice_data->GridColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->invoice_data->Location = System::Drawing::Point(52, 94);
			this->invoice_data->Name = L"invoice_data";
			dataGridViewCellStyle24->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle24->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle24->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			dataGridViewCellStyle24->ForeColor = System::Drawing::Color::White;
			dataGridViewCellStyle24->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			dataGridViewCellStyle24->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle24->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->invoice_data->RowHeadersDefaultCellStyle = dataGridViewCellStyle24;
			this->invoice_data->RowHeadersVisible = false;
			this->invoice_data->RowHeadersWidth = 62;
			this->invoice_data->RowTemplate->DefaultCellStyle->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			this->invoice_data->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(36)), static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->invoice_data->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold));
			this->invoice_data->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::White;
			this->invoice_data->RowTemplate->DefaultCellStyle->SelectionBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)), static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->invoice_data->RowTemplate->Height = 28;
			this->invoice_data->ScrollBars = System::Windows::Forms::ScrollBars::None;
			this->invoice_data->Size = System::Drawing::Size(1045, 598);
			this->invoice_data->TabIndex = 9;
			// 
			// product
			// 
			this->product->HeaderText = L"Invoice_name";
			this->product->MinimumWidth = 8;
			this->product->Name = L"product";
			this->product->ToolTipText = L"Invoice name";
			this->product->Width = 150;
			// 
			// client
			// 
			this->client->HeaderText = L"Client";
			this->client->MinimumWidth = 8;
			this->client->Name = L"client";
			this->client->ToolTipText = L"Client";
			this->client->Width = 150;
			// 
			// Invoice_number
			// 
			this->Invoice_number->HeaderText = L"Invoice_number";
			this->Invoice_number->MinimumWidth = 8;
			this->Invoice_number->Name = L"Invoice_number";
			this->Invoice_number->ToolTipText = L"Invoice Number";
			this->Invoice_number->Width = 150;
			// 
			// Quantity
			// 
			this->Quantity->HeaderText = L"Quantity";
			this->Quantity->MinimumWidth = 8;
			this->Quantity->Name = L"Quantity";
			this->Quantity->ToolTipText = L"Quantity";
			this->Quantity->Width = 150;
			// 
			// Product_description
			// 
			this->Product_description->HeaderText = L"Product_description";
			this->Product_description->MinimumWidth = 8;
			this->Product_description->Name = L"Product_description";
			this->Product_description->ToolTipText = L"Product description";
			this->Product_description->Width = 150;
			// 
			// Selling_price
			// 
			this->Selling_price->HeaderText = L"Selling_price";
			this->Selling_price->MinimumWidth = 8;
			this->Selling_price->Name = L"Selling_price";
			this->Selling_price->ToolTipText = L"Selling price";
			this->Selling_price->Width = 150;
			// 
			// Total
			// 
			this->Total->HeaderText = L"Total";
			this->Total->MinimumWidth = 8;
			this->Total->Name = L"Total";
			this->Total->ToolTipText = L"Total";
			this->Total->Width = 150;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->panel2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel2.BackgroundImage")));
			this->panel2->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel2->Controls->Add(this->panel7);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Location = System::Drawing::Point(52, 31);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1045, 65);
			this->panel2->TabIndex = 10;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::White;
			this->panel7->Location = System::Drawing::Point(0, 59);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(1045, 10);
			this->panel7->TabIndex = 16;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(489, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(104, 28);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Inventory";
			// 
			// menu_panel
			// 
			this->menu_panel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->menu_panel->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menu_panel.BackgroundImage")));
			this->menu_panel->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->menu_panel->Controls->Add(this->invoice_data);
			this->menu_panel->Controls->Add(this->panel2);
			this->menu_panel->Location = System::Drawing::Point(367, 12);
			this->menu_panel->Name = L"menu_panel";
			this->menu_panel->Size = System::Drawing::Size(1144, 731);
			this->menu_panel->TabIndex = 11;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->panel1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"panel1.BackgroundImage")));
			this->panel1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->panel1->Controls->Add(this->panel3);
			this->panel1->Location = System::Drawing::Point(12, 12);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(340, 731);
			this->panel1->TabIndex = 12;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->SortPrice);
			this->panel3->Controls->Add(this->SortName);
			this->panel3->Controls->Add(this->SortId);
			this->panel3->Controls->Add(this->ListItems);
			this->panel3->Controls->Add(this->SearchName);
			this->panel3->Controls->Add(this->SearchID);
			this->panel3->Location = System::Drawing::Point(0, 94);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(340, 477);
			this->panel3->TabIndex = 1;
			// 
			// SortPrice
			// 
			this->SortPrice->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->SortPrice->Dock = System::Windows::Forms::DockStyle::Top;
			this->SortPrice->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->SortPrice->FlatAppearance->BorderSize = 0;
			this->SortPrice->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SortPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->SortPrice->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SortPrice.Image")));
			this->SortPrice->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SortPrice->Location = System::Drawing::Point(0, 400);
			this->SortPrice->Name = L"SortPrice";
			this->SortPrice->Size = System::Drawing::Size(340, 80);
			this->SortPrice->TabIndex = 7;
			this->SortPrice->Text = L"Sort by price";
			this->SortPrice->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SortPrice->UseVisualStyleBackColor = false;
			this->SortPrice->Click += gcnew System::EventHandler(this, &main::SortPrice_Click);
			// 
			// SortName
			// 
			this->SortName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->SortName->Dock = System::Windows::Forms::DockStyle::Top;
			this->SortName->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->SortName->FlatAppearance->BorderSize = 0;
			this->SortName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SortName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->SortName->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SortName.Image")));
			this->SortName->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SortName->Location = System::Drawing::Point(0, 320);
			this->SortName->Name = L"SortName";
			this->SortName->Size = System::Drawing::Size(340, 80);
			this->SortName->TabIndex = 6;
			this->SortName->Text = L"Sort by name";
			this->SortName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SortName->UseVisualStyleBackColor = false;
			this->SortName->Click += gcnew System::EventHandler(this, &main::SortName_Click);
			// 
			// SortId
			// 
			this->SortId->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->SortId->Dock = System::Windows::Forms::DockStyle::Top;
			this->SortId->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->SortId->FlatAppearance->BorderSize = 0;
			this->SortId->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SortId->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SortId->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->SortId->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SortId.Image")));
			this->SortId->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SortId->Location = System::Drawing::Point(0, 240);
			this->SortId->Name = L"SortId";
			this->SortId->Size = System::Drawing::Size(340, 80);
			this->SortId->TabIndex = 5;
			this->SortId->Text = L"Sort by ID";
			this->SortId->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SortId->UseVisualStyleBackColor = false;
			this->SortId->Click += gcnew System::EventHandler(this, &main::SortId_Click);
			// 
			// ListItems
			// 
			this->ListItems->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->ListItems->Dock = System::Windows::Forms::DockStyle::Top;
			this->ListItems->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->ListItems->FlatAppearance->BorderSize = 0;
			this->ListItems->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ListItems->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ListItems->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->ListItems->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"ListItems.Image")));
			this->ListItems->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ListItems->Location = System::Drawing::Point(0, 160);
			this->ListItems->Name = L"ListItems";
			this->ListItems->Size = System::Drawing::Size(340, 80);
			this->ListItems->TabIndex = 3;
			this->ListItems->Text = L"List items";
			this->ListItems->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->ListItems->UseVisualStyleBackColor = false;
			this->ListItems->Click += gcnew System::EventHandler(this, &main::ItemsIntoTable);
			// 
			// SearchName
			// 
			this->SearchName->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->SearchName->Dock = System::Windows::Forms::DockStyle::Top;
			this->SearchName->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->SearchName->FlatAppearance->BorderSize = 0;
			this->SearchName->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->SearchName->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchName.Image")));
			this->SearchName->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SearchName->Location = System::Drawing::Point(0, 80);
			this->SearchName->Name = L"SearchName";
			this->SearchName->Size = System::Drawing::Size(340, 80);
			this->SearchName->TabIndex = 2;
			this->SearchName->Text = L"Search by name";
			this->SearchName->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SearchName->UseVisualStyleBackColor = false;
			this->SearchName->Click += gcnew System::EventHandler(this, &main::SearchName_Click);
			// 
			// SearchID
			// 
			this->SearchID->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(21)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(66)));
			this->SearchID->Dock = System::Windows::Forms::DockStyle::Top;
			this->SearchID->FlatAppearance->BorderColor = System::Drawing::Color::Black;
			this->SearchID->FlatAppearance->BorderSize = 0;
			this->SearchID->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SearchID->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SearchID->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(104)), static_cast<System::Int32>(static_cast<System::Byte>(104)),
				static_cast<System::Int32>(static_cast<System::Byte>(206)));
			this->SearchID->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"SearchID.Image")));
			this->SearchID->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SearchID->Location = System::Drawing::Point(0, 0);
			this->SearchID->Name = L"SearchID";
			this->SearchID->Size = System::Drawing::Size(340, 80);
			this->SearchID->TabIndex = 1;
			this->SearchID->Text = L"Search by ID";
			this->SearchID->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->SearchID->UseVisualStyleBackColor = false;
			this->SearchID->Click += gcnew System::EventHandler(this, &main::SearchID_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(9)), static_cast<System::Int32>(static_cast<System::Byte>(16)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1523, 760);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->menu_panel);
			this->Name = L"main";
			this->Text = L"main";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->invoice_data))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->menu_panel->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

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


	int getItems(Items MyItems[]) { //// function to store values into an Item object
		   ifstream items;
		   items.open("items.txt");
		   string prodArr[200];
		   string temp;
		   int i = 0;
		   while (getline(items, temp)) {
			   prodArr[i] = temp; // store each line of the txt file into an array
			   i++;
		   }

		   int quantity = (i + 1) / 4;

		   i = 0;
		   int x;
		   for (x = 0; x < quantity; x++) {
			   //call setter function to store values obtained into the array of items
			   MyItems[x].setItems(prodArr[i], prodArr[i + 1], stof(prodArr[i + 2]), prodArr[i + 3]);
			   i = i + 4;
		   }
		   return quantity; // return how many items were found
	   }



private: System::Void ItemsIntoTable(System::Object^ sender, System::EventArgs^ e) {
	IntoTable(); // input values into the datagrid
}
	void IntoTable() {
		   for (int i = 0; i < quantity; i++)
		   {
			   invoice_data->Rows->Add(); // add a new row
			   for (int x = 0; x < 7; x++)
			   {
				   //store the properties of the current object into variables
				   string name = myItems[i].getName();
				   string description = myItems[i].getDescription();
				   string id = myItems[i].getId();
				   string price = to_string(myItems[i].getPrice());


				   //store each propertie of the current object into each each cell from cell 0 to 3
				   //use toSystemString function since variable of type string has to be converted to String
				   invoice_data->Rows[i]->Cells[0]->Value = toSystemString(name);
				   invoice_data->Rows[i]->Cells[1]->Value = toSystemString(description);
				   invoice_data->Rows[i]->Cells[2]->Value = toSystemString(id);
				   invoice_data->Rows[i]->Cells[3]->Value = toSystemString(price);

			   }
		   }
	   }

private: System::Void SortId_Click(System::Object^ sender, System::EventArgs^ e) {
	//algorithm of binary search adapted to ID format
	//VARIABLES
	int i, j;
	Items key;

	//process
	for (i = 1; i < quantity; i++) {
		key = myItems[i];
		j = i - 1;

		while (j >= 0 && myItems[j].getId() > key.getId()) {
			myItems[j + 1] = myItems[j];
			j--;
		}
		myItems[j + 1] = key;
	}
	IntoTable();//call function IntoTable to input sorted objects by id into table
}
private: System::Void SortName_Click(System::Object^ sender, System::EventArgs^ e) {
	//algorithm of binary search adapted to name format

	//VARIABLES
	int i, j;
	Items key;
	//PROCESS
	for (i = 1; i < quantity; i++) {
		Items key = myItems[i];
		j = i - 1;
		while (j >= 0 && myItems[j].getName() > key.getName()) {
			myItems[j + 1] = myItems[j];
			j--;
		}
		myItems[j + 1] = key;
	}
	IntoTable();//call IntoTable function to input sorted objects by name  into table
}



private: System::Void SortPrice_Click(System::Object^ sender, System::EventArgs^ e) {
	//algorithm of binary search adapted to price format
	//VARIABLES
	int i, j;
	Items key;

	//PROCESS
	for (i = 1; i < quantity; i++) {
		key = myItems[i];
		j = i - 1;

		while (j >= 0 && myItems[j].getPrice() > key.getPrice()) {
			myItems[j + 1] = myItems[j];
			j = j - 1;
		}
		myItems[j + 1] = key;
	}
	IntoTable();//call IntoTable function to input sorted objects by name into table
}



private: System::Void SearchID_Click(System::Object^ sender, System::EventArgs^ e) {
	newprject::Search_form^ search = gcnew newprject::Search_form(); // initialize search_form
	ofstream choice;
	choice.open("choice.txt", ios::out);
	choice << "1";//stores which button was clicked into a txt file
	search->Show();//show search form
}
private: System::Void SearchName_Click(System::Object^ sender, System::EventArgs^ e) {
	newprject::Search_form^ search = gcnew newprject::Search_form(); // initialize search_form
	ofstream choice;
	choice.open("choice.txt", ios::out);//stores which button was clicked into a txt file
	choice << "2";
	search->Show();//show search form
}
};
}
