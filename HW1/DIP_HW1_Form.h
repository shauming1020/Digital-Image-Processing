#pragma once
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <msclr\marshal_cppstd.h>
#using <mscorlib.dll> // C++/CLIs
#define PI 3.14159265359

namespace DIP_HW1 {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	
	/// <summary>
	/// DIP_HW1_Form 的摘要
	/// </summary>

	public ref class DIP_HW1_Form : public System::Windows::Forms::Form
	{
	public:
		DIP_HW1_Form(void)
		{
			InitializeComponent();
			//TODO:  在此加入建構函式程式碼
			AllocConsole();
			freopen("CONOUT$", "w", stdout);
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~DIP_HW1_Form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  loadButton;
	protected:

	protected:

	private: System::Windows::Forms::PictureBox^  resultWindow;
	private: System::Windows::Forms::Button^  saveButton;


	protected:




	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  grayTrans;

	private: System::Windows::Forms::Button^  blueExtraction;

	private: System::Windows::Forms::Button^  greenExtraction;
	private: System::Windows::Forms::Button^  redExtraction;
	private: System::Windows::Forms::PictureBox^  originalWindow;
	private: System::Windows::Forms::Button^  undoButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  medianFilterButton;

	private: System::Windows::Forms::Button^  meanFilterButton;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::Button^  histEqualButton;
	private: System::Windows::Forms::Button^  showHistButton;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  thresholdButton;

	private: System::Windows::Forms::TextBox^  thresholdBox;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  verticalButton;
	private: System::Windows::Forms::Button^  combinedButton;
	private: System::Windows::Forms::Button^  horizontalButton;
	private: System::Windows::Forms::GroupBox^  groupBox6;
	private: System::Windows::Forms::Button^  overlapButton;
	private: System::Windows::Forms::GroupBox^  groupBox7;
	private: System::Windows::Forms::Button^  stretchingButton;
	private: System::Windows::Forms::Button^  rotationButton;
	private: System::Windows::Forms::TextBox^  cxBox;

	private: System::Windows::Forms::TextBox^  angleBox;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  cyBox;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;


	private:
		/// <summary>
		/// 設計工具所需的變數。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 此為設計工具支援所需的方法 - 請勿使用程式碼編輯器修改
		/// 這個方法的內容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->loadButton = (gcnew System::Windows::Forms::Button());
			this->resultWindow = (gcnew System::Windows::Forms::PictureBox());
			this->saveButton = (gcnew System::Windows::Forms::Button());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->grayTrans = (gcnew System::Windows::Forms::Button());
			this->blueExtraction = (gcnew System::Windows::Forms::Button());
			this->greenExtraction = (gcnew System::Windows::Forms::Button());
			this->redExtraction = (gcnew System::Windows::Forms::Button());
			this->originalWindow = (gcnew System::Windows::Forms::PictureBox());
			this->undoButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->medianFilterButton = (gcnew System::Windows::Forms::Button());
			this->meanFilterButton = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->showHistButton = (gcnew System::Windows::Forms::Button());
			this->histEqualButton = (gcnew System::Windows::Forms::Button());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->thresholdBox = (gcnew System::Windows::Forms::TextBox());
			this->thresholdButton = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->combinedButton = (gcnew System::Windows::Forms::Button());
			this->horizontalButton = (gcnew System::Windows::Forms::Button());
			this->verticalButton = (gcnew System::Windows::Forms::Button());
			this->groupBox6 = (gcnew System::Windows::Forms::GroupBox());
			this->overlapButton = (gcnew System::Windows::Forms::Button());
			this->groupBox7 = (gcnew System::Windows::Forms::GroupBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->cyBox = (gcnew System::Windows::Forms::TextBox());
			this->cxBox = (gcnew System::Windows::Forms::TextBox());
			this->angleBox = (gcnew System::Windows::Forms::TextBox());
			this->stretchingButton = (gcnew System::Windows::Forms::Button());
			this->rotationButton = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultWindow))->BeginInit();
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originalWindow))->BeginInit();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->groupBox5->SuspendLayout();
			this->groupBox6->SuspendLayout();
			this->groupBox7->SuspendLayout();
			this->SuspendLayout();
			// 
			// loadButton
			// 
			this->loadButton->Location = System::Drawing::Point(21, 796);
			this->loadButton->Name = L"loadButton";
			this->loadButton->Size = System::Drawing::Size(128, 44);
			this->loadButton->TabIndex = 0;
			this->loadButton->Text = L"Load Image";
			this->loadButton->UseVisualStyleBackColor = true;
			this->loadButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::loadButtion_Click);
			// 
			// resultWindow
			// 
			this->resultWindow->Location = System::Drawing::Point(736, 418);
			this->resultWindow->Name = L"resultWindow";
			this->resultWindow->Size = System::Drawing::Size(1096, 776);
			this->resultWindow->TabIndex = 1;
			this->resultWindow->TabStop = false;
			// 
			// saveButton
			// 
			this->saveButton->Location = System::Drawing::Point(154, 796);
			this->saveButton->Name = L"saveButton";
			this->saveButton->Size = System::Drawing::Size(130, 44);
			this->saveButton->TabIndex = 2;
			this->saveButton->Text = L"Save Image";
			this->saveButton->UseVisualStyleBackColor = true;
			this->saveButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::saveButton_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->grayTrans);
			this->groupBox1->Controls->Add(this->blueExtraction);
			this->groupBox1->Controls->Add(this->greenExtraction);
			this->groupBox1->Controls->Add(this->redExtraction);
			this->groupBox1->Location = System::Drawing::Point(21, 28);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(298, 220);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"RGB Extraction and Transformation";
			// 
			// grayTrans
			// 
			this->grayTrans->Location = System::Drawing::Point(69, 166);
			this->grayTrans->Name = L"grayTrans";
			this->grayTrans->Size = System::Drawing::Size(140, 34);
			this->grayTrans->TabIndex = 3;
			this->grayTrans->Text = L"Gray Transform";
			this->grayTrans->UseVisualStyleBackColor = true;
			this->grayTrans->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::grayTrans_Click);
			// 
			// blueExtraction
			// 
			this->blueExtraction->Cursor = System::Windows::Forms::Cursors::AppStarting;
			this->blueExtraction->Location = System::Drawing::Point(69, 118);
			this->blueExtraction->Name = L"blueExtraction";
			this->blueExtraction->Size = System::Drawing::Size(140, 34);
			this->blueExtraction->TabIndex = 2;
			this->blueExtraction->Text = L"Blue Extraction";
			this->blueExtraction->UseVisualStyleBackColor = true;
			this->blueExtraction->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::blueExtraction_Click);
			// 
			// greenExtraction
			// 
			this->greenExtraction->Location = System::Drawing::Point(69, 75);
			this->greenExtraction->Name = L"greenExtraction";
			this->greenExtraction->Size = System::Drawing::Size(140, 32);
			this->greenExtraction->TabIndex = 1;
			this->greenExtraction->Text = L"Green Extraction";
			this->greenExtraction->UseVisualStyleBackColor = true;
			this->greenExtraction->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::greenExtraction_Click);
			// 
			// redExtraction
			// 
			this->redExtraction->Location = System::Drawing::Point(69, 28);
			this->redExtraction->Name = L"redExtraction";
			this->redExtraction->Size = System::Drawing::Size(140, 32);
			this->redExtraction->TabIndex = 0;
			this->redExtraction->Text = L"Red Extraction";
			this->redExtraction->UseVisualStyleBackColor = true;
			this->redExtraction->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::redExtraction_Click);
			// 
			// originalWindow
			// 
			this->originalWindow->Location = System::Drawing::Point(736, 28);
			this->originalWindow->Name = L"originalWindow";
			this->originalWindow->Size = System::Drawing::Size(510, 368);
			this->originalWindow->TabIndex = 4;
			this->originalWindow->TabStop = false;
			// 
			// undoButton
			// 
			this->undoButton->Location = System::Drawing::Point(291, 796);
			this->undoButton->Name = L"undoButton";
			this->undoButton->Size = System::Drawing::Size(117, 42);
			this->undoButton->TabIndex = 5;
			this->undoButton->Text = L"Undo";
			this->undoButton->UseVisualStyleBackColor = true;
			this->undoButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::undoButton_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->medianFilterButton);
			this->groupBox2->Controls->Add(this->meanFilterButton);
			this->groupBox2->Location = System::Drawing::Point(21, 274);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(298, 142);
			this->groupBox2->TabIndex = 6;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Smooth filter (mean andmedian)";
			// 
			// medianFilterButton
			// 
			this->medianFilterButton->Location = System::Drawing::Point(69, 80);
			this->medianFilterButton->Name = L"medianFilterButton";
			this->medianFilterButton->Size = System::Drawing::Size(140, 39);
			this->medianFilterButton->TabIndex = 1;
			this->medianFilterButton->Text = L"Median Filter";
			this->medianFilterButton->UseVisualStyleBackColor = true;
			this->medianFilterButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::medianFilterButton_Click);
			// 
			// meanFilterButton
			// 
			this->meanFilterButton->Location = System::Drawing::Point(69, 28);
			this->meanFilterButton->Name = L"meanFilterButton";
			this->meanFilterButton->Size = System::Drawing::Size(140, 34);
			this->meanFilterButton->TabIndex = 0;
			this->meanFilterButton->Text = L"Mean Filter";
			this->meanFilterButton->UseVisualStyleBackColor = true;
			this->meanFilterButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::meanFilterButton_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->showHistButton);
			this->groupBox3->Controls->Add(this->histEqualButton);
			this->groupBox3->Location = System::Drawing::Point(21, 435);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(298, 176);
			this->groupBox3->TabIndex = 7;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Histogram Equalization";
			// 
			// showHistButton
			// 
			this->showHistButton->Location = System::Drawing::Point(69, 105);
			this->showHistButton->Name = L"showHistButton";
			this->showHistButton->Size = System::Drawing::Size(140, 46);
			this->showHistButton->TabIndex = 1;
			this->showHistButton->Text = L"Show Histogram";
			this->showHistButton->UseVisualStyleBackColor = true;
			this->showHistButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::showHistButton_Click);
			// 
			// histEqualButton
			// 
			this->histEqualButton->Location = System::Drawing::Point(69, 34);
			this->histEqualButton->Name = L"histEqualButton";
			this->histEqualButton->Size = System::Drawing::Size(140, 56);
			this->histEqualButton->TabIndex = 0;
			this->histEqualButton->Text = L"Histogram Equalization";
			this->histEqualButton->UseVisualStyleBackColor = true;
			this->histEqualButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::histEqualButton_Click);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->thresholdBox);
			this->groupBox4->Controls->Add(this->thresholdButton);
			this->groupBox4->Location = System::Drawing::Point(21, 634);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(298, 136);
			this->groupBox4->TabIndex = 8;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"A user-defined thresholding";
			// 
			// thresholdBox
			// 
			this->thresholdBox->Location = System::Drawing::Point(69, 32);
			this->thresholdBox->Name = L"thresholdBox";
			this->thresholdBox->Size = System::Drawing::Size(140, 29);
			this->thresholdBox->TabIndex = 1;
			this->thresholdBox->Text = L"127";
			this->thresholdBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// thresholdButton
			// 
			this->thresholdButton->Location = System::Drawing::Point(69, 82);
			this->thresholdButton->Name = L"thresholdButton";
			this->thresholdButton->Size = System::Drawing::Size(140, 39);
			this->thresholdButton->TabIndex = 0;
			this->thresholdButton->Text = L"Thresholding";
			this->thresholdButton->UseVisualStyleBackColor = true;
			this->thresholdButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::thresholdButton_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->combinedButton);
			this->groupBox5->Controls->Add(this->horizontalButton);
			this->groupBox5->Controls->Add(this->verticalButton);
			this->groupBox5->Location = System::Drawing::Point(358, 28);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(256, 220);
			this->groupBox5->TabIndex = 9;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Sobel edge detection";
			// 
			// combinedButton
			// 
			this->combinedButton->Location = System::Drawing::Point(57, 146);
			this->combinedButton->Name = L"combinedButton";
			this->combinedButton->Size = System::Drawing::Size(138, 39);
			this->combinedButton->TabIndex = 2;
			this->combinedButton->Text = L"combined";
			this->combinedButton->UseVisualStyleBackColor = true;
			this->combinedButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::combinedButton_Click);
			// 
			// horizontalButton
			// 
			this->horizontalButton->Location = System::Drawing::Point(57, 87);
			this->horizontalButton->Name = L"horizontalButton";
			this->horizontalButton->Size = System::Drawing::Size(138, 40);
			this->horizontalButton->TabIndex = 1;
			this->horizontalButton->Text = L"horizontal";
			this->horizontalButton->UseVisualStyleBackColor = true;
			this->horizontalButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::horizontalButton_Click);
			// 
			// verticalButton
			// 
			this->verticalButton->Location = System::Drawing::Point(57, 28);
			this->verticalButton->Name = L"verticalButton";
			this->verticalButton->Size = System::Drawing::Size(138, 44);
			this->verticalButton->TabIndex = 0;
			this->verticalButton->Text = L"vertical";
			this->verticalButton->UseVisualStyleBackColor = true;
			this->verticalButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::verticalButton_Click);
			// 
			// groupBox6
			// 
			this->groupBox6->Controls->Add(this->overlapButton);
			this->groupBox6->Location = System::Drawing::Point(358, 274);
			this->groupBox6->Name = L"groupBox6";
			this->groupBox6->Size = System::Drawing::Size(256, 142);
			this->groupBox6->TabIndex = 10;
			this->groupBox6->TabStop = false;
			this->groupBox6->Text = L"Overlap on the originalimage";
			// 
			// overlapButton
			// 
			this->overlapButton->Location = System::Drawing::Point(57, 50);
			this->overlapButton->Name = L"overlapButton";
			this->overlapButton->Size = System::Drawing::Size(138, 40);
			this->overlapButton->TabIndex = 0;
			this->overlapButton->Text = L"Overlap";
			this->overlapButton->UseVisualStyleBackColor = true;
			this->overlapButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::overlapButton_Click);
			// 
			// groupBox7
			// 
			this->groupBox7->Controls->Add(this->label3);
			this->groupBox7->Controls->Add(this->label2);
			this->groupBox7->Controls->Add(this->label1);
			this->groupBox7->Controls->Add(this->cyBox);
			this->groupBox7->Controls->Add(this->cxBox);
			this->groupBox7->Controls->Add(this->angleBox);
			this->groupBox7->Controls->Add(this->stretchingButton);
			this->groupBox7->Controls->Add(this->rotationButton);
			this->groupBox7->Location = System::Drawing::Point(358, 435);
			this->groupBox7->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox7->Name = L"groupBox7";
			this->groupBox7->Padding = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->groupBox7->Size = System::Drawing::Size(256, 336);
			this->groupBox7->TabIndex = 11;
			this->groupBox7->TabStop = false;
			this->groupBox7->Text = L"Image rotation, stretching ";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(100, 34);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 18);
			this->label3->TabIndex = 7;
			this->label3->Text = L"angle (theta)";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(162, 200);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(32, 18);
			this->label2->TabIndex = 6;
			this->label2->Text = L"c_y";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(84, 200);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(32, 18);
			this->label1->TabIndex = 5;
			this->label1->Text = L"c_x";
			// 
			// cyBox
			// 
			this->cyBox->Location = System::Drawing::Point(144, 224);
			this->cyBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cyBox->Name = L"cyBox";
			this->cyBox->Size = System::Drawing::Size(49, 29);
			this->cyBox->TabIndex = 4;
			this->cyBox->Text = L"2";
			this->cyBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// cxBox
			// 
			this->cxBox->Location = System::Drawing::Point(57, 224);
			this->cxBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->cxBox->Name = L"cxBox";
			this->cxBox->Size = System::Drawing::Size(58, 29);
			this->cxBox->TabIndex = 3;
			this->cxBox->Text = L"0.7";
			this->cxBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// angleBox
			// 
			this->angleBox->Location = System::Drawing::Point(57, 58);
			this->angleBox->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->angleBox->Name = L"angleBox";
			this->angleBox->Size = System::Drawing::Size(136, 29);
			this->angleBox->TabIndex = 2;
			this->angleBox->Text = L"30";
			this->angleBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// stretchingButton
			// 
			this->stretchingButton->Location = System::Drawing::Point(57, 270);
			this->stretchingButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->stretchingButton->Name = L"stretchingButton";
			this->stretchingButton->Size = System::Drawing::Size(138, 51);
			this->stretchingButton->TabIndex = 1;
			this->stretchingButton->Text = L"Stretching";
			this->stretchingButton->UseVisualStyleBackColor = true;
			this->stretchingButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::stretchingButton_Click);
			// 
			// rotationButton
			// 
			this->rotationButton->Location = System::Drawing::Point(57, 122);
			this->rotationButton->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->rotationButton->Name = L"rotationButton";
			this->rotationButton->Size = System::Drawing::Size(138, 46);
			this->rotationButton->TabIndex = 0;
			this->rotationButton->Text = L"Rotation";
			this->rotationButton->UseVisualStyleBackColor = true;
			this->rotationButton->Click += gcnew System::EventHandler(this, &DIP_HW1_Form::rotationButton_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label4->Location = System::Drawing::Point(646, 28);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(78, 24);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Before";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"新細明體", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(136)));
			this->label5->Location = System::Drawing::Point(663, 418);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(63, 24);
			this->label5->TabIndex = 13;
			this->label5->Text = L"After";
			// 
			// DIP_HW1_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1670, 1050);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->groupBox7);
			this->Controls->Add(this->groupBox6);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->undoButton);
			this->Controls->Add(this->originalWindow);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->saveButton);
			this->Controls->Add(this->resultWindow);
			this->Controls->Add(this->loadButton);
			this->Name = L"DIP_HW1_Form";
			this->Text = L"DIP_HW1_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->resultWindow))->EndInit();
			this->groupBox1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->originalWindow))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->groupBox5->ResumeLayout(false);
			this->groupBox6->ResumeLayout(false);
			this->groupBox7->ResumeLayout(false);
			this->groupBox7->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

/* Design the Data Structure for image file */
int pre = -1, now = -1, capacity = 4;

Bitmap^ temp;
cli::array<Bitmap^> ^stack_imgs = gcnew cli::array<Bitmap^>(capacity);

bool IsEmpty() { return now == -1; }
bool IsFull() { return now == capacity - 1; }
bool IsOne() { return pre == 0 && now == 1; }
bool IsGray() {
	bool isG = true;
	for (int i = 0; i < stack_imgs[now]->Height; i++)
		for (int j = 0; j < stack_imgs[now]->Width; j++) {
			Color RGB = stack_imgs[now]->GetPixel(j, i);
			if (RGB.R != RGB.G || RGB.G != RGB.B || RGB.R != RGB.B) {
				return isG = false;
			}
		}
	return isG;
}
	
void pushImage(Bitmap^ newImage) {
	if (IsFull()) {
		cout << "Stack is full..., delete the most old data" << endl;
		for (int i = 0; i < capacity - 1; i++) {
			stack_imgs[i] = cloneImage(stack_imgs[i+1]);
		}
		now--; pre--;
	}
	stack_imgs[++now] = newImage;
	if (IsOne()) return;
	pre++;
}

void showImage() {
	originalWindow->Image = stack_imgs[pre];
	resultWindow->Image = stack_imgs[now];
}

Bitmap^ cloneImage(Bitmap^ resource) {
	RectangleF cloneRect = RectangleF(0, 0, resource->Width, resource->Height);
	PixelFormat format = resource->PixelFormat;
	return resource->Clone(cloneRect, format);
}
/* popImage */
private: System::Void undoButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty() || now == 0) {
		cout << "Stack will be Empty, please insert a image first..." << endl;
		return;
	}
	if (IsOne()) {
		now--;
		showImage();
		return;
	}
	pre--; now--;
	showImage();
}
/* Load Image */
private: System::Void loadButtion_Click(System::Object^  sender, System::EventArgs^  e) {
	
	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		temp = gcnew Bitmap(openFileDialog1->FileName);
		pushImage(temp);
	}
	showImage();
}
/* Save Image */
private: System::Void saveButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
	saveFileDialog1->Title = "Save an Image File";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ sfd = saveFileDialog1->FileName;

		resultWindow->Image->Save(sfd, System::Drawing::Imaging::ImageFormat::Jpeg);
	}
}
private: System::Void redExtraction_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	temp = cloneImage(stack_imgs[now]);
	for (int i = 0; i < temp->Height; i++)
		for (int j = 0; j < temp->Width; j++) {
			Color RGB = temp->GetPixel(j, i);
			temp->SetPixel(j, i, Color::FromArgb(RGB.R, RGB.R, RGB.R));
		}
	pushImage(temp);
	showImage();
}
private: System::Void greenExtraction_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	temp = cloneImage(stack_imgs[now]);
	for (int i = 0; i < temp->Height; i++)
		for (int j = 0; j < temp->Width; j++) {
			Color RGB = temp->GetPixel(j, i);
			temp->SetPixel(j, i, Color::FromArgb(RGB.G, RGB.G, RGB.G));
		}
	pushImage(temp);
	showImage();
}
private: System::Void blueExtraction_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	temp = cloneImage(stack_imgs[now]);
	for (int i = 0; i < temp->Height; i++)
		for (int j = 0; j < temp->Width; j++) {
			Color RGB = temp->GetPixel(j, i);
			temp->SetPixel(j, i, Color::FromArgb(RGB.B, RGB.B, RGB.B));
		}
	pushImage(temp);
	showImage();
}
private: System::Void grayTrans_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	temp = cloneImage(stack_imgs[now]);
	for (int i = 0; i < temp->Height; i++)
		for (int j = 0; j < temp->Width; j++) {
			Color RGB = temp->GetPixel(j, i);
			int avg = (RGB.R + RGB.G + RGB.B) / 3;
			temp->SetPixel(j, i, Color::FromArgb(avg, avg, avg));
		}
	pushImage(temp);
	showImage();
}

/* Problem2 */
int filterHeight = 3;
int filterWidth = 3;
int Height, Width;

void updateParameters() {
	Height = stack_imgs[now]->Height;
	Width = stack_imgs[now]->Width;
	return;
}

ref class Mat {
public:
	int height, width;
	double r, parameter;
	String^ name;
	cli::array<float, 2> ^data; // 2D - array

	/* Constructor */
	Mat(int m, int n, String^ s)
	{	
		height = m; width = n; name = s;

		if (name == "mean") r = (double)1 / 9;
		else if (name == "median" || name == "zero") r = 0;
		else r = 1;

		data = gcnew cli::array<float, 2>(height, width);
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				data[i, j] = r;
			}
		}
	}

	/* Constructor Sobel */
	Mat(String^ s) {
		height = 3; width = 3; name = s;
		if (name == "sobel_x")
			data = gcnew cli::array<float, 2>(height, width) 
			{ {-1, 0, 1 },
			{ -2, 0, 2 },
			{ -1, 0, 1 }
		};
		else if (name == "sobel_y")
			data = gcnew cli::array<float, 2>(height, width) 
			{ { 1, 2, 1 },
			{ 0, 0, 0 },
			{ -1,-2,-1 }
		};
	}

	/* Constructor Rotation */
	Mat(String^ s, double p)
	{
		height = 3; width = 3; name = s; parameter = p;

		if (s == "Rotation")
		data = gcnew cli::array<float, 2>(height, width) 
		{ {cos(parameter), sin(parameter), 0 },
		{ -sin(parameter), cos(parameter), 0 },
		{				0,				0, 1 }};

		else if (s == "Inverse Rotation")
		data = gcnew cli::array<float, 2>(height, width)
		{ {cos(parameter), -sin(parameter), 0 },
		{  sin(parameter),  cos(parameter), 0 },
		{				 0,			     0, 1 }};

	}

	/* Constructor Scale */
	Mat(String^ s, double cx, double cy)
	{
		height = 3; width = 3; name = s;

		if (s == "Stretching")
			data = gcnew cli::array<float, 2>(height, width)
			{ {cx, 0, 0 },
			{  0, cy, 0 },
			{  0,  0, 1 }};
	}

	/* Copy constructor*/
	Mat(const Mat %k) { // ref class copy constructor
		height = k.height;
		width = k.width;
		name = k.name;
		this->data = gcnew cli::array<float, 2>(height, width);
		for (int i = 0; i < k.height; i++) {
			for (int j = 0; j < k.width; j++) {
				this->data[i, j] = k.data[i, j];
			}
		}
	}

	/* Conver String^ to string */
	void MarshalString(String ^ s, string& os) {
		using namespace Runtime::InteropServices;
		const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
		os = chars;
		Marshal::FreeHGlobal(IntPtr((void*)chars));
	}

	void show() { 
		string a = "Matrix Name: ";
		cout << a;
		MarshalString(name, a);
		cout << a << endl;
		for (int i = 0; i < height; i++) {
			for (int j = 0; j < width; j++) {
				cout << data[i, j] << " ";
			}
			cout << endl;
		}
	}

	void merge(cli::array<float, 1>^ arr, int l, int m, int r) {
		int i, j, k;
		int n1 = m - l + 1, n2 = r - m;

		cli::array<float, 1>^ L = gcnew cli::array<float, 1>(n1);
		cli::array<float, 1>^ R = gcnew cli::array<float, 1>(n2);

		for (i = 0; i < n1; i++)
			L[i] = arr[l + i];
		for (j = 0; j < n2; j++)
			R[j] = arr[m + 1 + j];

		i = 0; j = 0; k = l;
		while (i < n1 && j < n2)
		{
			if (L[i] <= R[j]) {
				arr[k] = L[i++];
			}
			else {
				arr[k] = R[j++];
			}
			k++;
		}

		while (i < n1) 
		{
			arr[k++] = L[i++];
		}

		while (j < n2)
		{
			arr[k++] = R[j++];
		}

	}

	void mergeSort(cli::array<float, 1>^ arr, int l, int r) {
		if (l < r) {
			int m = l + (r - l) / 2;
			
			mergeSort(arr, l, m);
			mergeSort(arr, m + 1, r);
			merge(arr, l, m, r);
		}
	}

	cli::array<float, 1> ^ sorted1D(int height, int width) {
		int length = height * width;
		int index = 0;
		cli::array<float, 1> ^temp = gcnew cli::array<float, 1>(length);
		for (int i = 0; i < height; i++)
			for (int j = 0; j < width; j++) {
				temp[index] = data[i, j];
				index++;
			}
			
		mergeSort(temp, 0, length - 1);
		return temp;
	}

	double median() {
		cli::array<float, 1> ^ temp = sorted1D(height, width);
		return temp[int(height * width / 2)];
	}

	/* Matrix multiplication */
	Mat operator*(const Mat m) {
		Mat result(this->height, m.width, "zero");

		for (int i = 0; i < result.height; i++) {
			for (int j = 0; j < result.width; j++) {
				for (int k = 0; k < this->width; k++) {
					result.data[i, j] += data[i, k] * m.data[k, j];
				}
			}
		}
		return result;
	}

	/* operator = */
	Mat operator=(const Mat m) {	
		return Mat(m);
	}

};

void paddingImage(Bitmap^ img, int pad_size) {
	int new_Height = img->Height + 2 * pad_size;
	int new_Width = img->Width + 2 * pad_size;

	Bitmap^ img_pad = gcnew Bitmap(new_Width, new_Height);
	
	for (int i = 0; i < img->Height; i++) {
		for (int j = 0; j < img->Width; j++) {
			Color RGB = img->GetPixel(j, i);
			img_pad->SetPixel(j + pad_size, i + pad_size, Color::FromArgb(RGB.A, RGB.R, RGB.G, RGB.B));
		}
	}
	img = img_pad;
}

void applyFilter(Bitmap^ temp, Mat kernel, String^ name) {

	/* mean, sobel_x, sobel_y */
	if (name == "mean" || name == "sobel_x" || name == "sobel_y")
	for (int i = 1; i < Height - 1; i++) {
		for (int j = 1; j < Width - 1; j++) {
			double gray = 0, sum = 0, s = 0;
			for (int h = i - 1; h < i + filterHeight - 1; h++) {
				for (int w = j - 1; w < j + filterWidth - 1; w++) {
					Color RGB = stack_imgs[now]->GetPixel(w, h); // Getpixel (y,x)
					gray = RGB.R;
					s += kernel.data[h - i + 1, w - j + 1] * gray;
					sum = sqrt(s*s);
					sum = sum > 255 ? 255 : sum;
					temp->SetPixel(j, i, Color::FromArgb(RGB.A, sum, sum, sum));
				}
			}
		}
	}

	/* median */
	else if (name == "median")
	for (int i = 1; i < Height - 1; i++) {
		for (int j = 1; j < Width - 1; j++) {
			double gray = 0, sum = 0;
			for (int h = i - 1; h < i + filterHeight - 1; h++) {
				for (int w = j - 1; w < j + filterWidth - 1; w++) {
					Color RGB = stack_imgs[now]->GetPixel(w, h); // Getpixel (y,x)
					gray = RGB.R;
					kernel.data[h - i + 1, w - j + 1] = gray;
				}
			}
			sum = kernel.median();
			temp->SetPixel(j, i, Color::FromArgb(sum, sum, sum));
		}
	}
}

private: System::Void meanFilterButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	paddingImage(stack_imgs[now], 1);
	updateParameters();
	temp = cloneImage(stack_imgs[now]);
	Mat kernel(filterHeight, filterWidth, "mean");
	kernel.show();
	applyFilter(temp, kernel, kernel.name);
	pushImage(temp);
	showImage();

}
private: System::Void medianFilterButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	paddingImage(stack_imgs[now], 1);
	updateParameters();
	temp = cloneImage(stack_imgs[now]);
	Mat kernel(filterHeight, filterWidth, "median"); // Initial the kernel
	kernel.show();
	applyFilter(temp, kernel, kernel.name);
	pushImage(temp);
	showImage();
}
private: System::Void histEqualButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	updateParameters();
	temp = cloneImage(stack_imgs[now]);
	Mat tmp(Height, Width, "tmp");

	int gray;
	/* Assign to 2D matrix */
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			Color RGB = temp->GetPixel(j, i);
			gray = RGB.R;
			gray = gray > 255 ? 255 : gray; // clip to 255
			tmp.data[i, j] = gray;
		}
	}

	/* Counting the number of element, i.e. compute the h(r_k) = n_k */
	cli::array<float, 1>^ tmp1D = tmp.sorted1D(Height, Width);
	cli::array<float, 1>^ cnt = gcnew cli::array<float, 1>(256);
	cli::array<int, 1>^ s = gcnew cli::array<int, 1>(256);

	/* Initial the cnt */
	for (int i = 0; i < 256; i++)
		cnt[i] = 0;

	/* Counting */
	for (int i = 0; i < Height * Width; i++) {
		int j = tmp1D[i];
		cnt[j]++;
	}

	/* Compute the p(r_k) = n_k/MN */
	for (int i = 0; i < 256; i++)
		cnt[i] /= (Height * Width);

	/* Histogram equalization */
	for (int k = 0; k < 256; k++) {
		double sum = 0;
		for (int j = 0; j <= k; j++)
			sum += cnt[j];
		s[k] = (int) 255 * sum;
	}
		
	/* Inverse */
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			gray = tmp.data[i, j];
			tmp.data[i, j] = s[gray];
		}
	}

	/* Assign to Bitmap */
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			gray = tmp.data[i, j];
			temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
		}
	}

	pushImage(temp);
	showImage();

}
private: System::Void showHistButton_Click(System::Object^  sender, System::EventArgs^  e) {
	/* */
}
private: System::Void thresholdButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	updateParameters();
	temp = cloneImage(stack_imgs[now]);
	
	int threshold = System::Int32::Parse(thresholdBox->Text);
	int gray;
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			Color RGB = temp->GetPixel(j, i);
			gray = RGB.R;
			gray = gray >= threshold ? 255 : 0;
			temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
		}
	}

	pushImage(temp);
	showImage();

}
private: System::Void verticalButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	paddingImage(stack_imgs[now], 1);
	updateParameters();
	temp = cloneImage(stack_imgs[now]);
	Mat kernel("sobel_x");
	kernel.show();
	applyFilter(temp, kernel, kernel.name);
	pushImage(temp);
	showImage();

}
private: System::Void horizontalButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	paddingImage(stack_imgs[now], 1);
	updateParameters();
	temp = cloneImage(stack_imgs[now]);
	Mat kernel("sobel_y");
	kernel.show();
	applyFilter(temp, kernel, kernel.name);
	pushImage(temp);
	showImage();

}
private: System::Void combinedButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	paddingImage(stack_imgs[now], 1);
	updateParameters();
	temp = cloneImage(stack_imgs[now]);

	Mat sobel_x("sobel_x");
	Mat sobel_y("sobel_y");

	for (int i = 1; i < Height - 1; i++) {
		for (int j = 1; j < Width - 1; j++) {
			double gray = 0, sum = 0, g_x = 0, g_y = 0;
			for (int h = i - 1; h < i + filterHeight - 1; h++) {
				for (int w = j - 1; w < j + filterWidth - 1; w++) {
					Color RGB = stack_imgs[now]->GetPixel(w, h); // Getpixel (y,x)
					gray = RGB.R; 
					g_x += sobel_x.data[h - i + 1, w - j + 1] * gray;
					g_y += sobel_y.data[h - i + 1, w - j + 1] * gray;
					sum = sqrt(g_x * g_x + g_y * g_y);
					sum = sum > 255 ? 255 : sum;
					temp->SetPixel(j, i, Color::FromArgb(RGB.A, sum, sum, sum));
				}
			}
		}
	}

	pushImage(temp);
	showImage();
}
private: System::Void overlapButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	updateParameters();
	temp = cloneImage(stack_imgs[now % 2]); // 按照處理程序，Combined Image會在這個index

	if (temp->Height != stack_imgs[now]->Height || temp->Width != stack_imgs[now]->Width) {
		cout << "Cannot work on two different size images..." << endl;
		return;
	}

	int gray, edge;
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			/* Extract the edge */
			Color RGB = stack_imgs[now]->GetPixel(j, i);
			edge = RGB.R;
			/* Extract the original pixel */
			Color RGB_2 = temp->GetPixel(j, i);
			gray = RGB_2.R;
			if (edge == 255) temp->SetPixel(j, i, Color::FromArgb(0, 255, 0));
			else if (edge == 0) temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
		}
	}

	pushImage(temp);
	showImage();
}
private: System::Void rotationButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	updateParameters();
	double angle = System::Int32::Parse(angleBox->Text) * PI / 180;	
	int diagonal = int(sqrt(Height * Height + Width * Width));
	int d_x, d_y;
	double gray, i_new, j_new;

	Mat R("Rotation", angle);
	R.show();
	Bitmap^ temp = gcnew Bitmap(diagonal, diagonal);

	/* Compute the distance to shift all of pixel*/
	Mat center(3, 1, "center_original");
	center.data[0, 0] = int(Height / 2);
	center.data[1, 0] = int(Width / 2);
	Mat center_rotation(R * center);
	d_x = int(diagonal / 2) - center_rotation.data[0, 0];
	d_y = int(diagonal / 2) - center_rotation.data[1, 0];

	/* Projection to the new plane */
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			Color RGB = stack_imgs[now]->GetPixel(j, i);

			Mat point(3, 1, "point");
			point.data[0, 0] = i;
			point.data[1, 0] = j;

			Mat point_new = R * point;
			i_new = round(point_new.data[0, 0]);
			j_new = round(point_new.data[1, 0]);

			temp->SetPixel(j_new + d_y, i_new + d_x, Color::FromArgb(RGB.R, RGB.G, RGB.B));
		}
	}

	/* Apply the inverse rotation */
	Mat invR("Inverse Rotation", angle);
	invR.show();

	for (int i = 0; i < temp->Height; i++) {
		for (int j = 0; j < temp->Width; j++) {
			Mat point(3, 1, "point");
			point.data[0, 0] = i - d_x;
			point.data[1, 0] = j - d_y;

			Mat point_new = invR * point;
			i_new = point_new.data[0, 0];
			j_new = point_new.data[1, 0];

			if (i_new < 0 || j_new < 0) continue;
			if (i_new >= stack_imgs[now]->Height || j_new >= stack_imgs[now]->Width) continue;
			
			Color RGB = stack_imgs[now]->GetPixel(j_new, i_new);

			temp->SetPixel(j, i, Color::FromArgb(RGB.R, RGB.G, RGB.B));
		}
	}

	pushImage(temp);
	showImage();
}
/* Bilinear Interpolation */
double linearInterpolation(int Q1, int Q2, int p1, int p2, int t) {
	return ((double)1 / (p2 - p1)) * ((p2 - t) * Q1 + (t - p1) * Q2);
}
double bilinearInterpolation(int Q11, int Q12, int Q21, int Q22, int x1, int x2, int y1, int y2, int tx, int ty) {
	return linearInterpolation(linearInterpolation(Q11, Q12, x1, x2, tx), linearInterpolation(Q21, Q22, x1, x2, tx), y1, y2, ty);
}
private: System::Void stretchingButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (IsEmpty()) {
		cout << "Cannot work on empty image..." << endl;
		return;
	}

	if (!IsGray()) {
		cout << "The image is not a gray-level image..." << endl;
		return;
	}

	updateParameters();

	double cx = System::Double::Parse(cxBox->Text);
	double cy = System::Double::Parse(cyBox->Text);

	int new_Height = cx * Height;
	int new_Width = cy * Width;
	int i_new, j_new;
	Mat S("Stretching", cx, cy);
	S.show();
	Bitmap^ temp = gcnew Bitmap(new_Width, new_Height);

	/* Projection to the new plane */
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			Color RGB = stack_imgs[now]->GetPixel(j, i);

			Mat point(3, 1, "point");
			point.data[0, 0] = i;
			point.data[1, 0] = j;

			Mat point_new = S * point;
			i_new = point_new.data[0, 0];
			j_new = point_new.data[1, 0];

			temp->SetPixel(j_new, i_new, Color::FromArgb(RGB.R, RGB.G, RGB.B));
		}
	}
	
	/* Apply bilinear interpolation */
	int x1, x2, y1, y2;
	double gray;
	cx = ceil(cx); cy = ceil(cy);
	for (int i = 0; i < new_Height - cx; i += cx) {
		for (int j = 0; j < new_Width - cy; j += cy) {
			x1 = i; x2 = i + cx; y1 = j; y2 = j + cy;

			Color Q11 = temp->GetPixel(y1, x1);
			Color Q12 = temp->GetPixel(y1, x2);
			Color Q21 = temp->GetPixel(y2, x1);
			Color Q22 = temp->GetPixel(y2, x2);

			for (int tx = 0; tx <= cx; tx++) {
				for (int ty = 0; ty <= cy; ty++) {
					gray = bilinearInterpolation(Q11.R, Q12.R, Q21.R, Q22.R, x1, x2, y1, y2, x1+tx, y1+ty);
					gray = gray < 0 ? 0 : gray;
					gray = gray > 255 ? 255 : gray;
					temp->SetPixel(y1+ty, x1+tx, Color::FromArgb(gray, gray, gray));
				}
			}
		}
	} 

	pushImage(temp);
	showImage();

}
};
}
