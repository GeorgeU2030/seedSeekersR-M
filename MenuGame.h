#pragma once
#include <string>
#include "Board.h"

namespace seedSeekers {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de MenuGame
	/// </summary>
	public ref class MenuGame : public System::Windows::Forms::Form
	{
	public:
		MenuGame(void)
		{
			InitializeComponent();
			this->CenterToScreen();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MenuGame()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ RickID_textBox;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ MortyID_textBox;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;


	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Button^ button1;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MenuGame::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->RickID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MortyID_textBox = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(110, 12);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"NickName ";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(22, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(82, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// RickID_textBox
			// 
			this->RickID_textBox->Location = System::Drawing::Point(113, 28);
			this->RickID_textBox->Name = L"RickID_textBox";
			this->RickID_textBox->Size = System::Drawing::Size(127, 20);
			this->RickID_textBox->TabIndex = 2;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(385, 29);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(70, 87);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(307, 59);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(60, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"NickName ";
			// 
			// MortyID_textBox
			// 
			this->MortyID_textBox->Location = System::Drawing::Point(240, 75);
			this->MortyID_textBox->Name = L"MortyID_textBox";
			this->MortyID_textBox->Size = System::Drawing::Size(127, 20);
			this->MortyID_textBox->TabIndex = 5;
			this->MortyID_textBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(193, 189);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(72, 64);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox3->TabIndex = 6;
			this->pictureBox3->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(61, 139);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(43, 13);
			this->label3->TabIndex = 7;
			this->label3->Text = L"SEEDS";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(113, 136);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(49, 20);
			this->textBox1->TabIndex = 8;
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(237, 139);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(57, 13);
			this->label6->TabIndex = 11;
			this->label6->Text = L"PORTALS";
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(310, 137);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(49, 20);
			this->textBox2->TabIndex = 12;
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(190, 256);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(78, 13);
			this->label7->TabIndex = 13;
			this->label7->Text = L"EARTH - C137";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGreen;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::Chartreuse;
			this->button1->Location = System::Drawing::Point(185, 272);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(85, 38);
			this->button1->TabIndex = 14;
			this->button1->Text = L"PLAY";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MenuGame::button1_Click);
			// 
			// MenuGame
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::YellowGreen;
			this->ClientSize = System::Drawing::Size(467, 328);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->MortyID_textBox);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->RickID_textBox);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MenuGame";
			this->Text = L"Menu";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		/*idRick = toStandardString(this->RickID_textBox->Text);
		idMorty = toStandardString(this->MortyID_textBox->Text);
		string seedsString = toStandardString(this->textBox1->Text);
		string portalsString = toStandardString(this->textBox2->Text);
		amountseeds = stoi(seedsString);
		amountportals = stoi(portalsString);
		seedSeekers::BoardGame^ boardgame = gcnew seedSeekers::BoardGame();
		this->Visible = false;
		boardgame->Show();*/
		//this->pictureBox2->Image = Image::FromFile("C:/Users/georg/Downloads/america.png");
		idRick = toStandardString(this->RickID_textBox->Text);
		idMorty = toStandardString(this->MortyID_textBox->Text);
		string seedsString = toStandardString(this->textBox1->Text);
		string portalsString = toStandardString(this->textBox2->Text);
		amountSeeds = stoi(seedsString);
		amountPortals = stoi(portalsString);
		
		if (amountSeeds >14 || amountSeeds<1) {
			MessageBox::Show("AMOUNT SEEDS DON'T ACEPTED");
		}
		else if (amountPortals < 0 || amountPortals>6) {
			MessageBox::Show("AMOUNT PORTALS DON'T ACEPTED");
		}
		else {
			seedSeekers::Board^ board = gcnew seedSeekers::Board();
			this->Visible = false;
			board->Show();
		}
	}
		   private: static string toStandardString(System::String^ string) {
			   using System::Runtime::InteropServices::Marshal;
			   System::IntPtr pointer = Marshal::StringToHGlobalAnsi(string);
			   char* charpointer = reinterpret_cast<char*>(pointer.ToPointer());
			   std::string returnString(charpointer, string->Length);
			   Marshal::FreeHGlobal(pointer);
			   return returnString;


		   }
};
}
