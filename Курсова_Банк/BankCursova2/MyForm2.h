#pragma once
#include"Client.h"
#include"MyForm3.h"
#include <msclr\marshal_cppstd.h>
using namespace System;
//using namespace msclr::interop;


namespace BankCursova2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm2
	/// </summary>
	public ref class MyForm2 : public System::Windows::Forms::Form
	{
	public:
		MyForm2(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(250, 325);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(141, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Продовжити";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm2::Button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(67, 54);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 22);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Ім\'я";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm2::Label1_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(67, 132);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(120, 22);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Номер карти";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(67, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 22);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Прізвище";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(67, 172);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(90, 22);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Pin карти";
			this->label4->Click += gcnew System::EventHandler(this, &MyForm2::Label4_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(67, 243);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(128, 23);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Ваш рахунок";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->Location = System::Drawing::Point(250, 54);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(141, 22);
			this->textBox1->TabIndex = 6;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &MyForm2::TextBox1_TextChanged);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->Location = System::Drawing::Point(250, 173);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(141, 22);
			this->textBox2->TabIndex = 7;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->Location = System::Drawing::Point(250, 132);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(141, 22);
			this->textBox3->TabIndex = 8;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->Location = System::Drawing::Point(250, 95);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(141, 22);
			this->textBox4->TabIndex = 9;
			this->textBox4->TextChanged += gcnew System::EventHandler(this, &MyForm2::TextBox4_TextChanged);
			// 
			// textBox5
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Control;
			this->textBox5->Location = System::Drawing::Point(250, 243);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(141, 22);
			this->textBox5->TabIndex = 10;
			this->textBox5->TextChanged += gcnew System::EventHandler(this, &MyForm2::TextBox5_TextChanged);
			// 
			// MyForm2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 460);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm2";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm2";
			this->Load += gcnew System::EventHandler(this, &MyForm2::MyForm2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		

	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm3^ f4 = gcnew MyForm3;
		f4->ShowDialog();
		this->Show();
		Client c;
		c.start();
		textBox4->Text = msclr::interop::marshal_as<System::String^>(c.getLastClientName());
		textBox3->Text = System::Convert::ToString(c.getCardNumClient());
		textBox2->Text = System::Convert::ToString(c.getPinClient());
		textBox1->Text = msclr::interop::marshal_as<System::String^>(c.getFirstClientName());
		textBox5->Text = System::Convert::ToString(c.getMoneyClient());
		

	}
	private: System::Void Label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void Label4_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void TextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void TextBox5_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void TextBox4_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	
}
private: System::Void MyForm2_Load(System::Object^ sender, System::EventArgs^ e) {
	Client c;
	c.start();
	textBox4->Text = msclr::interop::marshal_as<System::String^>(c.getLastClientName());
	textBox3->Text = System::Convert::ToString(c.getCardNumClient());
	textBox2->Text= System::Convert::ToString(c.getPinClient());
	textBox1->Text = msclr::interop::marshal_as<System::String^>(c.getFirstClientName());
	textBox5->Text = System::Convert::ToString(c.getMoneyClient());
}
};
}
