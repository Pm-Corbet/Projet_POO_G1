#pragma once
#include "CLservicesClient.h"
#include "CLservicesStock.h"
#include "CLservicesStaff.h"
#include "CLservicesOrder.h"
#include "CLservicesAddress.h"
#include "CLservicesStats.h"

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
	private: NS_Comp_Svc::CLservicesStaff^ oSvcStaff;
	private: NS_Comp_Svc::CLservicesOrder^ oSvcOrder;
	private: NS_Comp_Svc::CLservicesAddress^ oSvcAddress;
	private: NS_Comp_Svc::CLservicesStats^ oSvcStats;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ addClient;
	private: System::Windows::Forms::TextBox^ phoneClient;

	private: System::Windows::Forms::TextBox^ emailClient;






	private: System::Windows::Forms::TextBox^ countryClient;


	private: System::Windows::Forms::TextBox^ numberClient;

	private: System::Windows::Forms::TextBox^ zipcodeClient;


	private: System::Windows::Forms::TextBox^ cityClient;
	private: System::Windows::Forms::TextBox^ street_nameClient;

	private: System::Windows::Forms::TextBox^ first_nameClient;
	private: System::Windows::Forms::TextBox^ last_nameClient;







	private: System::Windows::Forms::Button^ updateClient;

	private: System::Windows::Forms::Button^ deleteClient;






	private: System::Windows::Forms::Label^ label4;



	private: System::Windows::Forms::Button^ calculMonth;




	private: System::Windows::Forms::TextBox^ monthStat;

	private: System::Windows::Forms::Button^ printAlerteStock;





	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ printTop10;
	private: System::Windows::Forms::DataGridView^ dataGridStats;



	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ TVABox;


private: System::Windows::Forms::TextBox^ yearStats;

	private: System::Windows::Forms::Label^ label10;
private: System::Windows::Forms::Button^ simulateStats;


private: System::Windows::Forms::ComboBox^ demarqueInconnueBox;

private: System::Windows::Forms::ComboBox^ remiseCommercialeBox;
private: System::Windows::Forms::ComboBox^ margeCommercialeBox;



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
private: System::Windows::Forms::TextBox^ phoneStaff;
private: System::Windows::Forms::TextBox^ countryStaff;




private: System::Windows::Forms::TextBox^ emailStaff;
private: System::Windows::Forms::TextBox^ cityStaff;


private: System::Windows::Forms::TextBox^ street_nameStaff;

private: System::Windows::Forms::TextBox^ numberStaff;
private: System::Windows::Forms::TextBox^ zip_codeStaff;


private: System::Windows::Forms::TextBox^ first_nameStaff;

private: System::Windows::Forms::TextBox^ last_nameStaff;

private: System::Windows::Forms::TextBox^ idStocks;
private: System::Windows::Forms::TextBox^ nameStock;
private: System::Windows::Forms::TextBox^ HT_priceStock;



private: System::Windows::Forms::TextBox^ quantityStock;

private: System::Windows::Forms::TextBox^ emission_datetimeOrder;
private: System::Windows::Forms::TextBox^ payment_numberOrder;
private: System::Windows::Forms::TextBox^ total_amountOrder;
private: System::Windows::Forms::TextBox^ item_nameOrder;





private: System::Windows::Forms::TextBox^ delivery_datetimeOrder;
private: System::Windows::Forms::TextBox^ referenceOrder;


private: System::Windows::Forms::Button^ findOrder;

private: System::Windows::Forms::Button^ addItemOrder;
private: System::Windows::Forms::TextBox^ TVA_rateStock;


private: System::Windows::Forms::DataGridView^ dataGridClient;
private: System::Windows::Forms::Button^ printStock;
private: System::Windows::Forms::Button^ findClient;




private: System::Windows::Forms::Button^ printStaff;
private: System::Windows::Forms::Button^ printClient;
private: System::Windows::Forms::TextBox^ date_of_birthClient;
private: System::Windows::Forms::CheckBox^ addressCheck;
private: System::Windows::Forms::TextBox^ complementClient;
private: System::Windows::Forms::CheckBox^ is_enabledOrder;
private: System::Windows::Forms::TextBox^ emailOrder;
private: System::Windows::Forms::TextBox^ phoneOrder;
private: System::Windows::Forms::Button^ avgPanierStats;
private: System::Windows::Forms::Button^ printBuyCostStats;
private: System::Windows::Forms::Button^ totalAmountClientStats;
private: System::Windows::Forms::CheckBox^ printMoreOrders;
private: System::Windows::Forms::TextBox^ hiring_dateStaff;
private: System::Windows::Forms::TextBox^ complementStaff;














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
			this->printStock = (gcnew System::Windows::Forms::Button());
			this->TVA_rateStock = (gcnew System::Windows::Forms::TextBox());
			this->HT_priceStock = (gcnew System::Windows::Forms::TextBox());
			this->quantityStock = (gcnew System::Windows::Forms::TextBox());
			this->idStocks = (gcnew System::Windows::Forms::TextBox());
			this->nameStock = (gcnew System::Windows::Forms::TextBox());
			this->findStock = (gcnew System::Windows::Forms::Button());
			this->deleteStock = (gcnew System::Windows::Forms::Button());
			this->updateStock = (gcnew System::Windows::Forms::Button());
			this->addStock = (gcnew System::Windows::Forms::Button());
			this->dataGridStock = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->complementClient = (gcnew System::Windows::Forms::TextBox());
			this->addressCheck = (gcnew System::Windows::Forms::CheckBox());
			this->date_of_birthClient = (gcnew System::Windows::Forms::TextBox());
			this->findClient = (gcnew System::Windows::Forms::Button());
			this->printClient = (gcnew System::Windows::Forms::Button());
			this->phoneClient = (gcnew System::Windows::Forms::TextBox());
			this->emailClient = (gcnew System::Windows::Forms::TextBox());
			this->countryClient = (gcnew System::Windows::Forms::TextBox());
			this->numberClient = (gcnew System::Windows::Forms::TextBox());
			this->zipcodeClient = (gcnew System::Windows::Forms::TextBox());
			this->cityClient = (gcnew System::Windows::Forms::TextBox());
			this->street_nameClient = (gcnew System::Windows::Forms::TextBox());
			this->first_nameClient = (gcnew System::Windows::Forms::TextBox());
			this->last_nameClient = (gcnew System::Windows::Forms::TextBox());
			this->updateClient = (gcnew System::Windows::Forms::Button());
			this->deleteClient = (gcnew System::Windows::Forms::Button());
			this->addClient = (gcnew System::Windows::Forms::Button());
			this->dataGridClient = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->complementStaff = (gcnew System::Windows::Forms::TextBox());
			this->hiring_dateStaff = (gcnew System::Windows::Forms::TextBox());
			this->printStaff = (gcnew System::Windows::Forms::Button());
			this->phoneStaff = (gcnew System::Windows::Forms::TextBox());
			this->countryStaff = (gcnew System::Windows::Forms::TextBox());
			this->emailStaff = (gcnew System::Windows::Forms::TextBox());
			this->cityStaff = (gcnew System::Windows::Forms::TextBox());
			this->street_nameStaff = (gcnew System::Windows::Forms::TextBox());
			this->numberStaff = (gcnew System::Windows::Forms::TextBox());
			this->zip_codeStaff = (gcnew System::Windows::Forms::TextBox());
			this->first_nameStaff = (gcnew System::Windows::Forms::TextBox());
			this->last_nameStaff = (gcnew System::Windows::Forms::TextBox());
			this->findStaff = (gcnew System::Windows::Forms::Button());
			this->deleteStaff = (gcnew System::Windows::Forms::Button());
			this->updateStaff = (gcnew System::Windows::Forms::Button());
			this->addStaff = (gcnew System::Windows::Forms::Button());
			this->dataGridStaff = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->printMoreOrders = (gcnew System::Windows::Forms::CheckBox());
			this->emailOrder = (gcnew System::Windows::Forms::TextBox());
			this->phoneOrder = (gcnew System::Windows::Forms::TextBox());
			this->is_enabledOrder = (gcnew System::Windows::Forms::CheckBox());
			this->emission_datetimeOrder = (gcnew System::Windows::Forms::TextBox());
			this->payment_numberOrder = (gcnew System::Windows::Forms::TextBox());
			this->total_amountOrder = (gcnew System::Windows::Forms::TextBox());
			this->item_nameOrder = (gcnew System::Windows::Forms::TextBox());
			this->delivery_datetimeOrder = (gcnew System::Windows::Forms::TextBox());
			this->referenceOrder = (gcnew System::Windows::Forms::TextBox());
			this->findOrder = (gcnew System::Windows::Forms::Button());
			this->addItemOrder = (gcnew System::Windows::Forms::Button());
			this->printOrder = (gcnew System::Windows::Forms::Button());
			this->deleteOrder = (gcnew System::Windows::Forms::Button());
			this->updateOrder = (gcnew System::Windows::Forms::Button());
			this->addOrder = (gcnew System::Windows::Forms::Button());
			this->dataGridOrder = (gcnew System::Windows::Forms::DataGridView());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->totalAmountClientStats = (gcnew System::Windows::Forms::Button());
			this->printBuyCostStats = (gcnew System::Windows::Forms::Button());
			this->avgPanierStats = (gcnew System::Windows::Forms::Button());
			this->yearStats = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->simulateStats = (gcnew System::Windows::Forms::Button());
			this->demarqueInconnueBox = (gcnew System::Windows::Forms::ComboBox());
			this->remiseCommercialeBox = (gcnew System::Windows::Forms::ComboBox());
			this->margeCommercialeBox = (gcnew System::Windows::Forms::ComboBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->TVABox = (gcnew System::Windows::Forms::ComboBox());
			this->printAlerteStock = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->printTop10 = (gcnew System::Windows::Forms::Button());
			this->dataGridStats = (gcnew System::Windows::Forms::DataGridView());
			this->calculMonth = (gcnew System::Windows::Forms::Button());
			this->monthStat = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
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
			this->tabPage3->Controls->Add(this->TVA_rateStock);
			this->tabPage3->Controls->Add(this->HT_priceStock);
			this->tabPage3->Controls->Add(this->quantityStock);
			this->tabPage3->Controls->Add(this->idStocks);
			this->tabPage3->Controls->Add(this->nameStock);
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
			// TVA_rateStock
			// 
			this->TVA_rateStock->Location = System::Drawing::Point(19, 343);
			this->TVA_rateStock->Margin = System::Windows::Forms::Padding(2);
			this->TVA_rateStock->Name = L"TVA_rateStock";
			this->TVA_rateStock->Size = System::Drawing::Size(352, 20);
			this->TVA_rateStock->TabIndex = 9;
			this->TVA_rateStock->Text = L"Taux de TVA";
			this->TVA_rateStock->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox35_TextChanged);
			// 
			// HT_priceStock
			// 
			this->HT_priceStock->Location = System::Drawing::Point(19, 319);
			this->HT_priceStock->Margin = System::Windows::Forms::Padding(2);
			this->HT_priceStock->Name = L"HT_priceStock";
			this->HT_priceStock->Size = System::Drawing::Size(352, 20);
			this->HT_priceStock->TabIndex = 8;
			this->HT_priceStock->Text = L"Prix Hors Taxe";
			// 
			// quantityStock
			// 
			this->quantityStock->Location = System::Drawing::Point(19, 297);
			this->quantityStock->Margin = System::Windows::Forms::Padding(2);
			this->quantityStock->Name = L"quantityStock";
			this->quantityStock->Size = System::Drawing::Size(352, 20);
			this->quantityStock->TabIndex = 7;
			this->quantityStock->Text = L"Quantit?";
			// 
			// idStocks
			// 
			this->idStocks->Location = System::Drawing::Point(19, 274);
			this->idStocks->Margin = System::Windows::Forms::Padding(2);
			this->idStocks->Name = L"idStocks";
			this->idStocks->Size = System::Drawing::Size(352, 20);
			this->idStocks->TabIndex = 6;
			this->idStocks->Text = L"Num?ro unique";
			this->idStocks->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox25_TextChanged);
			// 
			// nameStock
			// 
			this->nameStock->Location = System::Drawing::Point(19, 251);
			this->nameStock->Margin = System::Windows::Forms::Padding(2);
			this->nameStock->Name = L"nameStock";
			this->nameStock->Size = System::Drawing::Size(352, 20);
			this->nameStock->TabIndex = 5;
			this->nameStock->Text = L"Nom";
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
			this->deleteStock->Text = L"Supprimer l\'article";
			this->deleteStock->UseVisualStyleBackColor = true;
			this->deleteStock->Click += gcnew System::EventHandler(this, &MyForm::deleteStock_Click);
			// 
			// updateStock
			// 
			this->updateStock->Location = System::Drawing::Point(211, 14);
			this->updateStock->Margin = System::Windows::Forms::Padding(2);
			this->updateStock->Name = L"updateStock";
			this->updateStock->Size = System::Drawing::Size(159, 74);
			this->updateStock->TabIndex = 2;
			this->updateStock->Text = L"Modifier l\'article";
			this->updateStock->UseVisualStyleBackColor = true;
			// 
			// addStock
			// 
			this->addStock->Location = System::Drawing::Point(19, 14);
			this->addStock->Margin = System::Windows::Forms::Padding(2);
			this->addStock->Name = L"addStock";
			this->addStock->Size = System::Drawing::Size(159, 74);
			this->addStock->TabIndex = 1;
			this->addStock->Text = L"Ajouter article";
			this->addStock->UseVisualStyleBackColor = true;
			this->addStock->Click += gcnew System::EventHandler(this, &MyForm::addStock_Click);
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
			this->tabPage1->Controls->Add(this->complementClient);
			this->tabPage1->Controls->Add(this->addressCheck);
			this->tabPage1->Controls->Add(this->date_of_birthClient);
			this->tabPage1->Controls->Add(this->findClient);
			this->tabPage1->Controls->Add(this->printClient);
			this->tabPage1->Controls->Add(this->phoneClient);
			this->tabPage1->Controls->Add(this->emailClient);
			this->tabPage1->Controls->Add(this->countryClient);
			this->tabPage1->Controls->Add(this->numberClient);
			this->tabPage1->Controls->Add(this->zipcodeClient);
			this->tabPage1->Controls->Add(this->cityClient);
			this->tabPage1->Controls->Add(this->street_nameClient);
			this->tabPage1->Controls->Add(this->first_nameClient);
			this->tabPage1->Controls->Add(this->last_nameClient);
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
			// complementClient
			// 
			this->complementClient->Location = System::Drawing::Point(21, 368);
			this->complementClient->Margin = System::Windows::Forms::Padding(2);
			this->complementClient->Name = L"complementClient";
			this->complementClient->Size = System::Drawing::Size(352, 20);
			this->complementClient->TabIndex = 17;
			this->complementClient->Text = L"Compl?ment";
			// 
			// addressCheck
			// 
			this->addressCheck->AutoSize = true;
			this->addressCheck->Location = System::Drawing::Point(20, 441);
			this->addressCheck->Name = L"addressCheck";
			this->addressCheck->Size = System::Drawing::Size(126, 17);
			this->addressCheck->TabIndex = 16;
			this->addressCheck->Text = L"Addresse de livraison";
			this->addressCheck->UseVisualStyleBackColor = true;
			this->addressCheck->CheckedChanged += gcnew System::EventHandler(this, &MyForm::checkBox1_CheckedChanged_1);
			// 
			// date_of_birthClient
			// 
			this->date_of_birthClient->HideSelection = false;
			this->date_of_birthClient->Location = System::Drawing::Point(20, 274);
			this->date_of_birthClient->Margin = System::Windows::Forms::Padding(2);
			this->date_of_birthClient->Name = L"date_of_birthClient";
			this->date_of_birthClient->Size = System::Drawing::Size(352, 20);
			this->date_of_birthClient->TabIndex = 15;
			this->date_of_birthClient->Text = L"Date de naissance";
			this->date_of_birthClient->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox1_TextChanged);
			// 
			// findClient
			// 
			this->findClient->Location = System::Drawing::Point(211, 93);
			this->findClient->Margin = System::Windows::Forms::Padding(2);
			this->findClient->Name = L"findClient";
			this->findClient->Size = System::Drawing::Size(161, 74);
			this->findClient->TabIndex = 14;
			this->findClient->Text = L"Rechercher";
			this->findClient->UseVisualStyleBackColor = true;
			this->findClient->Click += gcnew System::EventHandler(this, &MyForm::findClient_Click);
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
			// phoneClient
			// 
			this->phoneClient->Location = System::Drawing::Point(20, 415);
			this->phoneClient->Margin = System::Windows::Forms::Padding(2);
			this->phoneClient->Name = L"phoneClient";
			this->phoneClient->Size = System::Drawing::Size(353, 20);
			this->phoneClient->TabIndex = 12;
			this->phoneClient->Text = L"Num?ro de t?l?phone";
			// 
			// emailClient
			// 
			this->emailClient->Location = System::Drawing::Point(20, 392);
			this->emailClient->Margin = System::Windows::Forms::Padding(2);
			this->emailClient->Name = L"emailClient";
			this->emailClient->Size = System::Drawing::Size(352, 20);
			this->emailClient->TabIndex = 11;
			this->emailClient->Text = L"Adresse Mail";
			// 
			// countryClient
			// 
			this->countryClient->Location = System::Drawing::Point(20, 344);
			this->countryClient->Margin = System::Windows::Forms::Padding(2);
			this->countryClient->Name = L"countryClient";
			this->countryClient->Size = System::Drawing::Size(352, 20);
			this->countryClient->TabIndex = 10;
			this->countryClient->Text = L"Pays";
			// 
			// numberClient
			// 
			this->numberClient->Location = System::Drawing::Point(20, 299);
			this->numberClient->Margin = System::Windows::Forms::Padding(2);
			this->numberClient->Name = L"numberClient";
			this->numberClient->Size = System::Drawing::Size(67, 20);
			this->numberClient->TabIndex = 9;
			this->numberClient->Text = L"Num?ro";
			// 
			// zipcodeClient
			// 
			this->zipcodeClient->Location = System::Drawing::Point(281, 322);
			this->zipcodeClient->Margin = System::Windows::Forms::Padding(2);
			this->zipcodeClient->Name = L"zipcodeClient";
			this->zipcodeClient->Size = System::Drawing::Size(90, 20);
			this->zipcodeClient->TabIndex = 8;
			this->zipcodeClient->Text = L"Code Postal";
			// 
			// cityClient
			// 
			this->cityClient->Location = System::Drawing::Point(20, 322);
			this->cityClient->Margin = System::Windows::Forms::Padding(2);
			this->cityClient->Name = L"cityClient";
			this->cityClient->Size = System::Drawing::Size(258, 20);
			this->cityClient->TabIndex = 7;
			this->cityClient->Text = L"Ville";
			// 
			// street_nameClient
			// 
			this->street_nameClient->Location = System::Drawing::Point(90, 299);
			this->street_nameClient->Margin = System::Windows::Forms::Padding(2);
			this->street_nameClient->Name = L"street_nameClient";
			this->street_nameClient->Size = System::Drawing::Size(282, 20);
			this->street_nameClient->TabIndex = 6;
			this->street_nameClient->Tag = L"";
			this->street_nameClient->Text = L"Adresse";
			// 
			// first_nameClient
			// 
			this->first_nameClient->HideSelection = false;
			this->first_nameClient->Location = System::Drawing::Point(19, 250);
			this->first_nameClient->Margin = System::Windows::Forms::Padding(2);
			this->first_nameClient->Name = L"first_nameClient";
			this->first_nameClient->Size = System::Drawing::Size(352, 20);
			this->first_nameClient->TabIndex = 5;
			this->first_nameClient->Text = L"Pr?nom";
			// 
			// last_nameClient
			// 
			this->last_nameClient->Location = System::Drawing::Point(19, 228);
			this->last_nameClient->Margin = System::Windows::Forms::Padding(2);
			this->last_nameClient->Name = L"last_nameClient";
			this->last_nameClient->Size = System::Drawing::Size(352, 20);
			this->last_nameClient->TabIndex = 4;
			this->last_nameClient->Text = L"Nom";
			// 
			// updateClient
			// 
			this->updateClient->Location = System::Drawing::Point(211, 14);
			this->updateClient->Margin = System::Windows::Forms::Padding(2);
			this->updateClient->Name = L"updateClient";
			this->updateClient->Size = System::Drawing::Size(159, 74);
			this->updateClient->TabIndex = 3;
			this->updateClient->Text = L"Mise ? jour du client";
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
			this->deleteClient->Click += gcnew System::EventHandler(this, &MyForm::deleteClient_Click);
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
			this->addClient->Click += gcnew System::EventHandler(this, &MyForm::addClient_Click);
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
			this->tabPage2->Controls->Add(this->complementStaff);
			this->tabPage2->Controls->Add(this->hiring_dateStaff);
			this->tabPage2->Controls->Add(this->printStaff);
			this->tabPage2->Controls->Add(this->phoneStaff);
			this->tabPage2->Controls->Add(this->countryStaff);
			this->tabPage2->Controls->Add(this->emailStaff);
			this->tabPage2->Controls->Add(this->cityStaff);
			this->tabPage2->Controls->Add(this->street_nameStaff);
			this->tabPage2->Controls->Add(this->numberStaff);
			this->tabPage2->Controls->Add(this->zip_codeStaff);
			this->tabPage2->Controls->Add(this->first_nameStaff);
			this->tabPage2->Controls->Add(this->last_nameStaff);
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
			// complementStaff
			// 
			this->complementStaff->Location = System::Drawing::Point(19, 367);
			this->complementStaff->Margin = System::Windows::Forms::Padding(2);
			this->complementStaff->Name = L"complementStaff";
			this->complementStaff->Size = System::Drawing::Size(352, 20);
			this->complementStaff->TabIndex = 17;
			this->complementStaff->Text = L"Compl?ment adresse";
			// 
			// hiring_dateStaff
			// 
			this->hiring_dateStaff->Location = System::Drawing::Point(19, 274);
			this->hiring_dateStaff->Margin = System::Windows::Forms::Padding(2);
			this->hiring_dateStaff->Name = L"hiring_dateStaff";
			this->hiring_dateStaff->Size = System::Drawing::Size(352, 20);
			this->hiring_dateStaff->TabIndex = 16;
			this->hiring_dateStaff->Text = L"Date de recrutement";
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
			this->printStaff->Click += gcnew System::EventHandler(this, &MyForm::printStaff_Click);
			// 
			// phoneStaff
			// 
			this->phoneStaff->Location = System::Drawing::Point(18, 414);
			this->phoneStaff->Margin = System::Windows::Forms::Padding(2);
			this->phoneStaff->Name = L"phoneStaff";
			this->phoneStaff->Size = System::Drawing::Size(352, 20);
			this->phoneStaff->TabIndex = 13;
			this->phoneStaff->Text = L"Num?ro de t?l?phone";
			// 
			// countryStaff
			// 
			this->countryStaff->Location = System::Drawing::Point(19, 343);
			this->countryStaff->Margin = System::Windows::Forms::Padding(2);
			this->countryStaff->Name = L"countryStaff";
			this->countryStaff->Size = System::Drawing::Size(352, 20);
			this->countryStaff->TabIndex = 12;
			this->countryStaff->Text = L"Pays";
			// 
			// emailStaff
			// 
			this->emailStaff->Location = System::Drawing::Point(18, 391);
			this->emailStaff->Margin = System::Windows::Forms::Padding(2);
			this->emailStaff->Name = L"emailStaff";
			this->emailStaff->Size = System::Drawing::Size(352, 20);
			this->emailStaff->TabIndex = 11;
			this->emailStaff->Text = L"Adresse Mail";
			// 
			// cityStaff
			// 
			this->cityStaff->Location = System::Drawing::Point(19, 321);
			this->cityStaff->Margin = System::Windows::Forms::Padding(2);
			this->cityStaff->Name = L"cityStaff";
			this->cityStaff->Size = System::Drawing::Size(258, 20);
			this->cityStaff->TabIndex = 10;
			this->cityStaff->Text = L"Ville";
			// 
			// street_nameStaff
			// 
			this->street_nameStaff->Location = System::Drawing::Point(89, 298);
			this->street_nameStaff->Margin = System::Windows::Forms::Padding(2);
			this->street_nameStaff->Name = L"street_nameStaff";
			this->street_nameStaff->Size = System::Drawing::Size(282, 20);
			this->street_nameStaff->TabIndex = 9;
			this->street_nameStaff->Text = L"Adresse";
			// 
			// numberStaff
			// 
			this->numberStaff->Location = System::Drawing::Point(19, 298);
			this->numberStaff->Margin = System::Windows::Forms::Padding(2);
			this->numberStaff->Name = L"numberStaff";
			this->numberStaff->Size = System::Drawing::Size(67, 20);
			this->numberStaff->TabIndex = 8;
			this->numberStaff->Text = L"Num?ro";
			// 
			// zip_codeStaff
			// 
			this->zip_codeStaff->Location = System::Drawing::Point(280, 321);
			this->zip_codeStaff->Margin = System::Windows::Forms::Padding(2);
			this->zip_codeStaff->Name = L"zip_codeStaff";
			this->zip_codeStaff->Size = System::Drawing::Size(90, 20);
			this->zip_codeStaff->TabIndex = 7;
			this->zip_codeStaff->Text = L"Code postal";
			// 
			// first_nameStaff
			// 
			this->first_nameStaff->Location = System::Drawing::Point(19, 250);
			this->first_nameStaff->Margin = System::Windows::Forms::Padding(2);
			this->first_nameStaff->Name = L"first_nameStaff";
			this->first_nameStaff->Size = System::Drawing::Size(352, 20);
			this->first_nameStaff->TabIndex = 6;
			this->first_nameStaff->Text = L"Pr?nom";
			// 
			// last_nameStaff
			// 
			this->last_nameStaff->Location = System::Drawing::Point(19, 228);
			this->last_nameStaff->Margin = System::Windows::Forms::Padding(2);
			this->last_nameStaff->Name = L"last_nameStaff";
			this->last_nameStaff->Size = System::Drawing::Size(352, 20);
			this->last_nameStaff->TabIndex = 5;
			this->last_nameStaff->Text = L"Nom";
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
			this->deleteStaff->Click += gcnew System::EventHandler(this, &MyForm::deleteStaff_Click);
			// 
			// updateStaff
			// 
			this->updateStaff->Location = System::Drawing::Point(211, 14);
			this->updateStaff->Margin = System::Windows::Forms::Padding(2);
			this->updateStaff->Name = L"updateStaff";
			this->updateStaff->Size = System::Drawing::Size(159, 74);
			this->updateStaff->TabIndex = 2;
			this->updateStaff->Text = L"Mise ? jour du personnel";
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
			this->addStaff->Click += gcnew System::EventHandler(this, &MyForm::addStaff_Click);
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
			this->tabPage4->Controls->Add(this->printMoreOrders);
			this->tabPage4->Controls->Add(this->emailOrder);
			this->tabPage4->Controls->Add(this->phoneOrder);
			this->tabPage4->Controls->Add(this->is_enabledOrder);
			this->tabPage4->Controls->Add(this->emission_datetimeOrder);
			this->tabPage4->Controls->Add(this->payment_numberOrder);
			this->tabPage4->Controls->Add(this->total_amountOrder);
			this->tabPage4->Controls->Add(this->item_nameOrder);
			this->tabPage4->Controls->Add(this->delivery_datetimeOrder);
			this->tabPage4->Controls->Add(this->referenceOrder);
			this->tabPage4->Controls->Add(this->findOrder);
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
			// printMoreOrders
			// 
			this->printMoreOrders->AutoSize = true;
			this->printMoreOrders->Location = System::Drawing::Point(244, 460);
			this->printMoreOrders->Name = L"printMoreOrders";
			this->printMoreOrders->Size = System::Drawing::Size(127, 17);
			this->printMoreOrders->TabIndex = 17;
			this->printMoreOrders->Text = L"Affichage des articles";
			this->printMoreOrders->UseVisualStyleBackColor = true;
			// 
			// emailOrder
			// 
			this->emailOrder->Location = System::Drawing::Point(19, 320);
			this->emailOrder->Margin = System::Windows::Forms::Padding(2);
			this->emailOrder->Name = L"emailOrder";
			this->emailOrder->Size = System::Drawing::Size(352, 20);
			this->emailOrder->TabIndex = 16;
			this->emailOrder->Text = L"Email client";
			// 
			// phoneOrder
			// 
			this->phoneOrder->Location = System::Drawing::Point(19, 296);
			this->phoneOrder->Margin = System::Windows::Forms::Padding(2);
			this->phoneOrder->Name = L"phoneOrder";
			this->phoneOrder->Size = System::Drawing::Size(352, 20);
			this->phoneOrder->TabIndex = 15;
			this->phoneOrder->Text = L"T?l?phone client";
			// 
			// is_enabledOrder
			// 
			this->is_enabledOrder->AutoSize = true;
			this->is_enabledOrder->Location = System::Drawing::Point(18, 460);
			this->is_enabledOrder->Name = L"is_enabledOrder";
			this->is_enabledOrder->Size = System::Drawing::Size(56, 17);
			this->is_enabledOrder->TabIndex = 14;
			this->is_enabledOrder->Text = L"Active";
			this->is_enabledOrder->UseVisualStyleBackColor = true;
			// 
			// emission_datetimeOrder
			// 
			this->emission_datetimeOrder->Location = System::Drawing::Point(18, 368);
			this->emission_datetimeOrder->Margin = System::Windows::Forms::Padding(2);
			this->emission_datetimeOrder->Name = L"emission_datetimeOrder";
			this->emission_datetimeOrder->Size = System::Drawing::Size(352, 20);
			this->emission_datetimeOrder->TabIndex = 13;
			this->emission_datetimeOrder->Text = L"Date d\'emission";
			this->emission_datetimeOrder->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox34_TextChanged);
			// 
			// payment_numberOrder
			// 
			this->payment_numberOrder->Location = System::Drawing::Point(18, 389);
			this->payment_numberOrder->Margin = System::Windows::Forms::Padding(2);
			this->payment_numberOrder->Name = L"payment_numberOrder";
			this->payment_numberOrder->Size = System::Drawing::Size(352, 20);
			this->payment_numberOrder->TabIndex = 12;
			this->payment_numberOrder->Text = L"Nombre de paiements";
			this->payment_numberOrder->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox33_TextChanged);
			// 
			// total_amountOrder
			// 
			this->total_amountOrder->Location = System::Drawing::Point(18, 412);
			this->total_amountOrder->Margin = System::Windows::Forms::Padding(2);
			this->total_amountOrder->Name = L"total_amountOrder";
			this->total_amountOrder->Size = System::Drawing::Size(352, 20);
			this->total_amountOrder->TabIndex = 11;
			this->total_amountOrder->Text = L"Montant total";
			this->total_amountOrder->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox32_TextChanged);
			// 
			// item_nameOrder
			// 
			this->item_nameOrder->Location = System::Drawing::Point(18, 435);
			this->item_nameOrder->Margin = System::Windows::Forms::Padding(2);
			this->item_nameOrder->Name = L"item_nameOrder";
			this->item_nameOrder->Size = System::Drawing::Size(352, 20);
			this->item_nameOrder->TabIndex = 10;
			this->item_nameOrder->Text = L"Nom article";
			this->item_nameOrder->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox31_TextChanged);
			// 
			// delivery_datetimeOrder
			// 
			this->delivery_datetimeOrder->Location = System::Drawing::Point(18, 344);
			this->delivery_datetimeOrder->Margin = System::Windows::Forms::Padding(2);
			this->delivery_datetimeOrder->Name = L"delivery_datetimeOrder";
			this->delivery_datetimeOrder->Size = System::Drawing::Size(352, 20);
			this->delivery_datetimeOrder->TabIndex = 8;
			this->delivery_datetimeOrder->Text = L"Date de livraison";
			this->delivery_datetimeOrder->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox29_TextChanged);
			// 
			// referenceOrder
			// 
			this->referenceOrder->Location = System::Drawing::Point(19, 272);
			this->referenceOrder->Margin = System::Windows::Forms::Padding(2);
			this->referenceOrder->Name = L"referenceOrder";
			this->referenceOrder->Size = System::Drawing::Size(352, 20);
			this->referenceOrder->TabIndex = 7;
			this->referenceOrder->Text = L"R?f?rence commande";
			// 
			// findOrder
			// 
			this->findOrder->Location = System::Drawing::Point(211, 171);
			this->findOrder->Margin = System::Windows::Forms::Padding(2);
			this->findOrder->Name = L"findOrder";
			this->findOrder->Size = System::Drawing::Size(159, 74);
			this->findOrder->TabIndex = 6;
			this->findOrder->Text = L"Rechercher commande";
			this->findOrder->UseVisualStyleBackColor = true;
			this->findOrder->Click += gcnew System::EventHandler(this, &MyForm::findOrder_Click);
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
			this->printOrder->Click += gcnew System::EventHandler(this, &MyForm::printOrder_Click);
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
			this->deleteOrder->Click += gcnew System::EventHandler(this, &MyForm::deleteOrder_Click);
			// 
			// updateOrder
			// 
			this->updateOrder->Location = System::Drawing::Point(211, 14);
			this->updateOrder->Margin = System::Windows::Forms::Padding(2);
			this->updateOrder->Name = L"updateOrder";
			this->updateOrder->Size = System::Drawing::Size(159, 74);
			this->updateOrder->TabIndex = 2;
			this->updateOrder->Text = L"Mise ? jour de la commande";
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
			this->tabPage5->Controls->Add(this->totalAmountClientStats);
			this->tabPage5->Controls->Add(this->printBuyCostStats);
			this->tabPage5->Controls->Add(this->avgPanierStats);
			this->tabPage5->Controls->Add(this->yearStats);
			this->tabPage5->Controls->Add(this->label10);
			this->tabPage5->Controls->Add(this->simulateStats);
			this->tabPage5->Controls->Add(this->demarqueInconnueBox);
			this->tabPage5->Controls->Add(this->remiseCommercialeBox);
			this->tabPage5->Controls->Add(this->margeCommercialeBox);
			this->tabPage5->Controls->Add(this->label9);
			this->tabPage5->Controls->Add(this->TVABox);
			this->tabPage5->Controls->Add(this->printAlerteStock);
			this->tabPage5->Controls->Add(this->button9);
			this->tabPage5->Controls->Add(this->printTop10);
			this->tabPage5->Controls->Add(this->dataGridStats);
			this->tabPage5->Controls->Add(this->calculMonth);
			this->tabPage5->Controls->Add(this->monthStat);
			this->tabPage5->Controls->Add(this->label4);
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
			// totalAmountClientStats
			// 
			this->totalAmountClientStats->Location = System::Drawing::Point(245, 91);
			this->totalAmountClientStats->Margin = System::Windows::Forms::Padding(2);
			this->totalAmountClientStats->Name = L"totalAmountClientStats";
			this->totalAmountClientStats->Size = System::Drawing::Size(112, 44);
			this->totalAmountClientStats->TabIndex = 30;
			this->totalAmountClientStats->Text = L"Montant total d?penses client";
			this->totalAmountClientStats->UseVisualStyleBackColor = true;
			this->totalAmountClientStats->Click += gcnew System::EventHandler(this, &MyForm::totalAmountClientStats_Click);
			// 
			// printBuyCostStats
			// 
			this->printBuyCostStats->Location = System::Drawing::Point(129, 90);
			this->printBuyCostStats->Margin = System::Windows::Forms::Padding(2);
			this->printBuyCostStats->Name = L"printBuyCostStats";
			this->printBuyCostStats->Size = System::Drawing::Size(112, 45);
			this->printBuyCostStats->TabIndex = 29;
			this->printBuyCostStats->Text = L"Prix d\'achat du stock";
			this->printBuyCostStats->UseVisualStyleBackColor = true;
			this->printBuyCostStats->Click += gcnew System::EventHandler(this, &MyForm::printBuyCostStats_Click);
			// 
			// avgPanierStats
			// 
			this->avgPanierStats->Location = System::Drawing::Point(245, 55);
			this->avgPanierStats->Margin = System::Windows::Forms::Padding(2);
			this->avgPanierStats->Name = L"avgPanierStats";
			this->avgPanierStats->Size = System::Drawing::Size(112, 32);
			this->avgPanierStats->TabIndex = 28;
			this->avgPanierStats->Text = L"Calcul panier moyen";
			this->avgPanierStats->UseVisualStyleBackColor = true;
			this->avgPanierStats->Click += gcnew System::EventHandler(this, &MyForm::avgPanierStats_Click);
			// 
			// yearStats
			// 
			this->yearStats->Location = System::Drawing::Point(220, 201);
			this->yearStats->Margin = System::Windows::Forms::Padding(2);
			this->yearStats->Name = L"yearStats";
			this->yearStats->Size = System::Drawing::Size(57, 20);
			this->yearStats->TabIndex = 26;
			this->yearStats->Text = L"Ann?e";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(73, 174);
			this->label10->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(229, 13);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Calcul le chiffer d\'affaire sur un mois particulier :";
			// 
			// simulateStats
			// 
			this->simulateStats->Location = System::Drawing::Point(134, 389);
			this->simulateStats->Margin = System::Windows::Forms::Padding(2);
			this->simulateStats->Name = L"simulateStats";
			this->simulateStats->Size = System::Drawing::Size(112, 32);
			this->simulateStats->TabIndex = 24;
			this->simulateStats->Text = L"Simulation";
			this->simulateStats->UseVisualStyleBackColor = true;
			this->simulateStats->Click += gcnew System::EventHandler(this, &MyForm::simulateStats_Click);
			// 
			// demarqueInconnueBox
			// 
			this->demarqueInconnueBox->FormattingEnabled = true;
			this->demarqueInconnueBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"D?marque Inconnue 2%", L"D?marque Inconnue 3%",
					L"D?marque Inconnue 5%"
			});
			this->demarqueInconnueBox->Location = System::Drawing::Point(88, 364);
			this->demarqueInconnueBox->Margin = System::Windows::Forms::Padding(2);
			this->demarqueInconnueBox->Name = L"demarqueInconnueBox";
			this->demarqueInconnueBox->Size = System::Drawing::Size(199, 21);
			this->demarqueInconnueBox->TabIndex = 23;
			// 
			// remiseCommercialeBox
			// 
			this->remiseCommercialeBox->FormattingEnabled = true;
			this->remiseCommercialeBox->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Remise commerciale 3%", L"Remise commerciale 6%" });
			this->remiseCommercialeBox->Location = System::Drawing::Point(88, 341);
			this->remiseCommercialeBox->Margin = System::Windows::Forms::Padding(2);
			this->remiseCommercialeBox->Name = L"remiseCommercialeBox";
			this->remiseCommercialeBox->Size = System::Drawing::Size(198, 21);
			this->remiseCommercialeBox->TabIndex = 22;
			// 
			// margeCommercialeBox
			// 
			this->margeCommercialeBox->FormattingEnabled = true;
			this->margeCommercialeBox->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Marge commerciale 10%", L"Marge commerciale 15%",
					L"Marge commerciale 20%"
			});
			this->margeCommercialeBox->Location = System::Drawing::Point(88, 317);
			this->margeCommercialeBox->Margin = System::Windows::Forms::Padding(2);
			this->margeCommercialeBox->Name = L"margeCommercialeBox";
			this->margeCommercialeBox->Size = System::Drawing::Size(199, 21);
			this->margeCommercialeBox->TabIndex = 21;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(150, 267);
			this->label9->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(87, 18);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Simulation";
			// 
			// TVABox
			// 
			this->TVABox->FormattingEnabled = true;
			this->TVABox->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TVA 5%", L"TVA 10%", L"TVA 15%" });
			this->TVABox->Location = System::Drawing::Point(88, 293);
			this->TVABox->Margin = System::Windows::Forms::Padding(2);
			this->TVABox->Name = L"TVABox";
			this->TVABox->Size = System::Drawing::Size(200, 21);
			this->TVABox->TabIndex = 19;
			this->TVABox->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBox1_SelectedIndexChanged);
			// 
			// printAlerteStock
			// 
			this->printAlerteStock->Location = System::Drawing::Point(14, 91);
			this->printAlerteStock->Margin = System::Windows::Forms::Padding(2);
			this->printAlerteStock->Name = L"printAlerteStock";
			this->printAlerteStock->Size = System::Drawing::Size(112, 44);
			this->printAlerteStock->TabIndex = 18;
			this->printAlerteStock->Text = L"Afficher produit ? r?approvisionner";
			this->printAlerteStock->UseVisualStyleBackColor = true;
			this->printAlerteStock->Click += gcnew System::EventHandler(this, &MyForm::printAlerteStock_Click);
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(129, 54);
			this->button9->Margin = System::Windows::Forms::Padding(2);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(112, 32);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Afficher bot 10";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// printTop10
			// 
			this->printTop10->Location = System::Drawing::Point(14, 54);
			this->printTop10->Margin = System::Windows::Forms::Padding(2);
			this->printTop10->Name = L"printTop10";
			this->printTop10->Size = System::Drawing::Size(112, 32);
			this->printTop10->TabIndex = 16;
			this->printTop10->Text = L"Afficher top 10";
			this->printTop10->UseVisualStyleBackColor = true;
			this->printTop10->Click += gcnew System::EventHandler(this, &MyForm::printTop10_Click);
			// 
			// dataGridStats
			// 
			this->dataGridStats->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridStats->Location = System::Drawing::Point(386, 5);
			this->dataGridStats->Margin = System::Windows::Forms::Padding(2);
			this->dataGridStats->Name = L"dataGridStats";
			this->dataGridStats->RowHeadersWidth = 51;
			this->dataGridStats->RowTemplate->Height = 24;
			this->dataGridStats->Size = System::Drawing::Size(437, 484);
			this->dataGridStats->TabIndex = 15;
			this->dataGridStats->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridStats_CellContentClick);
			// 
			// calculMonth
			// 
			this->calculMonth->Location = System::Drawing::Point(134, 225);
			this->calculMonth->Margin = System::Windows::Forms::Padding(2);
			this->calculMonth->Name = L"calculMonth";
			this->calculMonth->Size = System::Drawing::Size(112, 32);
			this->calculMonth->TabIndex = 13;
			this->calculMonth->Text = L"Calcul";
			this->calculMonth->UseVisualStyleBackColor = true;
			this->calculMonth->Click += gcnew System::EventHandler(this, &MyForm::calculMonth_Click);
			// 
			// monthStat
			// 
			this->monthStat->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->monthStat->ForeColor = System::Drawing::SystemColors::WindowText;
			this->monthStat->Location = System::Drawing::Point(98, 201);
			this->monthStat->Margin = System::Windows::Forms::Padding(2);
			this->monthStat->Name = L"monthStat";
			this->monthStat->Size = System::Drawing::Size(114, 20);
			this->monthStat->TabIndex = 9;
			this->monthStat->Text = L"Mois";
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
	this->oSvcStaff = gcnew NS_Comp_Svc::CLservicesStaff();
	this->oSvcOrder = gcnew NS_Comp_Svc::CLservicesOrder();
	this->oSvcAddress = gcnew NS_Comp_Svc::CLservicesAddress();
	this->oSvcStats = gcnew NS_Comp_Svc::CLservicesStats();
}
private: System::Void addClient_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ type;
	if (this->addressCheck->Checked)
	{
		type = "1";
	}
	else {
		type = "0";
	}
	System::String^ birth;
	if (this->date_of_birthClient->Text == "Date de naissance")
	{
		birth = "2000-01-01";
	}
	this->oSvcClient->ajouterClient("Rsl", type, this->first_nameClient->Text, this->last_nameClient->Text, this->phoneClient->Text, this->emailClient->Text, this->date_of_birthClient->Text, this->numberClient->Text, this->street_nameClient->Text, this->zipcodeClient->Text, this->cityClient->Text, this->countryClient->Text, this->complementClient->Text);
}
private: System::Void deleteClient_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvcClient->retirerClient("Rsl", this->phoneClient->Text, this->emailClient->Text);
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
private: System::Void findClient_Click(System::Object^ sender, System::EventArgs^ e) {
	
	if (this->phoneClient->Text == "Num?ro de t?l?phone")
	{
		int phone = 0;
	}
	else
	{
		System::String^ phone = this->phoneClient->Text;
	}
	this->dataGridClient->Refresh();
	this->oDs = this->oSvcClient->rechercherClient("Rsl", this->first_nameClient->Text, this->last_nameClient->Text,  this->phoneClient->Text, this->emailClient->Text, this->date_of_birthClient->Text, this->numberClient->Text, this->street_nameClient->Text, this->zipcodeClient->Text, this->cityClient->Text, this->countryClient->Text);
	this->dataGridClient->DataSource = this->oDs;
	this->dataGridClient->DataMember = "Rsl";
}
private: System::Void printStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStock->Refresh();
	this->oDs = this->oSvcStock->selectionnerToutLesStocks("Rsl");
	this->dataGridStock->DataSource = this->oDs;
	this->dataGridStock->DataMember = "Rsl";
}
private: System::Void deleteStock_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvcStock->retirerStock("Rsl", this->idStocks->Text);
}	   
private: System::Void addStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->oSvcStock->ajouterStock("Rsl", this->nameStock->Text, this->HT_priceStock->Text, this->TVA_rateStock->Text, this->quantityStock->Text);
} 
private: System::Void deleteStaff_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvcStaff->retirerStaff("Rsl", this->phoneStaff->Text, this->emailStaff->Text);
}
private: System::Void addStaff_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ hiring;
	if (this->hiring_dateStaff->Text == "Date de recrutement")
	{
		hiring = "1900-01-01";
	}
	this->oSvcStaff->ajouterStaff("Rsl", this->first_nameStaff->Text, this->last_nameStaff->Text, this->phoneStaff->Text, this->emailStaff->Text, hiring, this->numberStaff->Text, this->street_nameStaff->Text, this->zip_codeStaff->Text, this->cityStaff->Text, this->countryStaff->Text, this->complementStaff->Text);
}
private: System::Void printStaff_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStaff->Refresh();
	this->oDs = this->oSvcStaff->selectionnerToutLesStaff("Rsl");
	this->dataGridStaff->DataSource = this->oDs;
	this->dataGridStaff->DataMember = "Rsl";
}
private: System::Void printOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ checked;
	if (this->printMoreOrders->Checked)
	{
		checked = "1";
	}
	else {
		checked = "0";
	}
	this->dataGridOrder->Refresh();
	this->oDs = this->oSvcOrder->selectionnerToutLesCommandes("Rsl", checked);
	this->dataGridOrder->DataSource = this->oDs;
	this->dataGridOrder->DataMember = "Rsl";
}
private: System::Void deleteOrder_Click(System::Object^ sender, System::EventArgs^ e) {

	this->oSvcOrder->supprimerCommande("Rsl", this->referenceOrder->Text);

}
private: System::Void findOrder_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ is_enabled;
	if (this->is_enabledOrder->Checked)
	{
		is_enabled = "1";
	}
	else {
		is_enabled = "0";
	}
	System::String^ delivery;
	if (this->delivery_datetimeOrder->Text == "Date de livraison")
	{
		delivery = "1900-01-01 12:00:00";
	}
	System::String^ emission;
	if (this->emission_datetimeOrder->Text == "Date d'emission")
	{
		emission = "1900-01-01 12:00:00";
	}
	System::String^ number;
	if (this->payment_numberOrder->Text == "Nombre de paiements")
	{
		number = "0";
	}
	System::String^ amount;
	if (this->total_amountOrder->Text == "Montant total")
	{
		amount = "0";
	}
	this->dataGridOrder->Refresh();
	this->oDs = this->oSvcOrder->rechercherCommande("Rsl", this->referenceOrder->Text, this->phoneOrder->Text, this->emailOrder->Text, delivery, emission, number, amount, this->item_nameOrder->Text, is_enabled);
	this->dataGridOrder->DataSource = this->oDs;
	this->dataGridOrder->DataMember = "Rsl";
}
private: System::Void printTop10_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->calculerTop10("Rsl");
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}
private: System::Void avgPanierStats_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->calculerPanierMoyen("Rsl");
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}
private: System::Void calculMonth_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->calculerChiffreAffaireMois("Rsl", this->monthStat->Text, this->yearStats->Text);
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}
private: System::Void printAlerteStock_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->calculerAlerteStock("Rsl");
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}
private: System::Void printBuyCostStats_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->calculerPrixAchat("Rsl");
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}
private: System::Void simulateStats_Click(System::Object^ sender, System::EventArgs^ e) {
	System::String^ tva = this->TVABox->Text;
	if (this->TVABox->Text == "TVA 5%")
	{
		tva = "5";
	}
	else if (this->TVABox->Text == "TVA 10%")
	{
		tva = "10";
	}
	else if (this->TVABox->Text == "TVA 15%")
	{
		tva = "15";
	}
	else
	{
		tva = "0";
	}
	System::String^ margeCommerciale;
	if (this->margeCommercialeBox->Text == "Marge commerciale 10%")
	{
		margeCommerciale = "10";
	}
	else if (this->margeCommercialeBox->Text == "Marge commerciale 15%")
	{
		margeCommerciale = "15";
	}
	else if (this->margeCommercialeBox->Text == "Marge commerciale 20%")
	{
		margeCommerciale = "20";
	}
	else
	{
		margeCommerciale = "0";
	}
	System::String^ remiseCommerciale;
	if (this->remiseCommercialeBox->Text == "Remise commerciale 3%")
	{
		remiseCommerciale = "3";
	}
	else if (this->remiseCommercialeBox->Text == "Remise commerciale 6%")
	{
		remiseCommerciale = "6";
	}
	else
	{
		remiseCommerciale = "0";
	}
	System::String^ demarqueInconnue;
	if (this->demarqueInconnueBox->Text == "D?marque Inconnue 2%")
	{
		demarqueInconnue = "2";
	}
	else if (this->demarqueInconnueBox->Text == "D?marque Inconnue 3%")
	{
		demarqueInconnue = "3";
	}
	else if (this->demarqueInconnueBox->Text == "D?marque Inconnue 5%")
	{
		demarqueInconnue = "5";
	}
	else
	{
		demarqueInconnue = "0";
	}
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->simulerPrix("Rsl", tva, margeCommerciale, remiseCommerciale, demarqueInconnue);
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}
private: System::Void totalAmountClientStats_Click(System::Object^ sender, System::EventArgs^ e) {
	this->dataGridStats->Refresh();
	this->oDs = this->oSvcStats->calculerTotalAmountClient("Rsl");
	this->dataGridStats->DataSource = this->oDs;
	this->dataGridStats->DataMember = "Rsl";
}	   
private: System::Void textBox35_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void dataGridStock_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void checkBox1_CheckedChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox29_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox33_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox32_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox31_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox30_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox34_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}


private: System::Void dataGridStats_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
};
}
