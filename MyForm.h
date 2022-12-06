#pragma once
#include "CLservicesClient.h"
#include "CLservicesStock.h"

namespace ProjetPOOG1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ Tabcontrol;
	protected:

	protected:

	protected:
	private: System::Data::DataSet^ oDs;
	private: NS_Comp_Svc::CLservicesClient^ oSvcClient;
	private: NS_Comp_Svc::CLservicesStock^ oSvcStock;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ addClient;




	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ updateClient;

	private: System::Windows::Forms::Button^ deleteClient;




	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::TextBox^ textBox13;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Button^ button10;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ printTop10;
	private: System::Windows::Forms::DataGridView^ dataGridStats;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ findStaff;


	private: System::Windows::Forms::Button^ deleteStaff;

	private: System::Windows::Forms::Button^ updateStaff;

	private: System::Windows::Forms::Button^ addStaff;
	private: System::Windows::Forms::DataGridView^ dataGridStaff;
	private: System::Windows::Forms::Button^ findStock;







	private: System::Windows::Forms::Button^ deleteStock;


	private: System::Windows::Forms::Button^ updateStock;
	private: System::Windows::Forms::Button^ addStock;
	private: System::Windows::Forms::DataGridView^ dataGridStock;




private: System::Windows::Forms::Button^ printOrder;

private: System::Windows::Forms::Button^ deleteOrder;

private: System::Windows::Forms::Button^ updateOrder;

private: System::Windows::Forms::Button^ addOrder;
private: System::Windows::Forms::DataGridView^ dataGridOrder;


	private: System::Windows::Forms::TextBox^ textBox23;
	private: System::Windows::Forms::TextBox^ textBox22;
	private: System::Windows::Forms::TextBox^ textBox21;
	private: System::Windows::Forms::TextBox^ textBox20;
	private: System::Windows::Forms::TextBox^ textBox19;
	private: System::Windows::Forms::TextBox^ textBox18;
	private: System::Windows::Forms::TextBox^ textBox17;
	private: System::Windows::Forms::TextBox^ textBox16;
	private: System::Windows::Forms::TextBox^ textBox15;
	private: System::Windows::Forms::TextBox^ textBox25;
	private: System::Windows::Forms::TextBox^ textBox24;
private: System::Windows::Forms::TextBox^ textBox27;
private: System::Windows::Forms::TextBox^ textBox26;
private: System::Windows::Forms::TextBox^ textBox34;
private: System::Windows::Forms::TextBox^ textBox33;
private: System::Windows::Forms::TextBox^ textBox32;
private: System::Windows::Forms::TextBox^ textBox31;
private: System::Windows::Forms::TextBox^ textBox30;
private: System::Windows::Forms::TextBox^ textBox29;
private: System::Windows::Forms::TextBox^ textBox28;
private: System::Windows::Forms::Button^ deleteItemOrder;
private: System::Windows::Forms::Button^ addItemOrder;

private: System::Windows::Forms::TextBox^ textBox35;
private: System::Windows::Forms::DataGridView^ dataGridClient;
private: System::Windows::Forms::Button^ printStock;
private: System::Windows::Forms::Button^ finClient;



private: System::Windows::Forms::Button^ printStaff;
private: System::Windows::Forms::Button^ printClient;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Tabcontrol = (gcnew System::Windows::Forms::TabControl());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->textBox35 = (gcnew System::Windows::Forms::TextBox());
			this->textBox27 = (gcnew System::Windows::Forms::TextBox());
			this->textBox26 = (gcnew System::Windows::Forms::TextBox());
			this->textBox25 = (gcnew System::Windows::Forms::TextBox());
			this->textBox24 = (gcnew System::Windows::Forms::TextBox());
			this->findStock = (gcnew System::Windows::Forms::Button());
			this->deleteStock = (gcnew System::Windows::Forms::Button());
			this->updateStock = (gcnew System::Windows::Forms::Button());
			this->addStock = (gcnew System::Windows::Forms::Button());
			this->dataGridStock = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->printClient = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->updateClient = (gcnew System::Windows::Forms::Button());
			this->deleteClient = (gcnew System::Windows::Forms::Button());
			this->addClient = (gcnew System::Windows::Forms::Button());
			this->dataGridClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox23 = (gcnew System::Windows::Forms::TextBox());
			this->textBox22 = (gcnew System::Windows::Forms::TextBox());
			this->textBox21 = (gcnew System::Windows::Forms::TextBox());
			this->textBox20 = (gcnew System::Windows::Forms::TextBox());
			this->textBox19 = (gcnew System::Windows::Forms::TextBox());
			this->textBox18 = (gcnew System::Windows::Forms::TextBox());
			this->textBox17 = (gcnew System::Windows::Forms::TextBox());
			this->textBox16 = (gcnew System::Windows::Forms::TextBox());
			this->textBox15 = (gcnew System::Windows::Forms::TextBox());
			this->findStaff = (gcnew System::Windows::Forms::Button());
			this->deleteStaff = (gcnew System::Windows::Forms::Button());
			this->updateStaff = (gcnew System::Windows::Forms::Button());
			this->addStaff = (gcnew System::Windows::Forms::Button());
			this->dataGridStaff = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->textBox34 = (gcnew System::Windows::Forms::TextBox());
			this->textBox33 = (gcnew System::Windows::Forms::TextBox());
			this->textBox32 = (gcnew System::Windows::Forms::TextBox());
			this->textBox31 = (gcnew System::Windows::Forms::TextBox());
			this->textBox30 = (gcnew System::Windows::Forms::TextBox());
			this->textBox29 = (gcnew System::Windows::Forms::TextBox());
			this->textBox28 = (gcnew System::Windows::Forms::TextBox());
			this->deleteItemOrder = (gcnew System::Windows::Forms::Button());
			this->addItemOrder = (gcnew System::Windows::Forms::Button());
			this->printOrder = (gcnew System::Windows::Forms::Button());
			this->deleteOrder = (gcnew System::Windows::Forms::Button());
			this->updateOrder = (gcnew System::Windows::Forms::Button());
			this->addOrder = (gcnew System::Windows::Forms::Button());
			this->dataGridOrder = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->printTop10 = (gcnew System::Windows::Forms::Button());
			this->dataGridStats = (gcnew System::Windows::Forms::DataGridView());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->textBox13 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->printStock = (gcnew System::Windows::Forms::Button());
			this->finClient = (gcnew System::Windows::Forms::Button());
			this->printStaff = (gcnew System::Windows::Forms::Button());
			this->Tabcontrol->SuspendLayout();
			this->tabPage3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->BeginInit();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridClient))->BeginInit();
			this->tabPage2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStaff))->BeginInit();
			this->tabPage4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOrder))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStats))->BeginInit();
			this->SuspendLayout();
			// 
			// Tabcontrol
			// 
			this->Tabcontrol->Controls->Add(this->tabPage3);
			this->Tabcontrol->Controls->Add(this->tabPage1);
			this->Tabcontrol->Controls->Add(this->tabPage2);
			this->Tabcontrol->Controls->Add(this->tabPage4);
			this->Tabcontrol->Controls->Add(this->tabPage5);
			this->Tabcontrol->Location = System::Drawing::Point(9, 10);
			this->Tabcontrol->Margin = System::Windows::Forms::Padding(2);
			this->Tabcontrol->Name = L"Tabcontrol";
			this->Tabcontrol->SelectedIndex = 0;
			this->Tabcontrol->Size = System::Drawing::Size(834, 518);
			this->Tabcontrol->TabIndex = 0;
			// 
			// tabPage3
			// 
			this->tabPage3->Controls->Add(this->printStock);
			this->tabPage3->Controls->Add(this->textBox35);
			this->tabPage3->Controls->Add(this->textBox27);
			this->tabPage3->Controls->Add(this->textBox26);
			this->tabPage3->Controls->Add(this->textBox25);
			this->tabPage3->Controls->Add(this->textBox24);
			this->tabPage3->Controls->Add(this->findStock);
			this->tabPage3->Controls->Add(this->deleteStock);
			this->tabPage3->Controls->Add(this->updateStock);
			this->tabPage3->Controls->Add(this->addStock);
			this->tabPage3->Controls->Add(this->dataGridStock);
			this->tabPage3->Location = System::Drawing::Point(4, 22);
			this->tabPage3->Margin = System::Windows::Forms::Padding(2);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(2);
			this->tabPage3->Size = System::Drawing::Size(826, 492);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// textBox35
			// 
			this->textBox35->Location = System::Drawing::Point(19, 343);
			this->textBox35->Margin = System::Windows::Forms::Padding(2);
			this->textBox35->Name = L"textBox35";
			this->textBox35->Size = System::Drawing::Size(352, 20);
			this->textBox35->TabIndex = 9;
			this->textBox35->Text = L"Taux de TVA";
			this->textBox35->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox35_TextChanged);
			// 
			// textBox27
			// 
			this->textBox27->Location = System::Drawing::Point(19, 319);
			this->textBox27->Margin = System::Windows::Forms::Padding(2);
			this->textBox27->Name = L"textBox27";
			this->textBox27->Size = System::Drawing::Size(352, 20);
			this->textBox27->TabIndex = 8;
			this->textBox27->Text = L"Prix Hors Taxe";
			// 
			// textBox26
			// 
			this->textBox26->Location = System::Drawing::Point(19, 297);
			this->textBox26->Margin = System::Windows::Forms::Padding(2);
			this->textBox26->Name = L"textBox26";
			this->textBox26->Size = System::Drawing::Size(352, 20);
			this->textBox26->TabIndex = 7;
			this->textBox26->Text = L"Quantité";
			// 
			// textBox25
			// 
			this->textBox25->Location = System::Drawing::Point(19, 274);
			this->textBox25->Margin = System::Windows::Forms::Padding(2);
			this->textBox25->Name = L"textBox25";
			this->textBox25->Size = System::Drawing::Size(352, 20);
			this->textBox25->TabIndex = 6;
			this->textBox25->Text = L"Référence";
			this->textBox25->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox25_TextChanged);
			// 
			// textBox24
			// 
			this->textBox24->Location = System::Drawing::Point(19, 251);
			this->textBox24->Margin = System::Windows::Forms::Padding(2);
			this->textBox24->Name = L"textBox24";
			this->textBox24->Size = System::Drawing::Size(352, 20);
			this->textBox24->TabIndex = 5;
			this->textBox24->Text = L"Nom";
			// 
			// findStock
			// 
			this->findStock->Location = System::Drawing::Point(211, 93);
			this->findStock->Margin = System::Windows::Forms::Padding(2);
			this->findStock->Name = L"findStock";
			this->findStock->Size = System::Drawing::Size(159, 74);
			this->findStock->TabIndex = 4;
			this->findStock->Text = L"Rechercher";
			this->findStock->UseVisualStyleBackColor = true;
			this->findStock->Click += gcnew System::EventHandler(this, &MyForm::button19_Click);
			// 
			// deleteStock
			// 
			this->deleteStock->Location = System::Drawing::Point(19, 93);
			this->deleteStock->Margin = System::Windows::Forms::Padding(2);
			this->deleteStock->Name = L"deleteStock";
			this->deleteStock->Size = System::Drawing::Size(159, 74);
			this->deleteStock->TabIndex = 3;
			this->deleteStock->Text = L"Supprimer du stock";
			this->deleteStock->UseVisualStyleBackColor = true;
			// 
			// updateStock
			// 
			this->updateStock->Location = System::Drawing::Point(211, 14);
			this->updateStock->Margin = System::Windows::Forms::Padding(2);
			this->updateStock->Name = L"updateStock";
			this->updateStock->Size = System::Drawing::Size(159, 74);
			this->updateStock->TabIndex = 2;
			this->updateStock->Text = L"Mise à jour du stock";
			this->updateStock->UseVisualStyleBackColor = true;
			// 
			// addStock
			// 
			this->addStock->Location = System::Drawing::Point(19, 14);
			this->addStock->Margin = System::Windows::Forms::Padding(2);
			this->addStock->Name = L"addStock";
			this->addStock->Size = System::Drawing::Size(159, 74);
			this->addStock->TabIndex = 1;
			this->addStock->Text = L"Ajouter stock";
			this->addStock->UseVisualStyleBackColor = true;
			// 
			// dataGridStock
			// 
			this->dataGridStock->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStock->Location = System::Drawing::Point(388, 5);
			this->dataGridStock->Margin = System::Windows::Forms::Padding(2);
			this->dataGridStock->Name = L"dataGridStock";
			this->dataGridStock->RowHeadersWidth = 51;
			this->dataGridStock->RowTemplate->Height = 24;
			this->dataGridStock->Size = System::Drawing::Size(436, 484);
			this->dataGridStock->TabIndex = 0;
			this->dataGridStock->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridStock_CellContentClick);
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->finClient);
			this->tabPage1->Controls->Add(this->printClient);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->updateClient);
			this->tabPage1->Controls->Add(this->deleteClient);
			this->tabPage1->Controls->Add(this->addClient);
			this->tabPage1->Controls->Add(this->dataGridClient);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Margin = System::Windows::Forms::Padding(2);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(2);
			this->tabPage1->Size = System::Drawing::Size(826, 492);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clients";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// printClient
			// 
			this->printClient->Location = System::Drawing::Point(19, 174);
			this->printClient->Margin = System::Windows::Forms::Padding(2);
			this->printClient->Name = L"printClient";
			this->printClient->Size = System::Drawing::Size(351, 33);
			this->printClient->TabIndex = 13;
			this->printClient->Text = L"Afficher tout";
			this->printClient->UseVisualStyleBackColor = true;
			this->printClient->Click += gcnew System::EventHandler(this, &MyForm::printClient_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(19, 364);
			this->textBox9->Margin = System::Windows::Forms::Padding(2);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(353, 20);
			this->textBox9->TabIndex = 12;
			this->textBox9->Text = L"Numéro de téléphone";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(19, 341);
			this->textBox8->Margin = System::Windows::Forms::Padding(2);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(352, 20);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"Adresse Mail";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(19, 318);
			this->textBox7->Margin = System::Windows::Forms::Padding(2);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(352, 20);
			this->textBox7->TabIndex = 10;
			this->textBox7->Text = L"Pays";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(19, 273);
			this->textBox6->Margin = System::Windows::Forms::Padding(2);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(67, 20);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"Numéro";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(280, 296);
			this->textBox5->Margin = System::Windows::Forms::Padding(2);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(90, 20);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Code Postal";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(19, 296);
			this->textBox4->Margin = System::Windows::Forms::Padding(2);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(258, 20);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Ville";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(89, 273);
			this->textBox3->Margin = System::Windows::Forms::Padding(2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(282, 20);
			this->textBox3->TabIndex = 6;
			this->textBox3->Tag = L"";
			this->textBox3->Text = L"Adresse";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(19, 250);
			this->textBox2->Margin = System::Windows::Forms::Padding(2);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(352, 20);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Prénom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(19, 228);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(352, 20);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Nom";
			// 
			// updateClient
			// 
			this->updateClient->Location = System::Drawing::Point(211, 14);
			this->updateClient->Margin = System::Windows::Forms::Padding(2);
			this->updateClient->Name = L"updateClient";
			this->updateClient->Size = System::Drawing::Size(159, 74);
			this->updateClient->TabIndex = 3;
			this->updateClient->Text = L"Mise à jour du client";
			this->updateClient->UseVisualStyleBackColor = true;
			this->updateClient->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// deleteClient
			// 
			this->deleteClient->Location = System::Drawing::Point(19, 93);
			this->deleteClient->Margin = System::Windows::Forms::Padding(2);
			this->deleteClient->Name = L"deleteClient";
			this->deleteClient->Size = System::Drawing::Size(159, 74);
			this->deleteClient->TabIndex = 2;
			this->deleteClient->Text = L"Supprimer client";
			this->deleteClient->UseVisualStyleBackColor = true;
			// 
			// addClient
			// 
			this->addClient->Location = System::Drawing::Point(19, 14);
			this->addClient->Margin = System::Windows::Forms::Padding(2);
			this->addClient->Name = L"addClient";
			this->addClient->Size = System::Drawing::Size(159, 74);
			this->addClient->TabIndex = 1;
			this->addClient->Text = L"Ajouter client";
			this->addClient->UseVisualStyleBackColor = true;
			this->addClient->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridClient
			// 
			this->dataGridClient->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridClient->Location = System::Drawing::Point(388, 5);
			this->dataGridClient->Margin = System::Windows::Forms::Padding(2);
			this->dataGridClient->Name = L"dataGridClient";
			this->dataGridClient->RowHeadersWidth = 51;
			this->dataGridClient->RowTemplate->Height = 24;
			this->dataGridClient->Size = System::Drawing::Size(436, 484);
			this->dataGridClient->TabIndex = 0;
			this->dataGridClient->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->printStaff);
			this->tabPage2->Controls->Add(this->textBox23);
			this->tabPage2->Controls->Add(this->textBox22);
			this->tabPage2->Controls->Add(this->textBox21);
			this->tabPage2->Controls->Add(this->textBox20);
			this->tabPage2->Controls->Add(this->textBox19);
			this->tabPage2->Controls->Add(this->textBox18);
			this->tabPage2->Controls->Add(this->textBox17);
			this->tabPage2->Controls->Add(this->textBox16);
			this->tabPage2->Controls->Add(this->textBox15);
			this->tabPage2->Controls->Add(this->findStaff);
			this->tabPage2->Controls->Add(this->deleteStaff);
			this->tabPage2->Controls->Add(this->updateStaff);
			this->tabPage2->Controls->Add(this->addStaff);
			this->tabPage2->Controls->Add(this->dataGridStaff);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Margin = System::Windows::Forms::Padding(2);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(2);
			this->tabPage2->Size = System::Drawing::Size(826, 492);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnels";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox23
			// 
			this->textBox23->Location = System::Drawing::Point(19, 364);
			this->textBox23->Margin = System::Windows::Forms::Padding(2);
			this->textBox23->Name = L"textBox23";
			this->textBox23->Size = System::Drawing::Size(352, 20);
			this->textBox23->TabIndex = 13;
			this->textBox23->Text = L"Numéro de téléphone";
			// 
			// textBox22
			// 
			this->textBox22->Location = System::Drawing::Point(19, 318);
			this->textBox22->Margin = System::Windows::Forms::Padding(2);
			this->textBox22->Name = L"textBox22";
			this->textBox22->Size = System::Drawing::Size(352, 20);
			this->textBox22->TabIndex = 12;
			this->textBox22->Text = L"Pays";
			// 
			// textBox21
			// 
			this->textBox21->Location = System::Drawing::Point(19, 341);
			this->textBox21->Margin = System::Windows::Forms::Padding(2);
			this->textBox21->Name = L"textBox21";
			this->textBox21->Size = System::Drawing::Size(352, 20);
			this->textBox21->TabIndex = 11;
			this->textBox21->Text = L"Adresse Mail";
			// 
			// textBox20
			// 
			this->textBox20->Location = System::Drawing::Point(19, 296);
			this->textBox20->Margin = System::Windows::Forms::Padding(2);
			this->textBox20->Name = L"textBox20";
			this->textBox20->Size = System::Drawing::Size(258, 20);
			this->textBox20->TabIndex = 10;
			this->textBox20->Text = L"Ville";
			// 
			// textBox19
			// 
			this->textBox19->Location = System::Drawing::Point(89, 273);
			this->textBox19->Margin = System::Windows::Forms::Padding(2);
			this->textBox19->Name = L"textBox19";
			this->textBox19->Size = System::Drawing::Size(282, 20);
			this->textBox19->TabIndex = 9;
			this->textBox19->Text = L"Adresse";
			// 
			// textBox18
			// 
			this->textBox18->Location = System::Drawing::Point(19, 273);
			this->textBox18->Margin = System::Windows::Forms::Padding(2);
			this->textBox18->Name = L"textBox18";
			this->textBox18->Size = System::Drawing::Size(67, 20);
			this->textBox18->TabIndex = 8;
			this->textBox18->Text = L"Numéro";
			// 
			// textBox17
			// 
			this->textBox17->Location = System::Drawing::Point(280, 296);
			this->textBox17->Margin = System::Windows::Forms::Padding(2);
			this->textBox17->Name = L"textBox17";
			this->textBox17->Size = System::Drawing::Size(90, 20);
			this->textBox17->TabIndex = 7;
			this->textBox17->Text = L"Code postal";
			// 
			// textBox16
			// 
			this->textBox16->Location = System::Drawing::Point(19, 250);
			this->textBox16->Margin = System::Windows::Forms::Padding(2);
			this->textBox16->Name = L"textBox16";
			this->textBox16->Size = System::Drawing::Size(352, 20);
			this->textBox16->TabIndex = 6;
			this->textBox16->Text = L"Prénom";
			// 
			// textBox15
			// 
			this->textBox15->Location = System::Drawing::Point(19, 228);
			this->textBox15->Margin = System::Windows::Forms::Padding(2);
			this->textBox15->Name = L"textBox15";
			this->textBox15->Size = System::Drawing::Size(352, 20);
			this->textBox15->TabIndex = 5;
			this->textBox15->Text = L"Nom";
			// 
			// findStaff
			// 
			this->findStaff->Location = System::Drawing::Point(211, 93);
			this->findStaff->Margin = System::Windows::Forms::Padding(2);
			this->findStaff->Name = L"findStaff";
			this->findStaff->Size = System::Drawing::Size(159, 74);
			this->findStaff->TabIndex = 4;
			this->findStaff->Text = L"Rechercher";
			this->findStaff->UseVisualStyleBackColor = true;
			this->findStaff->Click += gcnew System::EventHandler(this, &MyForm::printStaff_Click);
			// 
			// deleteStaff
			// 
			this->deleteStaff->Location = System::Drawing::Point(19, 93);
			this->deleteStaff->Margin = System::Windows::Forms::Padding(2);
			this->deleteStaff->Name = L"deleteStaff";
			this->deleteStaff->Size = System::Drawing::Size(159, 74);
			this->deleteStaff->TabIndex = 3;
			this->deleteStaff->Text = L"Supprimer personnel";
			this->deleteStaff->UseVisualStyleBackColor = true;
			// 
			// updateStaff
			// 
			this->updateStaff->Location = System::Drawing::Point(211, 14);
			this->updateStaff->Margin = System::Windows::Forms::Padding(2);
			this->updateStaff->Name = L"updateStaff";
			this->updateStaff->Size = System::Drawing::Size(159, 74);
			this->updateStaff->TabIndex = 2;
			this->updateStaff->Text = L"Mise à jour du personnel";
			this->updateStaff->UseVisualStyleBackColor = true;
			// 
			// addStaff
			// 
			this->addStaff->Location = System::Drawing::Point(19, 14);
			this->addStaff->Margin = System::Windows::Forms::Padding(2);
			this->addStaff->Name = L"addStaff";
			this->addStaff->Size = System::Drawing::Size(159, 74);
			this->addStaff->TabIndex = 1;
			this->addStaff->Text = L"Ajouter personnel";
			this->addStaff->UseVisualStyleBackColor = true;
			// 
			// dataGridStaff
			// 
			this->dataGridStaff->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStaff->Location = System::Drawing::Point(388, 5);
			this->dataGridStaff->Margin = System::Windows::Forms::Padding(2);
			this->dataGridStaff->Name = L"dataGridStaff";
			this->dataGridStaff->RowHeadersWidth = 51;
			this->dataGridStaff->RowTemplate->Height = 24;
			this->dataGridStaff->Size = System::Drawing::Size(436, 484);
			this->dataGridStaff->TabIndex = 0;
			// 
			// tabPage4
			// 
			this->tabPage4->Controls->Add(this->textBox34);
			this->tabPage4->Controls->Add(this->textBox33);
			this->tabPage4->Controls->Add(this->textBox32);
			this->tabPage4->Controls->Add(this->textBox31);
			this->tabPage4->Controls->Add(this->textBox30);
			this->tabPage4->Controls->Add(this->textBox29);
			this->tabPage4->Controls->Add(this->textBox28);
			this->tabPage4->Controls->Add(this->deleteItemOrder);
			this->tabPage4->Controls->Add(this->addItemOrder);
			this->tabPage4->Controls->Add(this->printOrder);
			this->tabPage4->Controls->Add(this->deleteOrder);
			this->tabPage4->Controls->Add(this->updateOrder);
			this->tabPage4->Controls->Add(this->addOrder);
			this->tabPage4->Controls->Add(this->dataGridOrder);
			this->tabPage4->Location = System::Drawing::Point(4, 22);
			this->tabPage4->Margin = System::Windows::Forms::Padding(2);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(2);
			this->tabPage4->Size = System::Drawing::Size(826, 492);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Commandes";
			this->tabPage4->UseVisualStyleBackColor = true;
			this->tabPage4->Click += gcnew System::EventHandler(this, &MyForm::tabPage4_Click);
			// 
			// textBox34
			// 
			this->textBox34->Location = System::Drawing::Point(19, 318);
			this->textBox34->Margin = System::Windows::Forms::Padding(2);
			this->textBox34->Name = L"textBox34";
			this->textBox34->Size = System::Drawing::Size(352, 20);
			this->textBox34->TabIndex = 13;
			this->textBox34->Text = L"Référence";
			// 
			// textBox33
			// 
			this->textBox33->Location = System::Drawing::Point(19, 340);
			this->textBox33->Margin = System::Windows::Forms::Padding(2);
			this->textBox33->Name = L"textBox33";
			this->textBox33->Size = System::Drawing::Size(352, 20);
			this->textBox33->TabIndex = 12;
			this->textBox33->Text = L"Référence";
			// 
			// textBox32
			// 
			this->textBox32->Location = System::Drawing::Point(19, 363);
			this->textBox32->Margin = System::Windows::Forms::Padding(2);
			this->textBox32->Name = L"textBox32";
			this->textBox32->Size = System::Drawing::Size(352, 20);
			this->textBox32->TabIndex = 11;
			this->textBox32->Text = L"Référence";
			// 
			// textBox31
			// 
			this->textBox31->Location = System::Drawing::Point(19, 386);
			this->textBox31->Margin = System::Windows::Forms::Padding(2);
			this->textBox31->Name = L"textBox31";
			this->textBox31->Size = System::Drawing::Size(352, 20);
			this->textBox31->TabIndex = 10;
			this->textBox31->Text = L"Référence";
			// 
			// textBox30
			// 
			this->textBox30->Location = System::Drawing::Point(19, 409);
			this->textBox30->Margin = System::Windows::Forms::Padding(2);
			this->textBox30->Name = L"textBox30";
			this->textBox30->Size = System::Drawing::Size(352, 20);
			this->textBox30->TabIndex = 9;
			this->textBox30->Text = L"Référence";
			// 
			// textBox29
			// 
			this->textBox29->Location = System::Drawing::Point(19, 295);
			this->textBox29->Margin = System::Windows::Forms::Padding(2);
			this->textBox29->Name = L"textBox29";
			this->textBox29->Size = System::Drawing::Size(352, 20);
			this->textBox29->TabIndex = 8;
			this->textBox29->Text = L"Référence";
			// 
			// textBox28
			// 
			this->textBox28->Location = System::Drawing::Point(19, 272);
			this->textBox28->Margin = System::Windows::Forms::Padding(2);
			this->textBox28->Name = L"textBox28";
			this->textBox28->Size = System::Drawing::Size(352, 20);
			this->textBox28->TabIndex = 7;
			this->textBox28->Text = L"Référence";
			// 
			// deleteItemOrder
			// 
			this->deleteItemOrder->Location = System::Drawing::Point(211, 171);
			this->deleteItemOrder->Margin = System::Windows::Forms::Padding(2);
			this->deleteItemOrder->Name = L"deleteItemOrder";
			this->deleteItemOrder->Size = System::Drawing::Size(159, 74);
			this->deleteItemOrder->TabIndex = 6;
			this->deleteItemOrder->Text = L"Supprimer commande";
			this->deleteItemOrder->UseVisualStyleBackColor = true;
			// 
			// addItemOrder
			// 
			this->addItemOrder->Location = System::Drawing::Point(19, 171);
			this->addItemOrder->Margin = System::Windows::Forms::Padding(2);
			this->addItemOrder->Name = L"addItemOrder";
			this->addItemOrder->Size = System::Drawing::Size(159, 74);
			this->addItemOrder->TabIndex = 5;
			this->addItemOrder->Text = L"Ajouter produit";
			this->addItemOrder->UseVisualStyleBackColor = true;
			// 
			// printOrder
			// 
			this->printOrder->Location = System::Drawing::Point(211, 93);
			this->printOrder->Margin = System::Windows::Forms::Padding(2);
			this->printOrder->Name = L"printOrder";
			this->printOrder->Size = System::Drawing::Size(159, 74);
			this->printOrder->TabIndex = 4;
			this->printOrder->Text = L"Afficher";
			this->printOrder->UseVisualStyleBackColor = true;
			// 
			// deleteOrder
			// 
			this->deleteOrder->Location = System::Drawing::Point(19, 93);
			this->deleteOrder->Margin = System::Windows::Forms::Padding(2);
			this->deleteOrder->Name = L"deleteOrder";
			this->deleteOrder->Size = System::Drawing::Size(159, 74);
			this->deleteOrder->TabIndex = 3;
			this->deleteOrder->Text = L"Supprimer commande";
			this->deleteOrder->UseVisualStyleBackColor = true;
			// 
			// updateOrder
			// 
			this->updateOrder->Location = System::Drawing::Point(211, 14);
			this->updateOrder->Margin = System::Windows::Forms::Padding(2);
			this->updateOrder->Name = L"updateOrder";
			this->updateOrder->Size = System::Drawing::Size(159, 74);
			this->updateOrder->TabIndex = 2;
			this->updateOrder->Text = L"Mise à jour de la commande";
			this->updateOrder->UseVisualStyleBackColor = true;
			// 
			// addOrder
			// 
			this->addOrder->Location = System::Drawing::Point(19, 14);
			this->addOrder->Margin = System::Windows::Forms::Padding(2);
			this->addOrder->Name = L"addOrder";
			this->addOrder->Size = System::Drawing::Size(159, 74);
			this->addOrder->TabIndex = 1;
			this->addOrder->Text = L"Ajouter commande";
			this->addOrder->UseVisualStyleBackColor = true;
			// 
			// dataGridOrder
			// 
			this->dataGridOrder->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridOrder->Location = System::Drawing::Point(388, 5);
			this->dataGridOrder->Margin = System::Windows::Forms::Padding(2);
			this->dataGridOrder->Name = L"dataGridOrder";
			this->dataGridOrder->RowHeadersWidth = 51;
			this->dataGridOrder->RowTemplate->Height = 24;
			this->dataGridOrder->Size = System::Drawing::Size(436, 484);
			this->dataGridOrder->TabIndex = 0;
			// 
			// tabPage5
			// 
			this->tabPage5->Controls->Add(this->label11);
			this->tabPage5->Controls->Add(this->textBox14);
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->button11);
			this->tabPage5->Controls->Add(this->comboBox4);
			this->tabPage5->Controls->Add(this->comboBox3);
			this->tabPage5->Controls->Add(this->comboBox2);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->comboBox1);
			this->tabPage5->Controls->Add(this->button10);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->printTop10);
			this->tabPage5->Controls->Add(this->dataGridStats);
			this->tabPage5->Controls->Add(this->button7);
			this->tabPage5->Controls->Add(this->button6);
			this->tabPage5->Controls->Add(this->textBox13);
			this->tabPage5->Controls->Add(this->textBox12);
			this->tabPage5->Controls->Add(this->textBox11);
			this->tabPage5->Controls->Add(this->textBox10);
			this->tabPage5->Controls->Add(this->button5);
			this->tabPage5->Controls->Add(this->label8);
			this->tabPage5->Controls->Add(this->label7);
			this->tabPage5->Controls->Add(this->label6);
			this->tabPage5->Controls->Add(this->label5);
			this->tabPage5->Controls->Add(this->label4);
			this->tabPage5->Controls->Add(this->label3);
			this->tabPage5->Controls->Add(this->label2);
			this->tabPage5->Controls->Add(this->label1);
			this->tabPage5->Location = System::Drawing::Point(4, 22);
			this->tabPage5->Margin = System::Windows::Forms::Padding(2);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(2);
			this->tabPage5->Size = System::Drawing::Size(826, 492);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &MyForm::tabPage5_Click);
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(12, 359);
			this->label11->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(168, 13);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Calculer le panier total d\'un client :";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(136, 285);
			this->textBox14->Margin = System::Windows::Forms::Padding(2);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(57, 20);
			this->textBox14->TabIndex = 26;
			this->textBox14->Text = L"Année";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(12, 269);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(229, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Calcul le chiffer d\'affaire sur un mois particulier :";
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(291, 271);
			this->button11->Margin = System::Windows::Forms::Padding(2);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(112, 32);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Simulation";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Démarque Inconnue 2%", L"Démarque Inconnue 3%",
					L"Démarque Inconnue 5%"
			});
			this->comboBox4->Location = System::Drawing::Point(251, 243);
			this->comboBox4->Margin = System::Windows::Forms::Padding(2);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(199, 21);
			this->comboBox4->TabIndex = 23;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Remise commerciale 3%", L"Remise commerciale 6%" });
			this->comboBox3->Location = System::Drawing::Point(252, 219);
			this->comboBox3->Margin = System::Windows::Forms::Padding(2);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(198, 21);
			this->comboBox3->TabIndex = 22;
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Marge commerciale 10%", L"Marge commerciale 15%",
					L"Marge commerciale 20%"
			});
			this->comboBox2->Location = System::Drawing::Point(252, 194);
			this->comboBox2->Margin = System::Windows::Forms::Padding(2);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(199, 21);
			this->comboBox2->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(248, 139);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 18);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Simulation";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TVA 5%", L"TVA 10%", L"TVA 15%" });
			this->comboBox1->Location = System::Drawing::Point(251, 170);
			this->comboBox1->Margin = System::Windows::Forms::Padding(2);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 21);
			this->comboBox1->TabIndex = 19;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(291, 93);
			this->button10->Margin = System::Windows::Forms::Padding(2);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(112, 44);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Afficher produit à réapprovisionner";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(291, 52);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 32);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Afficher bot 10";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// printTop10
			// 
			this->printTop10->Location = System::Drawing::Point(291, 15);
			this->printTop10->Margin = System::Windows::Forms::Padding(2);
			this->printTop10->Name = L"printTop10";
			this->printTop10->Size = System::Drawing::Size(112, 32);
			this->printTop10->TabIndex = 16;
			this->printTop10->Text = L"Afficher top 10";
			this->printTop10->UseVisualStyleBackColor = true;
			// 
			// dataGridStats
			// 
			this->dataGridStats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStats->Location = System::Drawing::Point(461, 5);
			this->dataGridStats->Margin = System::Windows::Forms::Padding(2);
			this->dataGridStats->Name = L"dataGridStats";
			this->dataGridStats->RowHeadersWidth = 51;
			this->dataGridStats->RowTemplate->Height = 24;
			this->dataGridStats->Size = System::Drawing::Size(362, 484);
			this->dataGridStats->TabIndex = 15;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(38, 444);
			this->button7->Margin = System::Windows::Forms::Padding(2);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(112, 32);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Calcul";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(54, 308);
			this->button6->Margin = System::Windows::Forms::Padding(2);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(112, 32);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Calcul";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Location = System::Drawing::Point(14, 422);
			this->textBox13->Margin = System::Windows::Forms::Padding(2);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(179, 20);
			this->textBox13->TabIndex = 12;
			this->textBox13->Text = L"Téléphone";
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Location = System::Drawing::Point(14, 399);
			this->textBox12->Margin = System::Windows::Forms::Padding(2);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(179, 20);
			this->textBox12->TabIndex = 11;
			this->textBox12->Text = L"Prénom";
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Location = System::Drawing::Point(14, 376);
			this->textBox11->Margin = System::Windows::Forms::Padding(2);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(179, 20);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"Nom";
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox10->Location = System::Drawing::Point(14, 285);
			this->textBox10->Margin = System::Windows::Forms::Padding(2);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(114, 20);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"Mois";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(38, 170);
			this->button5->Margin = System::Windows::Forms::Padding(2);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(112, 32);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Calcul";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(11, 143);
			this->label8->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(46, 13);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Résultat";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(11, 127);
			this->label7->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(128, 13);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Valeur d\'achat du stock : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(11, 86);
			this->label6->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(149, 13);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Valeur commerciale du stock :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 102);
			this->label5->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(43, 13);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Résulat";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 86);
			this->label4->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 13);
			this->label4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 62);
			this->label3->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(46, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Résultat";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(11, 46);
			this->label2->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(139, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Panier moyen après remise :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(11, 11);
			this->label1->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(183, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Statistiques génériques";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// printStock
			// 
			this->printStock->Location = System::Drawing::Point(19, 171);
			this->printStock->Margin = System::Windows::Forms::Padding(2);
			this->printStock->Name = L"printStock";
			this->printStock->Size = System::Drawing::Size(351, 38);
			this->printStock->TabIndex = 10;
			this->printStock->Text = L"Afficher tout";
			this->printStock->UseVisualStyleBackColor = true;
			this->printStock->Click += gcnew System::EventHandler(this, &MyForm::printStock_Click);
			// 
			// finClient
			// 
			this->finClient->Location = System::Drawing::Point(211, 93);
			this->finClient->Margin = System::Windows::Forms::Padding(2);
			this->finClient->Name = L"finClient";
			this->finClient->Size = System::Drawing::Size(161, 74);
			this->finClient->TabIndex = 14;
			this->finClient->Text = L"Rechercher";
			this->finClient->UseVisualStyleBackColor = true;
			this->finClient->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// printStaff
			// 
			this->printStaff->Location = System::Drawing::Point(19, 171);
			this->printStaff->Margin = System::Windows::Forms::Padding(2);
			this->printStaff->Name = L"printStaff";
			this->printStaff->Size = System::Drawing::Size(351, 38);
			this->printStaff->TabIndex = 15;
			this->printStaff->Text = L"Afficher tout";
			this->printStaff->UseVisualStyleBackColor = true;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(856, 536);
			this->Controls->Add(this->Tabcontrol);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"MyForm";
			this->Text = L"iTech";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Tabcontrol->ResumeLayout(false);
			this->tabPage3->ResumeLayout(false);
			this->tabPage3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStock))->EndInit();
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridClient))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStaff))->EndInit();
			this->tabPage4->ResumeLayout(false);
			this->tabPage4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridOrder))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridStats))->EndInit();
			this->ResumeLayout(false);

		}
private: System::Void btn_load_Click(System::Object^ sender, System::EventArgs^ e)
{
}
private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	this->oSvcClient = gcnew NS_Comp_Svc::CLservicesClient();
	this->oSvcStock = gcnew NS_Comp_Svc::CLservicesStock();
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button19_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox25_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void tabPage4_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printClient_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridClient->Refresh();
	this->oDs = this->oSvcClient->selectionnerToutLesClients("Rsl");
	this->dataGridClient->DataSource = this->oDs;
	this->dataGridClient->DataMember = "Rsl";
}
private: System::Void printStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStock->Refresh();
	this->oDs = this->oSvcStock->selectionnerToutLesStocks("Rsl");
	this->dataGridStock->DataSource = this->oDs;
	this->dataGridStock->DataMember = "Rsl";
}
private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridStock_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void printStaff_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
