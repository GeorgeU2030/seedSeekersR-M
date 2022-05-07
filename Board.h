#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

extern std::string idRick;
extern std::string idMorty;
extern int amountSeeds;
extern int amountPortals;
extern int valueportals[];
namespace seedSeekers {
	
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	//vector<int>squares;
	//vector<int>seeds;
	/// <summary>
	/// Resumen de Board
	/// </summary>
	public ref class Board : public System::Windows::Forms::Form
	{
	public:
		Board(void)
		{
			vector<int>squares;
			vector<int>seeds;
			InitializeComponent();
			this->CenterToScreen();
			this->idRick_label->Text = toSystemString(idRick);
			this->idMorty_label->Text = toSystemString(idMorty);
			//vector<int>squares;
			//vector<int>seeds;
			for (int i = 1; i < 17; i++) squares.push_back(i);
			for (int i = 1; i < 17; i++) seeds.push_back(i);
			random_shuffle(squares.begin(), squares.end());
			random_shuffle(seeds.begin(), seeds.end());
			//squares[0];
			//this->b1->BackColor = Color::Green;
			for (int i = 0; i < amountPortals*2; i++) {
				//squares[i];
				valueportals[i] = squares[i];
				int num = stoi(toStandardString(this->b1->Text));
				if (num == squares[i]) {
					this->b1->BackColor = Color::YellowGreen;
					
				}
				num = stoi(toStandardString(this->b2->Text));
				if (num == squares[i]) {
					this->b2->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b3->Text));
				if (num == squares[i]) {
					this->b3->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b4->Text));
				if (num == squares[i]) {
					this->b4->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b5->Text));
				if (num == squares[i]) {
					this->b5->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b6->Text));
				if (num == squares[i]) {
					this->b6->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b7->Text));
				if (num == squares[i]) {
					this->b7->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b8->Text));
				if (num == squares[i]) {
					this->b8->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b9->Text));
				if (num == squares[i]) {
					this->b9->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b10->Text));
				if (num == squares[i]) {
					this->b10->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b11->Text));
				if (num == squares[i]) {
					this->b11->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b12->Text));
				if (num == squares[i]) {
					this->b12->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b13->Text));
				if (num == squares[i]) {
					this->b13->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b14->Text));
				if (num == squares[i]) {
					this->b14->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b15->Text));
				if (num == squares[i]) {
					this->b15->BackColor = Color::YellowGreen;
				}
				num = stoi(toStandardString(this->b16->Text));
				if (num == squares[i]) {
					this->b16->BackColor = Color::YellowGreen;
				}

			}
			int boolean[17];
			for (int j = 0; j < amountSeeds; j++) {
				if (seeds[j] == 1) {
					boolean[1] = 1;
				}
				if (seeds[j] == 2) {
					boolean[2] = 1;
				}
				if (seeds[j] == 3) {
					boolean[3] = 1;
				}
				if (seeds[j] == 4) {
					boolean[4] = 1;
				}
				if (seeds[j] == 5) {
					boolean[5] = 1;
				}
				if (seeds[j] == 6) {
					boolean[6] = 1;
				}
				if (seeds[j] == 7) {
					boolean[7] = 1;
				}
				if (seeds[j] == 8) {
					boolean[8] = 1;
				}
				if (seeds[j] == 9) {
					boolean[9] = 1;
				}
				if (seeds[j] == 10) {
					boolean[10] = 1;
				}
				if (seeds[j] == 11) {
					boolean[11] = 1;
				}
				if (seeds[j] == 12) {
					boolean[12] = 1;
				}
				if (seeds[j] == 13) {
					boolean[13] = 1;
				}
				if (seeds[j] == 14) {
					boolean[14] = 1;
				}
				if (seeds[j] == 15) {
					boolean[15] = 1;
				}
				if (seeds[j] == 16) {
					boolean[16] = 1;
				}
			}
			int posRick = seeds[amountSeeds];
			int posMorty = seeds[amountSeeds + 1];
			for (int j = 0; j < 1; j++) {
				if (posRick == 1) {
					boolean[1] = 2;
				}
				else if(posMorty==1) {
					boolean[1] = 3;
				}
				if (posRick == 2) {
					boolean[2] = 2;
				}
				else if (posMorty == 2) {
					boolean[2] = 3;
				}
				if (posRick == 3) {
					boolean[3] = 2;
				}
				else if (posMorty == 3) {
					boolean[3] = 3;
				}
				if (posRick == 4) {
					boolean[4] = 2;
				}
				else if (posMorty == 4) {
					boolean[4] = 3;
				}
				if (posRick == 5) {
					boolean[5] = 2;
				}
				else if (posMorty == 5) {
					boolean[5] = 3;
				}
				if (posRick == 6) {
					boolean[6] = 2;
				}
				else if (posMorty == 6) {
					boolean[6] = 3;
				}
				if (posRick == 7) {
					boolean[7] = 2;
				}
				else if (posMorty == 7) {
					boolean[7] = 3;
				}
				if (posRick == 8) {
					boolean[8] = 2;
				}
				else if (posMorty == 8) {
					boolean[8] = 3;
				}
				if (posRick == 9) {
					boolean[9] = 2;
				}
				else if (posMorty == 9) {
					boolean[9] = 3;
				}
				if (posRick == 10) {
					boolean[10] = 2;
				}
				else if (posMorty == 10) {
					boolean[10] = 3;
				}
				if (posRick == 11) {
					boolean[11] = 2;
				}
				else if (posMorty == 11) {
					boolean[11] = 3;
				}
				if (posRick == 12) {
					boolean[12] = 2;
				}
				else if (posMorty == 12) {
					boolean[12] = 3;
				}
				if (posRick == 13) {
					boolean[13] = 2;
				}
				else if (posMorty == 13) {
					boolean[13] = 3;
				}
				if (posRick == 14) {
					boolean[14] = 2;
				}
				else if (posMorty == 14) {
					boolean[14] = 3;
				}
				if (posRick == 15) {
					boolean[15] = 2;
				}
				else if (posMorty == 15) {
					boolean[15] = 3;
				}
				if (posRick == 16) {
					boolean[16] = 2;
				}
				else if (posMorty == 16) {
					boolean[16] = 3;
				}
			}

			for (int j = 0; j < 1; j++) {
				
			    

				if (boolean[1]==1) {
					this->b1->Text = toSystemString("*");
				}
				else if (boolean[1] == 2) {
					this->b1->Text = toSystemString("R");
				}
				else if (boolean[1] == 3) {
					this->b1->Text = toSystemString("M");
				}
				if (boolean[2] == 1) {
					this->b2->Text = toSystemString("*");
				}
				else if (boolean[2] == 2) {
					this->b2->Text = toSystemString("R");
				}
				else if (boolean[2] == 3) {
					this->b2->Text = toSystemString("M");
				}
				if (boolean[3] == 1) {
					this->b3->Text = toSystemString("*");
				}
				else if (boolean[3] == 2) {
					this->b3->Text = toSystemString("R");
				}
				else if (boolean[3] == 3) {
					this->b3->Text = toSystemString("M");
				}
				if (boolean[4] == 1) {
					this->b4->Text = toSystemString("*");
				}
				else if (boolean[4] == 2) {
					this->b4->Text = toSystemString("R");
				}
				else if (boolean[4] == 3) {
					this->b4->Text = toSystemString("M");
				}
				if (boolean[5] == 1) {
					this->b5->Text = toSystemString("*");
				}
				else if (boolean[5] == 2) {
					this->b5->Text = toSystemString("R");
				}
				else if (boolean[5] == 3) {
					this->b5->Text = toSystemString("M");
				}
				if (boolean[6] == 1) {
					this->b6->Text = toSystemString("*");
				}
				else if (boolean[6] == 2) {
					this->b6->Text = toSystemString("R");
				}
				else if (boolean[6] == 3) {
					this->b6->Text = toSystemString("M");
				}
				if (boolean[7] == 1) {
					this->b7->Text = toSystemString("*");
				}
				else if (boolean[7] == 2) {
					this->b7->Text = toSystemString("R");
				}
				else if (boolean[7] == 3) {
					this->b7->Text = toSystemString("M");
				}
				if (boolean[8] == 1) {
					this->b8->Text = toSystemString("*");
				}
				else if (boolean[8] == 2) {
					this->b8->Text = toSystemString("R");
				}
				else if (boolean[8] == 3) {
					this->b8->Text = toSystemString("M");
				}
				if (boolean[9] == 1) {
					this->b9->Text = toSystemString("*");
				}
				else if (boolean[9] == 2) {
					this->b9->Text = toSystemString("R");
				}
				else if (boolean[9] == 3) {
					this->b9->Text = toSystemString("M");
				}
				if (boolean[10] == 1) {
					this->b10->Text = toSystemString("*");
				}
				else if (boolean[10] == 2) {
					this->b10->Text = toSystemString("R");
				}
				else if (boolean[1] == 3) {
					this->b10->Text = toSystemString("M");
				}
				if (boolean[11] == 1) {
					this->b11->Text = toSystemString("*");
				}
				else if (boolean[11] == 2) {
					this->b11->Text = toSystemString("R");
				}
				else if (boolean[11] == 3) {
					this->b11->Text = toSystemString("M");
				}
				if (boolean[12] == 1) {
					this->b12->Text = toSystemString("*");
				}
				else if (boolean[12] == 2) {
					this->b12->Text = toSystemString("R");
				}
				else if (boolean[12] == 3) {
					this->b12->Text = toSystemString("M");
				}
				if (boolean[13] == 1) {
					this->b13->Text = toSystemString("*");
				}
				else if (boolean[13] == 2) {
					this->b13->Text = toSystemString("R");
				}
				else if (boolean[13] == 3) {
					this->b13->Text = toSystemString("M");
				}
				if (boolean[14] == 1) {
					this->b14->Text = toSystemString("*");
				}
				else if (boolean[14] == 2) {
					this->b14->Text = toSystemString("R");
				}
				else if (boolean[14] == 3) {
					this->b14->Text = toSystemString("M");
				}
				if (boolean[15] == 1) {
					this->b15->Text = toSystemString("*");
				}
				else if (boolean[15] == 2) {
					this->b15->Text = toSystemString("R");
				}
				else if (boolean[15] == 3) {
					this->b15->Text = toSystemString("M");
				}
				if (boolean[16] == 1) {
					this->b16->Text = toSystemString("*");
				}
				else if (boolean[16] == 2) {
					this->b16->Text = toSystemString("R");
				}
				else if (boolean[16] == 3) {
					this->b16->Text = toSystemString("M");
				}
				
			}

			//for (vector<int>::iterator it = seeds.begin(); it != seeds.end(); ++it)
			//cout << " " << *it;
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~Board()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	protected:
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ idRick_label;
	private: System::Windows::Forms::Label^ idMorty_label;
	private: System::Windows::Forms::Button^ b1;
	private: System::Windows::Forms::Button^ b2;
	private: System::Windows::Forms::Button^ b3;
	private: System::Windows::Forms::Button^ b4;
	private: System::Windows::Forms::Button^ b5;
	private: System::Windows::Forms::Button^ b6;
	private: System::Windows::Forms::Button^ b7;
	private: System::Windows::Forms::Button^ b8;
	private: System::Windows::Forms::Button^ b9;
	private: System::Windows::Forms::Button^ b10;
	private: System::Windows::Forms::Button^ b11;
	private: System::Windows::Forms::Button^ b12;
	private: System::Windows::Forms::Button^ b13;
	private: System::Windows::Forms::Button^ b14;
	private: System::Windows::Forms::Button^ b15;
	private: System::Windows::Forms::Button^ b16;
	private: System::Windows::Forms::PictureBox^ diceMorty;
	private: System::Windows::Forms::PictureBox^ diceRick;
	private: System::Windows::Forms::Button^ throwMorty;
	private: System::Windows::Forms::Button^ throwRick;
	private: System::Windows::Forms::Button^ advanceMorty;
	private: System::Windows::Forms::Button^ advanceRick;
	private: System::Windows::Forms::Button^ backMorty;
	private: System::Windows::Forms::Button^ backRick;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ seedRick;
	private: System::Windows::Forms::Label^ seedMorty;
private: System::Windows::Forms::Button^ portals_btn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Board::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->idRick_label = (gcnew System::Windows::Forms::Label());
			this->idMorty_label = (gcnew System::Windows::Forms::Label());
			this->b1 = (gcnew System::Windows::Forms::Button());
			this->b2 = (gcnew System::Windows::Forms::Button());
			this->b3 = (gcnew System::Windows::Forms::Button());
			this->b4 = (gcnew System::Windows::Forms::Button());
			this->b5 = (gcnew System::Windows::Forms::Button());
			this->b6 = (gcnew System::Windows::Forms::Button());
			this->b7 = (gcnew System::Windows::Forms::Button());
			this->b8 = (gcnew System::Windows::Forms::Button());
			this->b9 = (gcnew System::Windows::Forms::Button());
			this->b10 = (gcnew System::Windows::Forms::Button());
			this->b11 = (gcnew System::Windows::Forms::Button());
			this->b12 = (gcnew System::Windows::Forms::Button());
			this->b13 = (gcnew System::Windows::Forms::Button());
			this->b14 = (gcnew System::Windows::Forms::Button());
			this->b15 = (gcnew System::Windows::Forms::Button());
			this->b16 = (gcnew System::Windows::Forms::Button());
			this->diceMorty = (gcnew System::Windows::Forms::PictureBox());
			this->diceRick = (gcnew System::Windows::Forms::PictureBox());
			this->throwMorty = (gcnew System::Windows::Forms::Button());
			this->throwRick = (gcnew System::Windows::Forms::Button());
			this->advanceMorty = (gcnew System::Windows::Forms::Button());
			this->advanceRick = (gcnew System::Windows::Forms::Button());
			this->backMorty = (gcnew System::Windows::Forms::Button());
			this->backRick = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->seedRick = (gcnew System::Windows::Forms::Label());
			this->seedMorty = (gcnew System::Windows::Forms::Label());
			this->portals_btn = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diceMorty))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diceRick))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(12, 41);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(77, 83);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(400, 45);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(71, 74);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// idRick_label
			// 
			this->idRick_label->AutoSize = true;
			this->idRick_label->Location = System::Drawing::Point(36, 131);
			this->idRick_label->Name = L"idRick_label";
			this->idRick_label->Size = System::Drawing::Size(35, 13);
			this->idRick_label->TabIndex = 2;
			this->idRick_label->Text = L"label1";
			// 
			// idMorty_label
			// 
			this->idMorty_label->AutoSize = true;
			this->idMorty_label->Location = System::Drawing::Point(416, 131);
			this->idMorty_label->Name = L"idMorty_label";
			this->idMorty_label->Size = System::Drawing::Size(35, 13);
			this->idMorty_label->TabIndex = 3;
			this->idMorty_label->Text = L"label2";
			// 
			// b1
			// 
			this->b1->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b1->ForeColor = System::Drawing::SystemColors::Control;
			this->b1->Location = System::Drawing::Point(132, 12);
			this->b1->Name = L"b1";
			this->b1->Size = System::Drawing::Size(50, 47);
			this->b1->TabIndex = 4;
			this->b1->Text = L"1";
			this->b1->UseVisualStyleBackColor = false;
			// 
			// b2
			// 
			this->b2->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b2->ForeColor = System::Drawing::SystemColors::Control;
			this->b2->Location = System::Drawing::Point(188, 12);
			this->b2->Name = L"b2";
			this->b2->Size = System::Drawing::Size(50, 47);
			this->b2->TabIndex = 5;
			this->b2->Text = L"2";
			this->b2->UseVisualStyleBackColor = false;
			// 
			// b3
			// 
			this->b3->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b3->ForeColor = System::Drawing::SystemColors::Control;
			this->b3->Location = System::Drawing::Point(244, 12);
			this->b3->Name = L"b3";
			this->b3->Size = System::Drawing::Size(50, 47);
			this->b3->TabIndex = 6;
			this->b3->Text = L"3";
			this->b3->UseVisualStyleBackColor = false;
			// 
			// b4
			// 
			this->b4->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b4->ForeColor = System::Drawing::SystemColors::Control;
			this->b4->Location = System::Drawing::Point(300, 12);
			this->b4->Name = L"b4";
			this->b4->Size = System::Drawing::Size(50, 47);
			this->b4->TabIndex = 7;
			this->b4->Text = L"4";
			this->b4->UseVisualStyleBackColor = false;
			// 
			// b5
			// 
			this->b5->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b5->ForeColor = System::Drawing::SystemColors::Control;
			this->b5->Location = System::Drawing::Point(132, 65);
			this->b5->Name = L"b5";
			this->b5->Size = System::Drawing::Size(50, 47);
			this->b5->TabIndex = 8;
			this->b5->Text = L"5";
			this->b5->UseVisualStyleBackColor = false;
			// 
			// b6
			// 
			this->b6->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b6->ForeColor = System::Drawing::SystemColors::Control;
			this->b6->Location = System::Drawing::Point(188, 65);
			this->b6->Name = L"b6";
			this->b6->Size = System::Drawing::Size(50, 47);
			this->b6->TabIndex = 9;
			this->b6->Text = L"6";
			this->b6->UseVisualStyleBackColor = false;
			// 
			// b7
			// 
			this->b7->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b7->ForeColor = System::Drawing::SystemColors::Control;
			this->b7->Location = System::Drawing::Point(244, 65);
			this->b7->Name = L"b7";
			this->b7->Size = System::Drawing::Size(50, 47);
			this->b7->TabIndex = 10;
			this->b7->Text = L"7";
			this->b7->UseVisualStyleBackColor = false;
			// 
			// b8
			// 
			this->b8->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b8->ForeColor = System::Drawing::SystemColors::Control;
			this->b8->Location = System::Drawing::Point(300, 65);
			this->b8->Name = L"b8";
			this->b8->Size = System::Drawing::Size(50, 47);
			this->b8->TabIndex = 11;
			this->b8->Text = L"8";
			this->b8->UseVisualStyleBackColor = false;
			// 
			// b9
			// 
			this->b9->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b9->ForeColor = System::Drawing::SystemColors::Control;
			this->b9->Location = System::Drawing::Point(132, 118);
			this->b9->Name = L"b9";
			this->b9->Size = System::Drawing::Size(50, 47);
			this->b9->TabIndex = 12;
			this->b9->Text = L"9";
			this->b9->UseVisualStyleBackColor = false;
			// 
			// b10
			// 
			this->b10->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b10->ForeColor = System::Drawing::SystemColors::Control;
			this->b10->Location = System::Drawing::Point(188, 118);
			this->b10->Name = L"b10";
			this->b10->Size = System::Drawing::Size(50, 47);
			this->b10->TabIndex = 13;
			this->b10->Text = L"10";
			this->b10->UseVisualStyleBackColor = false;
			// 
			// b11
			// 
			this->b11->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b11->ForeColor = System::Drawing::SystemColors::Control;
			this->b11->Location = System::Drawing::Point(244, 118);
			this->b11->Name = L"b11";
			this->b11->Size = System::Drawing::Size(50, 47);
			this->b11->TabIndex = 14;
			this->b11->Text = L"11";
			this->b11->UseVisualStyleBackColor = false;
			// 
			// b12
			// 
			this->b12->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b12->ForeColor = System::Drawing::SystemColors::Control;
			this->b12->Location = System::Drawing::Point(300, 118);
			this->b12->Name = L"b12";
			this->b12->Size = System::Drawing::Size(50, 47);
			this->b12->TabIndex = 15;
			this->b12->Text = L"12";
			this->b12->UseVisualStyleBackColor = false;
			// 
			// b13
			// 
			this->b13->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b13->ForeColor = System::Drawing::SystemColors::Control;
			this->b13->Location = System::Drawing::Point(132, 171);
			this->b13->Name = L"b13";
			this->b13->Size = System::Drawing::Size(50, 47);
			this->b13->TabIndex = 16;
			this->b13->Text = L"13";
			this->b13->UseVisualStyleBackColor = false;
			// 
			// b14
			// 
			this->b14->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b14->ForeColor = System::Drawing::SystemColors::Control;
			this->b14->Location = System::Drawing::Point(188, 171);
			this->b14->Name = L"b14";
			this->b14->Size = System::Drawing::Size(50, 47);
			this->b14->TabIndex = 17;
			this->b14->Text = L"14";
			this->b14->UseVisualStyleBackColor = false;
			// 
			// b15
			// 
			this->b15->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b15->ForeColor = System::Drawing::SystemColors::Control;
			this->b15->Location = System::Drawing::Point(244, 171);
			this->b15->Name = L"b15";
			this->b15->Size = System::Drawing::Size(50, 47);
			this->b15->TabIndex = 18;
			this->b15->Text = L"15";
			this->b15->UseVisualStyleBackColor = false;
			// 
			// b16
			// 
			this->b16->BackColor = System::Drawing::SystemColors::HotTrack;
			this->b16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b16->ForeColor = System::Drawing::SystemColors::Control;
			this->b16->Location = System::Drawing::Point(300, 171);
			this->b16->Name = L"b16";
			this->b16->Size = System::Drawing::Size(50, 47);
			this->b16->TabIndex = 19;
			this->b16->Text = L"16";
			this->b16->UseVisualStyleBackColor = false;
			// 
			// diceMorty
			// 
			this->diceMorty->Location = System::Drawing::Point(409, 183);
			this->diceMorty->Name = L"diceMorty";
			this->diceMorty->Size = System::Drawing::Size(52, 50);
			this->diceMorty->TabIndex = 20;
			this->diceMorty->TabStop = false;
			// 
			// diceRick
			// 
			this->diceRick->Location = System::Drawing::Point(26, 183);
			this->diceRick->Name = L"diceRick";
			this->diceRick->Size = System::Drawing::Size(52, 50);
			this->diceRick->TabIndex = 21;
			this->diceRick->TabStop = false;
			// 
			// throwMorty
			// 
			this->throwMorty->BackColor = System::Drawing::SystemColors::HotTrack;
			this->throwMorty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->throwMorty->ForeColor = System::Drawing::SystemColors::Control;
			this->throwMorty->Location = System::Drawing::Point(396, 248);
			this->throwMorty->Name = L"throwMorty";
			this->throwMorty->Size = System::Drawing::Size(81, 31);
			this->throwMorty->TabIndex = 22;
			this->throwMorty->Text = L"THROW";
			this->throwMorty->UseVisualStyleBackColor = false;
			// 
			// throwRick
			// 
			this->throwRick->BackColor = System::Drawing::SystemColors::HotTrack;
			this->throwRick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->throwRick->ForeColor = System::Drawing::SystemColors::Control;
			this->throwRick->Location = System::Drawing::Point(12, 246);
			this->throwRick->Name = L"throwRick";
			this->throwRick->Size = System::Drawing::Size(81, 31);
			this->throwRick->TabIndex = 23;
			this->throwRick->Text = L"THROW";
			this->throwRick->UseVisualStyleBackColor = false;
			// 
			// advanceMorty
			// 
			this->advanceMorty->BackColor = System::Drawing::Color::PaleGreen;
			this->advanceMorty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->advanceMorty->Location = System::Drawing::Point(396, 281);
			this->advanceMorty->Name = L"advanceMorty";
			this->advanceMorty->Size = System::Drawing::Size(75, 23);
			this->advanceMorty->TabIndex = 24;
			this->advanceMorty->Text = L"ADVANCE";
			this->advanceMorty->UseVisualStyleBackColor = false;
			// 
			// advanceRick
			// 
			this->advanceRick->BackColor = System::Drawing::Color::PaleGreen;
			this->advanceRick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->advanceRick->Location = System::Drawing::Point(15, 279);
			this->advanceRick->Name = L"advanceRick";
			this->advanceRick->Size = System::Drawing::Size(75, 23);
			this->advanceRick->TabIndex = 25;
			this->advanceRick->Text = L"ADVANCE";
			this->advanceRick->UseVisualStyleBackColor = false;
			// 
			// backMorty
			// 
			this->backMorty->BackColor = System::Drawing::Color::Khaki;
			this->backMorty->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backMorty->Location = System::Drawing::Point(396, 307);
			this->backMorty->Name = L"backMorty";
			this->backMorty->Size = System::Drawing::Size(75, 23);
			this->backMorty->TabIndex = 26;
			this->backMorty->Text = L"BACK";
			this->backMorty->UseVisualStyleBackColor = false;
			// 
			// backRick
			// 
			this->backRick->BackColor = System::Drawing::Color::Khaki;
			this->backRick->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->backRick->Location = System::Drawing::Point(15, 306);
			this->backRick->Name = L"backRick";
			this->backRick->Size = System::Drawing::Size(75, 23);
			this->backRick->TabIndex = 27;
			this->backRick->Text = L"BACK";
			this->backRick->UseVisualStyleBackColor = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(118, 261);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 18);
			this->label1->TabIndex = 28;
			this->label1->Text = L"SEEDS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(297, 261);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(64, 18);
			this->label2->TabIndex = 29;
			this->label2->Text = L"SEEDS";
			// 
			// seedRick
			// 
			this->seedRick->AutoSize = true;
			this->seedRick->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seedRick->Location = System::Drawing::Point(133, 281);
			this->seedRick->Name = L"seedRick";
			this->seedRick->Size = System::Drawing::Size(29, 32);
			this->seedRick->TabIndex = 30;
			this->seedRick->Text = L"0";
			// 
			// seedMorty
			// 
			this->seedMorty->AutoSize = true;
			this->seedMorty->Font = (gcnew System::Drawing::Font(L"Consolas", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->seedMorty->Location = System::Drawing::Point(314, 281);
			this->seedMorty->Name = L"seedMorty";
			this->seedMorty->Size = System::Drawing::Size(29, 32);
			this->seedMorty->TabIndex = 31;
			this->seedMorty->Text = L"0";
			// 
			// portals_btn
			// 
			this->portals_btn->BackColor = System::Drawing::Color::YellowGreen;
			this->portals_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->portals_btn->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->portals_btn->Location = System::Drawing::Point(200, 273);
			this->portals_btn->Name = L"portals_btn";
			this->portals_btn->Size = System::Drawing::Size(81, 31);
			this->portals_btn->TabIndex = 32;
			this->portals_btn->Text = L"PORTALS";
			this->portals_btn->UseVisualStyleBackColor = false;
			this->portals_btn->Click += gcnew System::EventHandler(this, &Board::portals_btn_Click);
			// 
			// Board
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::GradientActiveCaption;
			this->ClientSize = System::Drawing::Size(495, 357);
			this->Controls->Add(this->portals_btn);
			this->Controls->Add(this->seedMorty);
			this->Controls->Add(this->seedRick);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->backRick);
			this->Controls->Add(this->backMorty);
			this->Controls->Add(this->advanceRick);
			this->Controls->Add(this->advanceMorty);
			this->Controls->Add(this->throwRick);
			this->Controls->Add(this->throwMorty);
			this->Controls->Add(this->diceRick);
			this->Controls->Add(this->diceMorty);
			this->Controls->Add(this->b16);
			this->Controls->Add(this->b15);
			this->Controls->Add(this->b14);
			this->Controls->Add(this->b13);
			this->Controls->Add(this->b12);
			this->Controls->Add(this->b11);
			this->Controls->Add(this->b10);
			this->Controls->Add(this->b9);
			this->Controls->Add(this->b8);
			this->Controls->Add(this->b7);
			this->Controls->Add(this->b6);
			this->Controls->Add(this->b5);
			this->Controls->Add(this->b4);
			this->Controls->Add(this->b3);
			this->Controls->Add(this->b2);
			this->Controls->Add(this->b1);
			this->Controls->Add(this->idMorty_label);
			this->Controls->Add(this->idRick_label);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Board";
			this->Text = L"BoardGame";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diceMorty))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->diceRick))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private: static String^ toSystemString(string str) {
			return gcnew String(str.c_str());
		}
		private: static string toStandardString(System::String^ string) {
			using System::Runtime::InteropServices::Marshal;
			System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			char* charpointer = reinterpret_cast<char*>(pointer.ToPointer());
			std::string returnString(charpointer, string->Length);
			Marshal::FreeHGlobal(pointer);
			return returnString;


		}
	private: System::Void portals_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		string messaage = "";
		
		for (int i = 0; amountPortals * 2; i++) {
			int value = valueportals[i];
			//messaage += to_string(value);
			//messaage += " joined with ";
		}
		MessageBox::Show(toSystemString(messaage));
	}
};
}
