#pragma once

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
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::TabPage^ tabPage3;
	private: System::Windows::Forms::TabPage^ tabPage4;
	private: System::Windows::Forms::TabPage^ tabPage5;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Nom;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button4;
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
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::DataGridView^ dataGridView2;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ textBox14;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Button^ button11;
	private: System::Windows::Forms::ComboBox^ comboBox4;
	private: System::Windows::Forms::ComboBox^ comboBox3;
	private: System::Windows::Forms::ComboBox^ comboBox2;



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
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Nom = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage3 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage4 = (gcnew System::Windows::Forms::TabPage());
			this->tabPage5 = (gcnew System::Windows::Forms::TabPage());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
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
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox3 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox4 = (gcnew System::Windows::Forms::ComboBox());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->textBox14 = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->Tabcontrol->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->tabPage5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
			this->SuspendLayout();
			// 
			// Tabcontrol
			// 
			this->Tabcontrol->Controls->Add(this->tabPage1);
			this->Tabcontrol->Controls->Add(this->tabPage2);
			this->Tabcontrol->Controls->Add(this->tabPage3);
			this->Tabcontrol->Controls->Add(this->tabPage4);
			this->Tabcontrol->Controls->Add(this->tabPage5);
			this->Tabcontrol->Location = System::Drawing::Point(12, 12);
			this->Tabcontrol->Name = L"Tabcontrol";
			this->Tabcontrol->SelectedIndex = 0;
			this->Tabcontrol->Size = System::Drawing::Size(1112, 637);
			this->Tabcontrol->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->textBox9);
			this->tabPage1->Controls->Add(this->textBox8);
			this->tabPage1->Controls->Add(this->textBox7);
			this->tabPage1->Controls->Add(this->textBox6);
			this->tabPage1->Controls->Add(this->textBox5);
			this->tabPage1->Controls->Add(this->textBox4);
			this->tabPage1->Controls->Add(this->textBox3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->dataGridView1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(1104, 608);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Clients";
			this->tabPage1->UseVisualStyleBackColor = true;
			this->tabPage1->Click += gcnew System::EventHandler(this, &MyForm::tabPage1_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(281, 114);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(212, 91);
			this->button4->TabIndex = 13;
			this->button4->Text = L"Sélectionner";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(25, 448);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(469, 22);
			this->textBox9->TabIndex = 12;
			this->textBox9->Text = L"Numéro de téléphone";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(25, 420);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(468, 22);
			this->textBox8->TabIndex = 11;
			this->textBox8->Text = L"Adresse Mail";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(25, 392);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(468, 22);
			this->textBox7->TabIndex = 10;
			this->textBox7->Text = L"Pays";
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(25, 336);
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(88, 22);
			this->textBox6->TabIndex = 9;
			this->textBox6->Text = L"Numéro";
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(374, 364);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(119, 22);
			this->textBox5->TabIndex = 8;
			this->textBox5->Text = L"Code Postal";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(25, 364);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(343, 22);
			this->textBox4->TabIndex = 7;
			this->textBox4->Text = L"Ville";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(119, 336);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(374, 22);
			this->textBox3->TabIndex = 6;
			this->textBox3->Tag = L"";
			this->textBox3->Text = L"Adresse";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(25, 308);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(468, 22);
			this->textBox2->TabIndex = 5;
			this->textBox2->Text = L"Prénom";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(25, 280);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(468, 22);
			this->textBox1->TabIndex = 4;
			this->textBox1->Text = L"Nom";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(281, 17);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 91);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Mise à jour du client";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 114);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 91);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Supprimer client";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(25, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 91);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Ajouter client";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(1) { this->Nom });
			this->dataGridView1->Location = System::Drawing::Point(517, 6);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(581, 596);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MyForm::dataGridView1_CellContentClick);
			// 
			// Nom
			// 
			this->Nom->HeaderText = L"Column1";
			this->Nom->MinimumWidth = 6;
			this->Nom->Name = L"Nom";
			this->Nom->Width = 125;
			// 
			// tabPage2
			// 
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(1104, 608);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Personnels";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// tabPage3
			// 
			this->tabPage3->Location = System::Drawing::Point(4, 25);
			this->tabPage3->Name = L"tabPage3";
			this->tabPage3->Padding = System::Windows::Forms::Padding(3);
			this->tabPage3->Size = System::Drawing::Size(1104, 608);
			this->tabPage3->TabIndex = 2;
			this->tabPage3->Text = L"Stock";
			this->tabPage3->UseVisualStyleBackColor = true;
			// 
			// tabPage4
			// 
			this->tabPage4->Location = System::Drawing::Point(4, 25);
			this->tabPage4->Name = L"tabPage4";
			this->tabPage4->Padding = System::Windows::Forms::Padding(3);
			this->tabPage4->Size = System::Drawing::Size(1104, 608);
			this->tabPage4->TabIndex = 3;
			this->tabPage4->Text = L"Commandes";
			this->tabPage4->UseVisualStyleBackColor = true;
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
			this->tabPage5->Controls->Add(this->button8);
			this->tabPage5->Controls->Add(this->dataGridView2);
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
			this->tabPage5->Location = System::Drawing::Point(4, 25);
			this->tabPage5->Name = L"tabPage5";
			this->tabPage5->Padding = System::Windows::Forms::Padding(3);
			this->tabPage5->Size = System::Drawing::Size(1104, 608);
			this->tabPage5->TabIndex = 4;
			this->tabPage5->Text = L"Statistiques";
			this->tabPage5->UseVisualStyleBackColor = true;
			this->tabPage5->Click += gcnew System::EventHandler(this, &MyForm::tabPage5_Click);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label9->Location = System::Drawing::Point(331, 171);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(103, 22);
			this->label9->TabIndex = 20;
			this->label9->Text = L"Simulation";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"TVA 5%", L"TVA 10%", L"TVA 15%" });
			this->comboBox1->Location = System::Drawing::Point(335, 209);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(265, 24);
			this->comboBox1->TabIndex = 19;
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(388, 114);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(150, 40);
			this->button10->TabIndex = 18;
			this->button10->Text = L"Afficher produit à réapprovisionner";
			this->button10->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(388, 64);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(150, 40);
			this->button9->TabIndex = 17;
			this->button9->Text = L"Afficher bot 10";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(388, 18);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(150, 40);
			this->button8->TabIndex = 16;
			this->button8->Text = L"Afficher top 10";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// dataGridView2
			// 
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(615, 6);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->RowHeadersWidth = 51;
			this->dataGridView2->RowTemplate->Height = 24;
			this->dataGridView2->Size = System::Drawing::Size(483, 596);
			this->dataGridView2->TabIndex = 15;
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(51, 547);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(150, 40);
			this->button7->TabIndex = 14;
			this->button7->Text = L"Calcul";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(72, 379);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(150, 40);
			this->button6->TabIndex = 13;
			this->button6->Text = L"Calcul";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// textBox13
			// 
			this->textBox13->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox13->Location = System::Drawing::Point(18, 519);
			this->textBox13->Name = L"textBox13";
			this->textBox13->Size = System::Drawing::Size(238, 22);
			this->textBox13->TabIndex = 12;
			this->textBox13->Text = L"Téléphone";
			// 
			// textBox12
			// 
			this->textBox12->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox12->Location = System::Drawing::Point(18, 491);
			this->textBox12->Name = L"textBox12";
			this->textBox12->Size = System::Drawing::Size(238, 22);
			this->textBox12->TabIndex = 11;
			this->textBox12->Text = L"Prénom";
			// 
			// textBox11
			// 
			this->textBox11->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox11->Location = System::Drawing::Point(18, 463);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(238, 22);
			this->textBox11->TabIndex = 10;
			this->textBox11->Text = L"Nom";
			// 
			// textBox10
			// 
			this->textBox10->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox10->ForeColor = System::Drawing::SystemColors::WindowText;
			this->textBox10->Location = System::Drawing::Point(18, 351);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(152, 22);
			this->textBox10->TabIndex = 9;
			this->textBox10->Text = L"Mois";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(51, 209);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(150, 40);
			this->button5->TabIndex = 8;
			this->button5->Text = L"Calcul";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 176);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 16);
			this->label8->TabIndex = 7;
			this->label8->Text = L"Résultat";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->Location = System::Drawing::Point(15, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(155, 16);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Valeur d\'achat du stock : ";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->Location = System::Drawing::Point(15, 106);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(186, 16);
			this->label6->TabIndex = 5;
			this->label6->Text = L"Valeur commerciale du stock :";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 126);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(53, 16);
			this->label5->TabIndex = 4;
			this->label5->Text = L"Résulat";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(15, 106);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(0, 16);
			this->label4->TabIndex = 3;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 76);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(56, 16);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Résultat";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(15, 56);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(178, 16);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Panier moyen après remise :";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(15, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(220, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Statistiques génériques";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// comboBox2
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Marge commerciale 10%", L"Marge commerciale 15%",
					L"Marge commerciale 20%"
			});
			this->comboBox2->Location = System::Drawing::Point(336, 239);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(264, 24);
			this->comboBox2->TabIndex = 21;
			// 
			// comboBox3
			// 
			this->comboBox3->FormattingEnabled = true;
			this->comboBox3->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Remise commerciale 3%", L"Remise commerciale 6%" });
			this->comboBox3->Location = System::Drawing::Point(336, 269);
			this->comboBox3->Name = L"comboBox3";
			this->comboBox3->Size = System::Drawing::Size(263, 24);
			this->comboBox3->TabIndex = 22;
			// 
			// comboBox4
			// 
			this->comboBox4->FormattingEnabled = true;
			this->comboBox4->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"Démarque Inconnue 2%", L"Démarque Inconnue 3%",
					L"Démarque Inconnue 5%"
			});
			this->comboBox4->Location = System::Drawing::Point(335, 299);
			this->comboBox4->Name = L"comboBox4";
			this->comboBox4->Size = System::Drawing::Size(264, 24);
			this->comboBox4->TabIndex = 23;
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(388, 333);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(150, 40);
			this->button11->TabIndex = 24;
			this->button11->Text = L"Simulation";
			this->button11->UseVisualStyleBackColor = true;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label10->Location = System::Drawing::Point(16, 331);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(284, 16);
			this->label10->TabIndex = 25;
			this->label10->Text = L"Calcul le chiffer d\'affaire sur un mois particulier :";
			// 
			// textBox14
			// 
			this->textBox14->Location = System::Drawing::Point(181, 351);
			this->textBox14->Name = L"textBox14";
			this->textBox14->Size = System::Drawing::Size(75, 22);
			this->textBox14->TabIndex = 26;
			this->textBox14->Text = L"Année";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 7.8F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->Location = System::Drawing::Point(16, 442);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(207, 16);
			this->label11->TabIndex = 27;
			this->label11->Text = L"Calculer le panier total d\'un client :";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoSize = true;
			this->ClientSize = System::Drawing::Size(1136, 661);
			this->Controls->Add(this->Tabcontrol);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"iTech";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->Tabcontrol->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->tabPage5->ResumeLayout(false);
			this->tabPage5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);

		}

private: System::Void tabPage1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
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
};
}
