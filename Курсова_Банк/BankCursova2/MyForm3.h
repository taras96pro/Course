#pragma once
#include"MyForm4.h"
#include"MyForm5.h"
#include"Choise.h"
namespace BankCursova2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� MyForm3
	/// </summary>
	public ref class MyForm3 : public System::Windows::Forms::Form
	{
	public:
		MyForm3(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MyForm3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button6;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(12, 141);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(188, 92);
			this->button1->TabIndex = 0;
			this->button1->Text = L"������� �������";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm3::Button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(229, 141);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 92);
			this->button2->TabIndex = 1;
			this->button2->Text = L"��������";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm3::Button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(444, 141);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(188, 92);
			this->button3->TabIndex = 2;
			this->button3->Text = L"�������";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm3::Button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 19.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(229, 331);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(188, 92);
			this->button4->TabIndex = 3;
			this->button4->Text = L"������";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm3::Button4_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 12);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 5;
			this->button6->Text = L"�����";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm3::Button6_Click);
			// 
			// MyForm3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 460);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm3";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"MyForm3";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Button3_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm4^ Atm = gcnew MyForm4;
		Atm->ShowDialog();
		this->Show();
	}
	private: System::Void Button2_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		MyForm5^ Atm = gcnew MyForm5;
		Atm->ShowDialog();
		this->Show();
	}
	private: System::Void Button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Choise^ c = gcnew Choise;
		c->ShowDialog();
		this->Show();
	}
private: System::Void Button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
}
private: System::Void Button6_Click(System::Object^ sender, System::EventArgs^ e) {
	Client c;
	c.revrite();
	Application::Exit();
}
};
}
