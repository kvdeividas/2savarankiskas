#pragma once
#include "Student.h"
#include "convstring.h"
//#include "Student.h"
namespace CppCLRWinFormsProject {
//#include "convstring.h"
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ failasToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ atidarytiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ saugotiToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ apieToolStripMenuItem;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	public: System::String^ failo_vardas = "";
	public: System::String^ failo_vardas1 = "";
	public: System::String^ tekstas = "";
	public: int skaicius = 0;
	public: Student* kip;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button6;
	public:
		// kip = new Student[skaicius];
	protected:

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->failasToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->atidarytiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saugotiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->apieToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 31);
			this->textBox1->MaxLength = 9927679;
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(782, 459);
			this->textBox1->TabIndex = 0;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->failasToolStripMenuItem,
					this->apieToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(939, 28);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// failasToolStripMenuItem
			// 
			this->failasToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->atidarytiToolStripMenuItem,
					this->saugotiToolStripMenuItem
			});
			this->failasToolStripMenuItem->Name = L"failasToolStripMenuItem";
			this->failasToolStripMenuItem->Size = System::Drawing::Size(59, 24);
			this->failasToolStripMenuItem->Text = L"Failas";
			this->failasToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::failasToolStripMenuItem_Click);
			// 
			// atidarytiToolStripMenuItem
			// 
			this->atidarytiToolStripMenuItem->Name = L"atidarytiToolStripMenuItem";
			this->atidarytiToolStripMenuItem->Size = System::Drawing::Size(149, 26);
			this->atidarytiToolStripMenuItem->Text = L"Atidaryti";
			this->atidarytiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::atidarytiToolStripMenuItem_Click);
			// 
			// saugotiToolStripMenuItem
			// 
			this->saugotiToolStripMenuItem->Name = L"saugotiToolStripMenuItem";
			this->saugotiToolStripMenuItem->Size = System::Drawing::Size(149, 26);
			this->saugotiToolStripMenuItem->Text = L"Saugoti";
			this->saugotiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saugotiToolStripMenuItem_Click);
			// 
			// apieToolStripMenuItem
			// 
			this->apieToolStripMenuItem->Name = L"apieToolStripMenuItem";
			this->apieToolStripMenuItem->Size = System::Drawing::Size(54, 24);
			this->apieToolStripMenuItem->Text = L"Apie";
			this->apieToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::apieToolStripMenuItem_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(800, 31);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(127, 57);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Atidaryti";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(800, 94);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(127, 57);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Vidrukis";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(800, 157);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(127, 57);
			this->button3->TabIndex = 4;
			this->button3->Text = L"Mediana";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(800, 220);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(127, 57);
			this->button4->TabIndex = 5;
			this->button4->Text = L"Sekmingi";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(800, 283);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(127, 57);
			this->button5->TabIndex = 6;
			this->button5->Text = L"Nesekmingi";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(800, 346);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(127, 57);
			this->button6->TabIndex = 7;
			this->button6->Text = L"Saugoti";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(939, 502);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	string b = "b";
	string c = "b";
	openFileDialog1->InitialDirectory = "Kopija";
	openFileDialog1->Filter = "txt files (*.txt)|*.txt";
	openFileDialog1->InitialDirectory = "Kopija";
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)
	{
		delete[] kip;
		System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(openFileDialog1->FileName);
		textBox1->Text = (sr->ReadToEnd());
		tekstas = textBox1->Text;
		failo_vardas = openFileDialog1->FileName;
		sr->Close();

	std::vector<std::string> splited1;
	std::string eil;
	std::stringstream my_buffer;
	MarshalString(tekstas, c);
	my_buffer << c;
	tekstas = "";
	c = "";
	while (my_buffer) {
		if (!my_buffer.eof()) {
			std::getline(my_buffer, eil);
			splited1.push_back(eil);
			skaicius++;
		}
		else break;
	}
	my_buffer.str("");
	my_buffer.clear();

	kip = new Student[skaicius];
	int sap = 0;
	for (std::string a : splited1) {
		kip[sap].get(a);
		sap++;

	}
	splited1.resize(0);
	splited1.clear();
	for (int i = 0; i < skaicius; i++)
	{
		kip[i].countAverage();
		kip[i].countMedian();
	}
	textBox1->Text = skaicius.ToString();
	tekstas = "";
	for (int i = 0; i < skaicius; i++)
	{
		tekstas = tekstas + "\r\n" + kip[i].print1();
	}
	textBox1->Text = tekstas;
	tekstas = "";
}
}
private: System::Void apieToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Deividas Kvetkauskas;\nPIT-21-I-NT;\nAntras savarankiskas darbas.", "Apie projektà", MessageBoxButtons::OK);
}
private: System::Void failasToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void atidarytiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button1_Click(sender, e);
}
private: System::Void saugotiToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	button6_Click(sender, e);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < skaicius; i++)
	{
		if (kip[i].check() >=5 ){
		tekstas = tekstas + "\r\n" + kip[i].print4();
		}
	}
	textBox1->Text = tekstas;
	tekstas = "";
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < skaicius; i++)
	{
		tekstas = tekstas + "\r\n" + kip[i].print2();
	}
	textBox1->Text = tekstas;
	tekstas = "";
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	for (int i = 0; i < skaicius; i++)
	{
		tekstas = tekstas + "\r\n" + kip[i].print3();
	}
	textBox1->Text = tekstas;
	tekstas = "";
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {

	for (int i = 0; i < skaicius; i++)
	{

		if (kip[i].check() <= 4) {
			tekstas = tekstas + "\r\n" + kip[i].print4();
		}
	}
	textBox1->Text = tekstas;
	tekstas = "";
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();											// ágaliname ákeltà SaveFileDialog objektà
	saveFileDialog1->InitialDirectory = "..\\";															// parenkome darbinæ direktorijà
	saveFileDialog1->Filter = "txt files (*.txt)|*.txt";												// parinkome galimus failø pletinius
	String^ z = textBox1->Text;																			// uþpildome objektà System::String tekstu paimtu ið textBox1 objekto
	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK)						// atidarom saugojimo vietos pasirinkimo langa, 

	{
		System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(saveFileDialog1->FileName);	// susiejame áraðimo srautà su atvertu failu kurio kelias

		sw->Write(z);																				// Áraðome textBox1->Text lauko tekstà á atvertà failà
		sw->Close();																				// uþdarome srautà ir failà 
	}
	else MessageBox::Show("Error on file input", "Error", MessageBoxButtons::OK);
}
};
}
