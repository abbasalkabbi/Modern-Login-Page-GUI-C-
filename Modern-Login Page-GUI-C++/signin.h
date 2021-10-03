#pragma once

namespace ModernLoginPageGUIC {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for signin
	/// </summary>
	public ref class signin : public System::Windows::Forms::Form
	{
	public:
		signin(void)
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
		~signin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel6;
	private: System::Windows::Forms::Panel^ panel7;
	private: System::Windows::Forms::Panel^ panel8;
	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::DarkGray;
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Red;
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::LightCoral;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Location = System::Drawing::Point(871, 0);
			this->button1->Margin = System::Windows::Forms::Padding(1);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(46, 40);
			this->button1->TabIndex = 0;
			this->button1->Text = L"X";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &signin::Exit);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label1->ForeColor = System::Drawing::Color::AliceBlue;
			this->label1->Location = System::Drawing::Point(52, 128);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 19);
			this->label1->TabIndex = 1;
			this->label1->Text = L"UserName";
			this->label1->Click += gcnew System::EventHandler(this, &signin::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::Color::DimGray;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->ForeColor = System::Drawing::Color::White;
			this->textBox1->Location = System::Drawing::Point(52, 128);
			this->textBox1->Margin = System::Windows::Forms::Padding(0);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(237, 34);
			this->textBox1->TabIndex = 2;
			this->textBox1->Enter += gcnew System::EventHandler(this, &signin::textBox1_Enter);
			this->textBox1->Leave += gcnew System::EventHandler(this, &signin::textBox1_Leave);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(52, 162);
			this->panel1->Margin = System::Windows::Forms::Padding(0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(237, 2);
			this->panel1->TabIndex = 3;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &signin::panel1_Paint);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Tahoma", 12));
			this->label2->ForeColor = System::Drawing::Color::AliceBlue;
			this->label2->Location = System::Drawing::Point(52, 195);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(78, 19);
			this->label2->TabIndex = 4;
			this->label2->Text = L"PassWord";
			this->label2->Click += gcnew System::EventHandler(this, &signin::label2_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(52, 227);
			this->panel2->Margin = System::Windows::Forms::Padding(0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(237, 2);
			this->panel2->TabIndex = 6;
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::Color::DimGray;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->ForeColor = System::Drawing::Color::White;
			this->textBox2->Location = System::Drawing::Point(52, 195);
			this->textBox2->Margin = System::Windows::Forms::Padding(0);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->PasswordChar = '*';
			this->textBox2->Size = System::Drawing::Size(237, 32);
			this->textBox2->TabIndex = 5;
			this->textBox2->Enter += gcnew System::EventHandler(this, &signin::textBox2_Enter);
			this->textBox2->Leave += gcnew System::EventHandler(this, &signin::textBox2_Leave);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Tahoma", 24));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(45, 30);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(113, 39);
			this->label3->TabIndex = 7;
			this->label3->Text = L"Sign in";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Blue;
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Tahoma", 16));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(47, 250);
			this->label4->Name = L"label4";
			this->label4->Padding = System::Windows::Forms::Padding(20, 10, 20, 10);
			this->label4->Size = System::Drawing::Size(117, 47);
			this->label4->TabIndex = 8;
			this->label4->Text = L"Sign in";
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::DarkGray;
			this->panel3->Location = System::Drawing::Point(503, 0);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(414, 492);
			this->panel3->TabIndex = 9;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(52, 116);
			this->panel4->Margin = System::Windows::Forms::Padding(0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(237, 2);
			this->panel4->TabIndex = 10;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::Color::White;
			this->panel5->Location = System::Drawing::Point(52, 184);
			this->panel5->Margin = System::Windows::Forms::Padding(0);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(237, 2);
			this->panel5->TabIndex = 11;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::Gray;
			this->panel6->Location = System::Drawing::Point(431, 30);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(200, 100);
			this->panel6->TabIndex = 0;
			// 
			// panel7
			// 
			this->panel7->BackColor = System::Drawing::Color::Gray;
			this->panel7->Location = System::Drawing::Point(392, 195);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(200, 100);
			this->panel7->TabIndex = 12;
			// 
			// panel8
			// 
			this->panel8->BackColor = System::Drawing::Color::Gray;
			this->panel8->Location = System::Drawing::Point(371, 354);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(200, 100);
			this->panel8->TabIndex = 13;
			// 
			// signin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DimGray;
			this->ClientSize = System::Drawing::Size(917, 491);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->panel3);
			this->ForeColor = System::Drawing::Color::White;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"signin";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"signin";
			this->Load += gcnew System::EventHandler(this, &signin::signin_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void signin_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Exit(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();

	}

	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}

	private: System::Void textBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
		// username textbox when click 
		label1->Location = System::Drawing::Point(52, 109);
		label1->ForeColor = System::Drawing::Color::Blue;
		panel1->BackColor = System::Drawing::Color::Blue;
		panel4->BackColor = System::Drawing::Color::Blue;
	}
	private: System::Void textBox1_Leave(System::Object^ sender, System::EventArgs^ e) {
		// username textbox textBox1_Leave
		label1->Location = System::Drawing::Point(52, 128);
		label1->ForeColor = System::Drawing::Color::White;
		panel1->BackColor = System::Drawing::Color::White;
		panel4->BackColor = System::Drawing::Color::White;
	}
	private: System::Void textBox2_Enter(System::Object^ sender, System::EventArgs^ e) {
		// password textbox when click  
		label2->Location = System::Drawing::Point(52, 176);
		label2->ForeColor = System::Drawing::Color::Blue;
		panel2->BackColor = System::Drawing::Color::Blue;
		panel5->BackColor = System::Drawing::Color::Blue;
	}
	private: System::Void textBox2_Leave(System::Object^ sender, System::EventArgs^ e) {
		// password textbox textBox2_Leave
		label2->Location = System::Drawing::Point(52, 195);
		label2->ForeColor = System::Drawing::Color::White;
		panel2->BackColor = System::Drawing::Color::White;
		panel5->BackColor = System::Drawing::Color::White;
	}


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox1->Focus();
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
		textBox2->Focus();
	}
	};
}


