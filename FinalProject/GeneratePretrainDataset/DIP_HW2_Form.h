#pragma once
#include <iostream>
#include <cstdlib>
#include <windows.h>
#include <msclr\marshal_cppstd.h>
#using <mscorlib.dll> // C++/CLIs
#include <cliext/vector>
#include <time.h>
#include <msclr/marshal.h> 
#include <msclr/marshal_cppstd.h> 
#define PI 3.14159265359

namespace DIPHW2 {

	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Drawing::Imaging;
	using namespace msclr::interop;

	/// <summary>
	/// DIP_HW2_Form 的摘要
	/// </summary>
	public ref class DIP_HW2_Form : public System::Windows::Forms::Form
	{
	public:
		DIP_HW2_Form(void)
		{
			InitializeComponent();
			//
			//TODO:  在此加入建構函式程式碼
			AllocConsole();
			freopen("CONOUT$", "w", stdout);
			//
		}

	protected:
		/// <summary>
		/// 清除任何使用中的資源。
		/// </summary>
		~DIP_HW2_Form()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:



	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::Button^  dcScoreButton;

	private: System::Windows::Forms::Button^  loadTestButton;
	private: System::Windows::Forms::PictureBox^  selectModelWindow;


	private: System::Windows::Forms::PictureBox^  selectImageWindow;



	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::TextBox^  filterTimes;

	private: System::Windows::Forms::Button^  meanFilterButton;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::Button^  sobelButton;
	private: System::Windows::Forms::ComboBox^  sobelSelect;
	private: System::Windows::Forms::TextBox^  maxthreSet;



	private: System::Windows::Forms::Button^  threButton;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  randGeneButton;
	private: System::Windows::Forms::TextBox^  NumOfNewdata;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  loadModelButton;
	private: System::Windows::Forms::PictureBox^  runImageWindow;


	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog1;
	private: System::Windows::Forms::TextBox^  erosionTimes;
	private: System::Windows::Forms::FolderBrowserDialog^  folderBrowserDialog2;
	private: System::Windows::Forms::TextBox^  lowSet;
	private: System::Windows::Forms::TextBox^  highSet;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  bandPaButton;
	private: System::Windows::Forms::Button^  undoButton;
	private: System::Windows::Forms::Button^  detButton;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::Button^  detSpineButton;
	private: System::Windows::Forms::Button^  shiftButton;

	private: System::Windows::Forms::Button^  polyfitButton;
	private: System::Windows::Forms::Button^  smoothButton;
	private: System::Windows::Forms::Button^  extractButton;
	private: System::Windows::Forms::Button^  localbandButton;

	private: System::Windows::Forms::Button^  bypassButton;
	private: System::Windows::Forms::Button^  erosionButton;
	private: System::Windows::Forms::TextBox^  erosionTime;
	private: System::Windows::Forms::Button^  laplaButton;
	private: System::Windows::Forms::Button^  addtoButton;
	private: System::Windows::Forms::Button^  histButton;
	private: System::Windows::Forms::Button^  imgGeButton;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::TextBox^  resultscale;

	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  compareButton;
	private: System::Windows::Forms::Button^  outputButton;
	private: System::Windows::Forms::Button^  localOtsuButton;
	private: System::Windows::Forms::Button^  localHistButton;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  histChartY;

	private: System::Windows::Forms::Button^  histYButton;
private: System::Windows::Forms::Button^  closeButton;
private: System::Windows::Forms::Button^  predictButton;












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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->dcScoreButton = (gcnew System::Windows::Forms::Button());
			this->loadTestButton = (gcnew System::Windows::Forms::Button());
			this->selectModelWindow = (gcnew System::Windows::Forms::PictureBox());
			this->selectImageWindow = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->closeButton = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->resultscale = (gcnew System::Windows::Forms::TextBox());
			this->histButton = (gcnew System::Windows::Forms::Button());
			this->addtoButton = (gcnew System::Windows::Forms::Button());
			this->laplaButton = (gcnew System::Windows::Forms::Button());
			this->erosionTime = (gcnew System::Windows::Forms::TextBox());
			this->erosionButton = (gcnew System::Windows::Forms::Button());
			this->highSet = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->bandPaButton = (gcnew System::Windows::Forms::Button());
			this->lowSet = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->maxthreSet = (gcnew System::Windows::Forms::TextBox());
			this->threButton = (gcnew System::Windows::Forms::Button());
			this->sobelSelect = (gcnew System::Windows::Forms::ComboBox());
			this->sobelButton = (gcnew System::Windows::Forms::Button());
			this->filterTimes = (gcnew System::Windows::Forms::TextBox());
			this->meanFilterButton = (gcnew System::Windows::Forms::Button());
			this->detButton = (gcnew System::Windows::Forms::Button());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->imgGeButton = (gcnew System::Windows::Forms::Button());
			this->compareButton = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->randGeneButton = (gcnew System::Windows::Forms::Button());
			this->NumOfNewdata = (gcnew System::Windows::Forms::TextBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->erosionTimes = (gcnew System::Windows::Forms::TextBox());
			this->loadModelButton = (gcnew System::Windows::Forms::Button());
			this->runImageWindow = (gcnew System::Windows::Forms::PictureBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->folderBrowserDialog2 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->undoButton = (gcnew System::Windows::Forms::Button());
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->histYButton = (gcnew System::Windows::Forms::Button());
			this->localHistButton = (gcnew System::Windows::Forms::Button());
			this->localOtsuButton = (gcnew System::Windows::Forms::Button());
			this->localbandButton = (gcnew System::Windows::Forms::Button());
			this->bypassButton = (gcnew System::Windows::Forms::Button());
			this->extractButton = (gcnew System::Windows::Forms::Button());
			this->shiftButton = (gcnew System::Windows::Forms::Button());
			this->polyfitButton = (gcnew System::Windows::Forms::Button());
			this->smoothButton = (gcnew System::Windows::Forms::Button());
			this->detSpineButton = (gcnew System::Windows::Forms::Button());
			this->outputButton = (gcnew System::Windows::Forms::Button());
			this->histChartY = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->predictButton = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectModelWindow))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectImageWindow))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->runImageWindow))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->histChartY))->BeginInit();
			this->SuspendLayout();
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// dcScoreButton
			// 
			this->dcScoreButton->Location = System::Drawing::Point(13, 88);
			this->dcScoreButton->Name = L"dcScoreButton";
			this->dcScoreButton->Size = System::Drawing::Size(90, 26);
			this->dcScoreButton->TabIndex = 3;
			this->dcScoreButton->Text = L"DC score";
			this->dcScoreButton->UseVisualStyleBackColor = true;
			this->dcScoreButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::dcScoreButton_Click);
			// 
			// loadTestButton
			// 
			this->loadTestButton->Location = System::Drawing::Point(13, 21);
			this->loadTestButton->Name = L"loadTestButton";
			this->loadTestButton->Size = System::Drawing::Size(90, 29);
			this->loadTestButton->TabIndex = 0;
			this->loadTestButton->Text = L"Load test data";
			this->loadTestButton->UseVisualStyleBackColor = true;
			this->loadTestButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::loadTestButton_Click);
			// 
			// selectModelWindow
			// 
			this->selectModelWindow->Location = System::Drawing::Point(737, 30);
			this->selectModelWindow->Name = L"selectModelWindow";
			this->selectModelWindow->Size = System::Drawing::Size(224, 357);
			this->selectModelWindow->TabIndex = 2;
			this->selectModelWindow->TabStop = false;
			// 
			// selectImageWindow
			// 
			this->selectImageWindow->Location = System::Drawing::Point(498, 30);
			this->selectImageWindow->Name = L"selectImageWindow";
			this->selectImageWindow->Size = System::Drawing::Size(214, 357);
			this->selectImageWindow->TabIndex = 1;
			this->selectImageWindow->TabStop = false;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->closeButton);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->resultscale);
			this->groupBox1->Controls->Add(this->histButton);
			this->groupBox1->Controls->Add(this->addtoButton);
			this->groupBox1->Controls->Add(this->laplaButton);
			this->groupBox1->Controls->Add(this->erosionTime);
			this->groupBox1->Controls->Add(this->erosionButton);
			this->groupBox1->Controls->Add(this->highSet);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Controls->Add(this->bandPaButton);
			this->groupBox1->Controls->Add(this->lowSet);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->label3);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->maxthreSet);
			this->groupBox1->Controls->Add(this->threButton);
			this->groupBox1->Controls->Add(this->sobelSelect);
			this->groupBox1->Controls->Add(this->sobelButton);
			this->groupBox1->Controls->Add(this->filterTimes);
			this->groupBox1->Controls->Add(this->meanFilterButton);
			this->groupBox1->Location = System::Drawing::Point(24, 30);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(240, 278);
			this->groupBox1->TabIndex = 4;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Pre-processing";
			// 
			// closeButton
			// 
			this->closeButton->Location = System::Drawing::Point(16, 175);
			this->closeButton->Name = L"closeButton";
			this->closeButton->Size = System::Drawing::Size(75, 23);
			this->closeButton->TabIndex = 21;
			this->closeButton->Text = L"Close";
			this->closeButton->UseVisualStyleBackColor = true;
			this->closeButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::closeButton_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(116, 255);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(55, 12);
			this->label8->TabIndex = 20;
			this->label8->Text = L"result scale";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(164, 156);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(29, 12);
			this->label7->TabIndex = 19;
			this->label7->Text = L"times";
			// 
			// resultscale
			// 
			this->resultscale->Location = System::Drawing::Point(180, 246);
			this->resultscale->Name = L"resultscale";
			this->resultscale->Size = System::Drawing::Size(30, 22);
			this->resultscale->TabIndex = 16;
			this->resultscale->Text = L"0.5";
			this->resultscale->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// histButton
			// 
			this->histButton->Location = System::Drawing::Point(15, 244);
			this->histButton->Name = L"histButton";
			this->histButton->Size = System::Drawing::Size(75, 23);
			this->histButton->TabIndex = 18;
			this->histButton->Text = L"Histogram";
			this->histButton->UseVisualStyleBackColor = true;
			this->histButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::histButton_Click);
			// 
			// addtoButton
			// 
			this->addtoButton->Location = System::Drawing::Point(116, 205);
			this->addtoButton->Name = L"addtoButton";
			this->addtoButton->Size = System::Drawing::Size(75, 23);
			this->addtoButton->TabIndex = 17;
			this->addtoButton->Text = L"Mask";
			this->addtoButton->UseVisualStyleBackColor = true;
			this->addtoButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::addtoButton_Click);
			// 
			// laplaButton
			// 
			this->laplaButton->Location = System::Drawing::Point(16, 206);
			this->laplaButton->Name = L"laplaButton";
			this->laplaButton->Size = System::Drawing::Size(75, 23);
			this->laplaButton->TabIndex = 16;
			this->laplaButton->Text = L"Laplacian";
			this->laplaButton->UseVisualStyleBackColor = true;
			this->laplaButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::laplaButton_Click);
			// 
			// erosionTime
			// 
			this->erosionTime->Location = System::Drawing::Point(118, 147);
			this->erosionTime->Name = L"erosionTime";
			this->erosionTime->Size = System::Drawing::Size(30, 22);
			this->erosionTime->TabIndex = 15;
			this->erosionTime->Text = L"3";
			this->erosionTime->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// erosionButton
			// 
			this->erosionButton->Location = System::Drawing::Point(15, 145);
			this->erosionButton->Name = L"erosionButton";
			this->erosionButton->Size = System::Drawing::Size(75, 23);
			this->erosionButton->TabIndex = 13;
			this->erosionButton->Text = L"Erosion";
			this->erosionButton->UseVisualStyleBackColor = true;
			this->erosionButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::erosionButton_Click);
			// 
			// highSet
			// 
			this->highSet->Location = System::Drawing::Point(174, 118);
			this->highSet->Name = L"highSet";
			this->highSet->Size = System::Drawing::Size(30, 22);
			this->highSet->TabIndex = 10;
			this->highSet->Text = L"98";
			this->highSet->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(154, 127);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(14, 12);
			this->label6->TabIndex = 12;
			this->label6->Text = L"to";
			// 
			// bandPaButton
			// 
			this->bandPaButton->Location = System::Drawing::Point(15, 116);
			this->bandPaButton->Name = L"bandPaButton";
			this->bandPaButton->Size = System::Drawing::Size(75, 23);
			this->bandPaButton->TabIndex = 11;
			this->bandPaButton->Text = L"Band pass";
			this->bandPaButton->UseVisualStyleBackColor = true;
			this->bandPaButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::bandPaButton_Click);
			// 
			// lowSet
			// 
			this->lowSet->Location = System::Drawing::Point(118, 118);
			this->lowSet->Name = L"lowSet";
			this->lowSet->Size = System::Drawing::Size(30, 22);
			this->lowSet->TabIndex = 9;
			this->lowSet->Text = L"60";
			this->lowSet->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(116, 95);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(25, 12);
			this->label4->TabIndex = 10;
			this->label4->Text = L"max";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(213, 95);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(14, 12);
			this->label3->TabIndex = 9;
			this->label3->Text = L"%";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(196, 67);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(31, 12);
			this->label2->TabIndex = 8;
			this->label2->Text = L"mode";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(196, 35);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(29, 12);
			this->label1->TabIndex = 7;
			this->label1->Text = L"times";
			// 
			// maxthreSet
			// 
			this->maxthreSet->Location = System::Drawing::Point(147, 85);
			this->maxthreSet->Name = L"maxthreSet";
			this->maxthreSet->Size = System::Drawing::Size(59, 22);
			this->maxthreSet->TabIndex = 6;
			this->maxthreSet->Text = L"50";
			this->maxthreSet->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// threButton
			// 
			this->threButton->Location = System::Drawing::Point(15, 84);
			this->threButton->Name = L"threButton";
			this->threButton->Size = System::Drawing::Size(75, 23);
			this->threButton->TabIndex = 5;
			this->threButton->Text = L"Threshold";
			this->threButton->UseVisualStyleBackColor = true;
			this->threButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::threButton_Click);
			// 
			// sobelSelect
			// 
			this->sobelSelect->FormattingEnabled = true;
			this->sobelSelect->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"combined", L"sobel_x", L"sobel_y" });
			this->sobelSelect->Location = System::Drawing::Point(118, 58);
			this->sobelSelect->Name = L"sobelSelect";
			this->sobelSelect->Size = System::Drawing::Size(71, 20);
			this->sobelSelect->TabIndex = 4;
			this->sobelSelect->Text = L"combined";
			// 
			// sobelButton
			// 
			this->sobelButton->Location = System::Drawing::Point(15, 55);
			this->sobelButton->Name = L"sobelButton";
			this->sobelButton->Size = System::Drawing::Size(75, 23);
			this->sobelButton->TabIndex = 2;
			this->sobelButton->Text = L"Sobel";
			this->sobelButton->UseVisualStyleBackColor = true;
			this->sobelButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::sobelButton_Click);
			// 
			// filterTimes
			// 
			this->filterTimes->Location = System::Drawing::Point(118, 26);
			this->filterTimes->Name = L"filterTimes";
			this->filterTimes->Size = System::Drawing::Size(71, 22);
			this->filterTimes->TabIndex = 1;
			this->filterTimes->Text = L"3";
			this->filterTimes->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// meanFilterButton
			// 
			this->meanFilterButton->Location = System::Drawing::Point(15, 26);
			this->meanFilterButton->Name = L"meanFilterButton";
			this->meanFilterButton->Size = System::Drawing::Size(75, 23);
			this->meanFilterButton->TabIndex = 0;
			this->meanFilterButton->Text = L"Mean filter";
			this->meanFilterButton->UseVisualStyleBackColor = true;
			this->meanFilterButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::meanFilterButton_Click);
			// 
			// detButton
			// 
			this->detButton->Location = System::Drawing::Point(270, 565);
			this->detButton->Name = L"detButton";
			this->detButton->Size = System::Drawing::Size(75, 23);
			this->detButton->TabIndex = 13;
			this->detButton->Text = L"Detection";
			this->detButton->UseVisualStyleBackColor = true;
			this->detButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::detButton_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->imgGeButton);
			this->groupBox2->Controls->Add(this->compareButton);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->randGeneButton);
			this->groupBox2->Controls->Add(this->NumOfNewdata);
			this->groupBox2->Location = System::Drawing::Point(24, 594);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(238, 103);
			this->groupBox2->TabIndex = 5;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Generate Pre-train dataset";
			// 
			// imgGeButton
			// 
			this->imgGeButton->Location = System::Drawing::Point(15, 22);
			this->imgGeButton->Name = L"imgGeButton";
			this->imgGeButton->Size = System::Drawing::Size(75, 23);
			this->imgGeButton->TabIndex = 10;
			this->imgGeButton->Text = L"Img Generate";
			this->imgGeButton->UseVisualStyleBackColor = true;
			this->imgGeButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::imgGeButton_Click);
			// 
			// compareButton
			// 
			this->compareButton->Location = System::Drawing::Point(114, 22);
			this->compareButton->Name = L"compareButton";
			this->compareButton->Size = System::Drawing::Size(75, 23);
			this->compareButton->TabIndex = 15;
			this->compareButton->Text = L"Compare";
			this->compareButton->UseVisualStyleBackColor = true;
			this->compareButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::compareButton_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(195, 78);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(37, 12);
			this->label5->TabIndex = 9;
			this->label5->Text = L"picture";
			// 
			// randGeneButton
			// 
			this->randGeneButton->Location = System::Drawing::Point(14, 49);
			this->randGeneButton->Name = L"randGeneButton";
			this->randGeneButton->Size = System::Drawing::Size(75, 41);
			this->randGeneButton->TabIndex = 3;
			this->randGeneButton->Text = L"Randomly Generate";
			this->randGeneButton->UseVisualStyleBackColor = true;
			this->randGeneButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::randGeneButton_Click);
			// 
			// NumOfNewdata
			// 
			this->NumOfNewdata->Location = System::Drawing::Point(116, 68);
			this->NumOfNewdata->Name = L"NumOfNewdata";
			this->NumOfNewdata->Size = System::Drawing::Size(71, 22);
			this->NumOfNewdata->TabIndex = 2;
			this->NumOfNewdata->Text = L"60";
			this->NumOfNewdata->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->predictButton);
			this->groupBox3->Location = System::Drawing::Point(24, 715);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(240, 44);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Training U-net model";
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->erosionTimes);
			this->groupBox4->Controls->Add(this->loadModelButton);
			this->groupBox4->Controls->Add(this->loadTestButton);
			this->groupBox4->Controls->Add(this->dcScoreButton);
			this->groupBox4->Location = System::Drawing::Point(24, 765);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(240, 120);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Evaluate";
			// 
			// erosionTimes
			// 
			this->erosionTimes->Location = System::Drawing::Point(141, 92);
			this->erosionTimes->Name = L"erosionTimes";
			this->erosionTimes->Size = System::Drawing::Size(67, 22);
			this->erosionTimes->TabIndex = 5;
			this->erosionTimes->Text = L"3";
			this->erosionTimes->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// loadModelButton
			// 
			this->loadModelButton->Location = System::Drawing::Point(13, 56);
			this->loadModelButton->Name = L"loadModelButton";
			this->loadModelButton->Size = System::Drawing::Size(90, 26);
			this->loadModelButton->TabIndex = 4;
			this->loadModelButton->Text = L"Load model";
			this->loadModelButton->UseVisualStyleBackColor = true;
			this->loadModelButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::loadModelButton_Click);
			// 
			// runImageWindow
			// 
			this->runImageWindow->Location = System::Drawing::Point(1026, 30);
			this->runImageWindow->Name = L"runImageWindow";
			this->runImageWindow->Size = System::Drawing::Size(227, 357);
			this->runImageWindow->TabIndex = 8;
			this->runImageWindow->TabStop = false;
			// 
			// undoButton
			// 
			this->undoButton->Location = System::Drawing::Point(270, 285);
			this->undoButton->Name = L"undoButton";
			this->undoButton->Size = System::Drawing::Size(75, 23);
			this->undoButton->TabIndex = 9;
			this->undoButton->Text = L"Undo";
			this->undoButton->UseVisualStyleBackColor = true;
			this->undoButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::undoButton_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->histYButton);
			this->groupBox5->Controls->Add(this->localHistButton);
			this->groupBox5->Controls->Add(this->localOtsuButton);
			this->groupBox5->Controls->Add(this->localbandButton);
			this->groupBox5->Controls->Add(this->bypassButton);
			this->groupBox5->Controls->Add(this->extractButton);
			this->groupBox5->Controls->Add(this->shiftButton);
			this->groupBox5->Controls->Add(this->polyfitButton);
			this->groupBox5->Controls->Add(this->smoothButton);
			this->groupBox5->Controls->Add(this->detSpineButton);
			this->groupBox5->Location = System::Drawing::Point(24, 314);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(234, 274);
			this->groupBox5->TabIndex = 14;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"Detection";
			// 
			// histYButton
			// 
			this->histYButton->Location = System::Drawing::Point(15, 232);
			this->histYButton->Name = L"histYButton";
			this->histYButton->Size = System::Drawing::Size(75, 23);
			this->histYButton->TabIndex = 23;
			this->histYButton->Text = L"Y histogram";
			this->histYButton->UseVisualStyleBackColor = true;
			this->histYButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::histYButton_Click);
			// 
			// localHistButton
			// 
			this->localHistButton->Location = System::Drawing::Point(15, 170);
			this->localHistButton->Name = L"localHistButton";
			this->localHistButton->Size = System::Drawing::Size(207, 23);
			this->localHistButton->TabIndex = 22;
			this->localHistButton->Text = L"local Histogram";
			this->localHistButton->UseVisualStyleBackColor = true;
			this->localHistButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::localHistButton_Click);
			// 
			// localOtsuButton
			// 
			this->localOtsuButton->Location = System::Drawing::Point(122, 202);
			this->localOtsuButton->Name = L"localOtsuButton";
			this->localOtsuButton->Size = System::Drawing::Size(100, 23);
			this->localOtsuButton->TabIndex = 21;
			this->localOtsuButton->Text = L"localOtsu";
			this->localOtsuButton->UseVisualStyleBackColor = true;
			this->localOtsuButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::localOtsuButton_Click);
			// 
			// localbandButton
			// 
			this->localbandButton->Location = System::Drawing::Point(15, 202);
			this->localbandButton->Name = L"localbandButton";
			this->localbandButton->Size = System::Drawing::Size(90, 23);
			this->localbandButton->TabIndex = 20;
			this->localbandButton->Text = L"local BandPass";
			this->localbandButton->UseVisualStyleBackColor = true;
			this->localbandButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::localbandButton_Click);
			// 
			// bypassButton
			// 
			this->bypassButton->Location = System::Drawing::Point(15, 140);
			this->bypassButton->Name = L"bypassButton";
			this->bypassButton->Size = System::Drawing::Size(207, 23);
			this->bypassButton->TabIndex = 19;
			this->bypassButton->Text = L"bypass";
			this->bypassButton->UseVisualStyleBackColor = true;
			this->bypassButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::bypassButton_Click);
			// 
			// extractButton
			// 
			this->extractButton->Location = System::Drawing::Point(15, 111);
			this->extractButton->Name = L"extractButton";
			this->extractButton->Size = System::Drawing::Size(207, 23);
			this->extractButton->TabIndex = 18;
			this->extractButton->Text = L"extract window";
			this->extractButton->UseVisualStyleBackColor = true;
			this->extractButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::extractButton_Click);
			// 
			// shiftButton
			// 
			this->shiftButton->Location = System::Drawing::Point(15, 81);
			this->shiftButton->Name = L"shiftButton";
			this->shiftButton->Size = System::Drawing::Size(207, 23);
			this->shiftButton->TabIndex = 17;
			this->shiftButton->Text = L"shift Vertebrae";
			this->shiftButton->UseVisualStyleBackColor = true;
			this->shiftButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::shiftButton_Click);
			// 
			// polyfitButton
			// 
			this->polyfitButton->Location = System::Drawing::Point(147, 51);
			this->polyfitButton->Name = L"polyfitButton";
			this->polyfitButton->Size = System::Drawing::Size(75, 23);
			this->polyfitButton->TabIndex = 16;
			this->polyfitButton->Text = L"Polyfit";
			this->polyfitButton->UseVisualStyleBackColor = true;
			// 
			// smoothButton
			// 
			this->smoothButton->Location = System::Drawing::Point(15, 51);
			this->smoothButton->Name = L"smoothButton";
			this->smoothButton->Size = System::Drawing::Size(75, 23);
			this->smoothButton->TabIndex = 15;
			this->smoothButton->Text = L"Smooth";
			this->smoothButton->UseVisualStyleBackColor = true;
			this->smoothButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::smoothButton_Click);
			// 
			// detSpineButton
			// 
			this->detSpineButton->Location = System::Drawing::Point(15, 22);
			this->detSpineButton->Name = L"detSpineButton";
			this->detSpineButton->Size = System::Drawing::Size(210, 23);
			this->detSpineButton->TabIndex = 14;
			this->detSpineButton->Text = L"Detection Spine";
			this->detSpineButton->UseVisualStyleBackColor = true;
			this->detSpineButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::detSpineButton_Click);
			// 
			// outputButton
			// 
			this->outputButton->Location = System::Drawing::Point(270, 256);
			this->outputButton->Name = L"outputButton";
			this->outputButton->Size = System::Drawing::Size(75, 23);
			this->outputButton->TabIndex = 16;
			this->outputButton->Text = L"Save";
			this->outputButton->UseVisualStyleBackColor = true;
			this->outputButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::outputButton_Click);
			// 
			// histChartY
			// 
			chartArea1->Name = L"ChartArea1";
			this->histChartY->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->histChartY->Legends->Add(legend1);
			this->histChartY->Location = System::Drawing::Point(604, 747);
			this->histChartY->Name = L"histChartY";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->Name = L"Series1";
			this->histChartY->Series->Add(series1);
			this->histChartY->Size = System::Drawing::Size(500, 132);
			this->histChartY->TabIndex = 17;
			this->histChartY->Text = L"chart1";
			// 
			// predictButton
			// 
			this->predictButton->Location = System::Drawing::Point(13, 21);
			this->predictButton->Name = L"predictButton";
			this->predictButton->Size = System::Drawing::Size(86, 23);
			this->predictButton->TabIndex = 6;
			this->predictButton->Text = L"predict";
			this->predictButton->UseVisualStyleBackColor = true;
			this->predictButton->Click += gcnew System::EventHandler(this, &DIP_HW2_Form::predictButton_Click);
			// 
			// DIP_HW2_Form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1284, 897);
			this->Controls->Add(this->histChartY);
			this->Controls->Add(this->outputButton);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->undoButton);
			this->Controls->Add(this->runImageWindow);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->detButton);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->selectModelWindow);
			this->Controls->Add(this->selectImageWindow);
			this->Name = L"DIP_HW2_Form";
			this->Text = L"DIP_HW2_Form";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectModelWindow))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->selectImageWindow))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->runImageWindow))->EndInit();
			this->groupBox5->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->histChartY))->EndInit();
			this->ResumeLayout(false);

		}

#pragma endregion

	/* Define the Data structure */
	enum class Direction { up, down, left, right };
	cliext::vector<Bitmap^> imgs, masks, results;
	Bitmap^ mask;
	Bitmap^ temp;

	int filterHeight = 3;
	int filterWidth = 3;
	int Height, Width;

	void updateParameters(Bitmap^ ori) {
		Height = ori->Height;
		Width = ori->Width;
		return;
	}

	Bitmap^ downsize(Bitmap^ img, double scale) {
		updateParameters(img);

		int new_Height = round(scale * Height);
		int new_Width = round(scale * Width);
		int i_new, j_new;
		Mat S("Stretching", scale, scale);
		temp = gcnew Bitmap(new_Width, new_Height);

		/* Projection to the new plane */
		for (int i = 0; i < Height; i++) {
			for (int j = 0; j < Width; j++) {
				Color RGB =img->GetPixel(j, i);

				Mat point(3, 1, "point");
				point.data[0, 0] = i;
				point.data[1, 0] = j;

				Mat point_new = S * point;
				i_new = point_new.data[0, 0];
				j_new = point_new.data[1, 0];

				temp->SetPixel(j_new, i_new, Color::FromArgb(RGB.R, RGB.G, RGB.B));
			}
		}
		return temp;
	}

	void showImage() {
		if (imgs.size() != 0) {
			double scale = System::Double::Parse(resultscale->Text);
			temp = downsize(imgs.front_item, scale);
			selectImageWindow->Size = Drawing::Size(temp->Width, temp->Height);
			selectImageWindow->Image = temp;
		}

		if (masks.size() != 0) {
			double scale = System::Double::Parse(resultscale->Text);
			temp = downsize(masks.back_item, scale);
			selectModelWindow->Size = Drawing::Size(temp->Width, temp->Height);
			selectModelWindow->Image = temp;
		}

		if (results.size() != 0) {
			double scale = System::Double::Parse(resultscale->Text);
			temp = downsize(results.back_item, scale);
			runImageWindow->Size = Drawing::Size(temp->Width, temp->Height);
			runImageWindow->Image = temp;
		}
		return;
	}

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

	Bitmap^ cloneImage(Bitmap^ resource) {
		RectangleF cloneRect = RectangleF(0, 0, resource->Width, resource->Height);
		PixelFormat format = resource->PixelFormat;
		return resource->Clone(cloneRect, format);
	}

	ref class Mat {
	public:
		int height, width;
		double r, parameter;
		String^ name;
		cli::array<double, 2> ^data; // 2D - array
		int N;

		/* Constructor */
		Mat(int m, int n, String^ s)
		{
			height = m; width = n; name = s;
			if (height == width) N = m;

			if (name == "mean") r = (double)1 / 9;
			else if (name == "median" || name == "zero") r = 0;
			else r = 1;

			data = gcnew cli::array<double, 2>(height, width);
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < width; j++) {
					data[i, j] = r;
				}
			}

			if (name == "test")
				data = gcnew cli::array<double, 2>(height, width)
			{ {5, -2, 2, 7},
			{ 1, 0, 0, 3 },
			{ -3, 1, 5, 0 },
			{ 3, -1, -9, 4 }
			};

		}

		/* Constructor Bitmap to Mat*/
		Mat(Bitmap^ ori, String^ s) {
			height = ori->Height; width = ori->Width; name = s;
			data = gcnew cli::array<double, 2>(height, width);
			int gray;
			for (int i = 0; i < ori->Height; i++) {
				for (int j = 0; j < ori->Width; j++) {
					Color RGB = ori->GetPixel(j, i);
					gray = RGB.R;
					gray = gray >= 255 ? 255 : gray; // clip to 255
					data[i, j] = gray;
				}
			}
		}

		Bitmap^ toBitmap() {
			Bitmap^ bitmap = gcnew Bitmap(width, height);
			int gray;
			for (int i = 0; i < height; i++) {
				for (int j = 0; j < width; j++) {
					gray = data[i, j];
					bitmap->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
				}
			}
			return bitmap;
		}

		/* Constructor Sobel */
		Mat(String^ s) {
			height = 3; width = 3; name = s;
			if (name == "sobel_x")
				data = gcnew cli::array<double, 2>(height, width)
			{ {1, 0, -1 },
			{ 2, 0, -2 },
			{ 1, 0, -1 }
			};
			else if (name == "sobel_y")
				data = gcnew cli::array<double, 2>(height, width)
			{ { 1, 2, 1 },
			{ 0, 0, 0 },
			{ -1,-2,-1 }
			};
			else if (name == "erosion")
				data = gcnew cli::array<double, 2>(height, width)
			{ { 0, 1, 0 },
			{ 1, 1, 1 },
			{ 0, 1, 0 }
			};
			else if (name == "laplacian") 
				data = gcnew cli::array<double, 2>(height, width)
			{ { 1, 1, 1 },
			{ 1, -8, 1 },
			{ 1, 1, 1 }
			};
			else if (name == "close")
				data = gcnew cli::array<double, 2>(height, width)
			{ { 1, 1, 1 },
			{ 1, 1, 1 },
			{ 1, 1, 1 }
			};
		}

		/* Constructor Scale */
		Mat(String^ s, double cx, double cy)
		{
			height = 3; width = 3; name = s;

			if (s == "Stretching")
				data = gcnew cli::array<double, 2>(height, width)
			{ {cx, 0, 0 },
			{ 0, cy, 0 },
			{ 0,  0, 1 }
			};
		}

		/* Copy constructor*/
		Mat(const Mat %k) { // ref class copy constructor
			height = k.height;
			width = k.width;
			name = k.name;
			if (k.height == k.width) N = k.height;

			this->data = gcnew cli::array<double, 2>(height, width);
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

		/* at */
		double at(Point p) {
			return data[p.X, p.Y];
		}

		void set(Point p, double v) {
			data[p.X, p.Y] = v;
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

		/* Transpose */
		Mat T() {
			Mat result(this->width, this->height, "zero");

			for (int i = 0; i < result.height; i++) {
				for (int j = 0; j < result.width; j++) {
					result.data[i, j] = this->data[j, i];
				}
			}

			return result;
		}

		/* Inverse */
		Mat Inv() {
			
			cli::array<double, 2> ^inver = gcnew cli::array<double, 2>(N, N);

			inverse(this->data, inver, N);
		
			
			Mat inv(N, N, "zero");
			inv.data = inver;
			return inv;

		}

		void getCofactor(cli::array<double, 2> ^A, cli::array<double, 2>^ temp, int p, int q, int n, int N)
		{
			int i = 0, j = 0;

			for (int row = 0; row < n; row++)
			{
				for (int col = 0; col < n; col++)
				{
					if (row != p && col != q)
					{
						temp[i, j++] = A[row, col];

						if (j == n - 1)
						{
							j = 0;
							i++;
						}
					}
				}
			}
		}

		int determinant(cli::array<double, 2> ^A, int n, int N)
		{
			int D = 0;

			if (n == 1)
				return A[0, 0];

			cli::array<double, 2> ^temp = gcnew cli::array<double, 2>(N, N); // To store cofactors 

			int sign = 1;  // To store sign multiplier 

			 // Iterate for each element of first row 
			for (int f = 0; f < n; f++)
			{
				// Getting Cofactor of A[0][f] 
				getCofactor(A, temp, 0, f, n, N);
				D += sign * A[0, f] * determinant(temp, n - 1, N);

				// terms are to be added with alternate sign 
				sign = -sign;
			}

			return D;
		}

		void adjoint(cli::array<double, 2> ^A, cli::array<double, 2> ^adj, int N)
		{
			if (N == 1)
			{
				adj[0, 0] = 1;
				return;
			}

			// temp is used to store cofactors of A[][] 
			int sign = 1;
			cli::array<double, 2> ^temp = gcnew cli::array<double, 2>(N, N);

			for (int i = 0; i < N; i++)
			{
				for (int j = 0; j < N; j++)
				{
					// Get cofactor of A[i][j] 
					getCofactor(A, temp, i, j, N, N);

					// sign of adj[j][i] positive if sum of row 
					// and column indexes is even. 
					sign = ((i + j) % 2 == 0) ? 1 : -1;

					// Interchanging rows and columns to get the 
					// transpose of the cofactor matrix 
					adj[j, i] = (sign)*(determinant(temp, N - 1, N));
				}
			}
		}

		bool inverse(cli::array<double, 2> ^A, cli::array<double, 2> ^inverse, int N)
		{
			// Find determinant of A[][] 
			int det = determinant(A, N, N);
			if (det == 0)
			{
				cout << "Singular matrix, can't find its inverse";
				return false;
			}

			// Find adjoint 
			cli::array<double, 2> ^adj = gcnew cli::array<double, 2>(N, N);
			adjoint(A, adj, N);

			// Find Inverse using formula "inverse(A) = adj(A)/det(A)" 
			for (int i = 0; i < N; i++)
				for (int j = 0; j < N; j++)
					inverse[i, j] = adj[i, j] / double(det);

			return true;
		}

	};

	void applyFilter(Bitmap^ temp, Bitmap^ ori, Mat kernel, String^ name) {
		/* mean, sobel_x, sobel_y */
		if (name == "mean" || name == "sobel_x" || name == "sobel_y" || name == "laplacian" || name == "close")
			for (int i = 1; i < Height - 1; i++) {
				for (int j = 1; j < Width - 1; j++) {
					double gray = 0, sum = 0, s = 0;
					for (int h = i - 1; h < i + filterHeight - 1; h++) {
						for (int w = j - 1; w < j + filterWidth - 1; w++) {
							Color RGB = ori->GetPixel(w, h); // Getpixel (y,x)
							gray = RGB.R;
							s += kernel.data[h - i + 1, w - j + 1] * gray;
							sum = sqrt(s*s);
							sum = sum > 255 ? 255 : sum;
							temp->SetPixel(j, i, Color::FromArgb(RGB.A, sum, sum, sum));
						}
					}
				}
			}

		/* Erosion for gray-scale*/
		else if (name == "erosion")
			for (int i = 1; i < Height - 1; i++) {
				for (int j = 1; j < Width - 1; j++) {
					double gray = 0, sum = 0;
					for (int h = i - 1; h < i + filterHeight - 1; h++) {
						for (int w = j - 1; w < j + filterWidth - 1; w++) {
							Color RGB = ori->GetPixel(w, h); // Getpixel (y,x)
							gray = RGB.R;
							sum += kernel.data[h - i + 1, w - j + 1] * gray;
						}
					}
					if (sum == 5 * 255) temp->SetPixel(j, i, Color::FromArgb(255, 255, 255));
					else temp->SetPixel(j, i, Color::FromArgb(0, 0, 0));
				}
			}
	}

	void threshold(Bitmap^ temp, int threshold) {
		updateParameters(temp);
		int gray;
		for (int i = 0; i < Height; i++) {
			for (int j = 0; j < Width; j++) {
				Color RGB = temp->GetPixel(j, i);
				gray = RGB.R;
				gray = gray >= threshold ? 255 : 0;
				temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
			}
		}
	}

	void bandpass(Bitmap^ temp, int low, int high) {
		updateParameters(temp);
		int gray;
		for (int i = 0; i < Height; i++) {
			for (int j = 0; j < Width; j++) {
				Color RGB = temp->GetPixel(j, i);
				gray = RGB.R;
				gray = gray >= high ? 0 : gray;
				gray = gray <= low ? 0 : gray;
				temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
			}
		}
	}

	void erosion(Bitmap^ temp, Bitmap^ ori) {
		paddingImage(ori, 1);
		updateParameters(ori);
		Mat kernel("erosion");
		kernel.show();
		applyFilter(temp, ori, kernel, kernel.name);
	}

	void close(Bitmap^ temp, Bitmap^ ori) {
		paddingImage(ori, 1);
		updateParameters(ori);
		Mat kernel("close");
		kernel.show();
		applyFilter(temp, ori, kernel, kernel.name);
	}

	void meanfilter(Bitmap^ temp, Bitmap^ ori) {
		paddingImage(ori, 1);
		updateParameters(ori);
		Mat meanfilter(ori->Height, ori->Width, "mean");
		applyFilter(temp, ori, meanfilter, meanfilter.name);
	}

	void sobel(Bitmap^ temp, Bitmap^ ori, String^ s) {
		paddingImage(ori, 1);
		updateParameters(ori);
		if (s == "combined") {
			Mat sobel_x("sobel_x");
			Mat sobel_y("sobel_y");

			for (int i = 1; i < Height - 1; i++) {
				for (int j = 1; j < Width - 1; j++) {
					double gray = 0, sum = 0, g_x = 0, g_y = 0;
					for (int h = i - 1; h < i + filterHeight - 1; h++) {
						for (int w = j - 1; w < j + filterWidth - 1; w++) {
							Color RGB = ori->GetPixel(w, h); // Getpixel (y,x)
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
		}
		else {
			Mat kernel(s);
			kernel.show();
			applyFilter(temp, ori, kernel, kernel.name);
		}
	}

	void laplacian(Bitmap^ temp, Bitmap^ ori) {
		paddingImage(ori, 1);
		updateParameters(ori);
		Mat kernel("laplacian");
		kernel.show();
		applyFilter(temp, ori, kernel, kernel.name);
	}

	void histogram(Bitmap^ temp, Bitmap^ ori) {
		updateParameters(ori);
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
			s[k] = (int)255 * sum;
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

	}
	
/////////////////////////// Parameters //////////////////////////////////	
	int down_shift = 12, see = 1, normalize_X = 1500, normalize_Y = 500;
	int window_height = 48;
	int window_width_U = 100, window_width_L = 150 , passwindow_width = 170;
	double neck = 0.25, heart = 0.6;

	void detectionSpine(Bitmap^ temp, Bitmap^ ori, cliext::vector<Point>^ vertebrae) {

		updateParameters(ori);
		Mat window(window_height, window_width_L, "window"); // 

		// start point 
		int maxScale = 1, maxScale_j = 0;
		int i = 0;

		for (int j = (Width / 2) - see; j < (Width / 2) + see; j++) {
			int gray = 0, sum = 0;
			for (int h = i; h < i + window.height; h++) {
				for (int w = j; w < j + window.width; w++) {
					Color RGB = ori->GetPixel(w, h); // Getpixel (y,x)
					gray = RGB.R;
					sum += window.data[h - i, w - j] * gray;
				}
			}
			if (maxScale < sum) {
				maxScale = sum;
				maxScale_j = j;
			}
		}

		vertebrae->push_back(Point(i, maxScale_j));
		nextVertebraePoint(temp, ori, window, Point(i, maxScale_j), down_shift, vertebrae);

	}

	void nextVertebraePoint(Bitmap^ &temp, Bitmap^ &ori, Mat window, Point start, int down_shift, cliext::vector<Point>^ &vertebrae) {
		
		int i = start.X + down_shift;
		
		if (i <= (double)ori->Height * neck) {
			window.width = window_width_U;
			down_shift = 12;
			see = 10;
		}
		else if ((double)ori->Height * neck < i && i <= (double)ori->Height * heart) {
			window.width = window_width_U;
			down_shift = 12;
			see = 5;
		}

		if (i < ori->Height - window.height) {
			int maxScale = 1, maxScale_j = 0;
			for (int j = start.Y - see; j < start.Y + see ; j++) {
				int gray = 0, sum = 0;
				for (int h = i; h < i + window.height; h++) {
					for (int w = j; w < j + window.width; w++) {
						if (w >= 500 || w < 0) continue;
						Color RGB = ori->GetPixel(w, h); // Getpixel (y,x)
						gray = RGB.R;
						sum += window.data[h - i, w - j] * gray;
					}
				}
				if (maxScale < sum) {
					maxScale = sum;
					maxScale_j = j;
				}
		
			}

			vertebrae->push_back(Point(i, maxScale_j));
			nextVertebraePoint(temp, ori, window, Point(i, maxScale_j), down_shift, vertebrae);
		}

	}

	void shiftVertebrae(cliext::vector<Point>^ vertebrae) {

		for (int i = 0; i < vertebrae->size(); i++) {
			if (vertebrae->at(i).X <= (double)Height * heart)
				vertebrae->at(i).Y = vertebrae->at(i).Y + (window_width_U / 2);
			else vertebrae->at(i).Y = vertebrae->at(i).Y + (window_width_L / 2);
		}
	}

	Mat polyfit(cliext::vector<Point>^ &vertebrae, int n) {
	//	for (int i = 0; i < vertebrae->size(); i++) cout << vertebrae->at(i).X << ", " << vertebrae->at(i).Y << endl;

		int size = vertebrae->size();

		int x_num = n + 1;

		Mat mat_u(size, x_num, "zero");
		Mat mat_y(size, 1, "zero");

		for (int i = 0; i < mat_u.height; ++i) {
			for (int j = 0; j < mat_u.width; ++j) {
				mat_u.data[i, j] = pow((double)vertebrae->at(i).X / normalize_X, j);
			}
		}

		for (int i = 0; i < mat_y.height; ++i) {
			mat_y.data[i, 0] = (double)vertebrae->at(i).Y / normalize_Y;
		} 

		Mat mat_k = (mat_u.T() * mat_u).Inv() * mat_u.T() * mat_y;

		return mat_k;

	}

	void fitVertebrae(cliext::vector<Point>^ &vertebrae) {
		
		/*
		int r = 1;

		cout << "vertebrae->size() " << vertebrae->size() << endl;
		cliext::vector<Point>^ newVertebrae = gcnew cliext::vector<Point>;
		int N = 10;
		
		for (int i = 0; i < vertebrae->size(); i += N) {
			cliext::vector<Point>^ tmpVertebrae = gcnew cliext::vector<Point>;

			if ((i + N) > vertebrae->size()) {
				N = vertebrae->size() % N;
			}

			for (int n = 0; n < N; n++) {
				tmpVertebrae->push_back(vertebrae->at(i + n));
			}

			Mat mat_k = polyfit(tmpVertebrae, r);
	
			for (int k = tmpVertebrae->at(0).X; k < tmpVertebrae->back_item.X; ++k) {
				Point ipt;
				ipt.X = k;
				ipt.Y = 0;
				for (int l = 0; l < r + 1; ++l) {
					ipt.Y += (double)mat_k.data[l, 0] * pow((double)k / normalize_X, l) * normalize_Y;
				}
				cout << "after fitting " << ipt.X << ", " << ipt.Y << endl;
				newVertebrae->push_back(Point(ipt.X, ipt.Y));
			}

			tmpVertebrae->clear();
		}*/

		int n = 5;
		Mat mat_k = polyfit(vertebrae, n);
		mat_k.show();

		cliext::vector<Point>^ newVertebrae = gcnew cliext::vector<Point>;

		for (int i = vertebrae->at(0).X; i < vertebrae->back_item.X; ++i) {
			Point ipt;
			ipt.X = i;
			ipt.Y = 0;
			for (int j = 0; j < n + 1; ++j) {
				ipt.Y += (double) mat_k.data[j, 0] * pow((double)i / normalize_X, j) * normalize_Y;
			}
			cout << ipt.X << ", " << ipt.Y << endl;
			newVertebrae->push_back(Point(ipt.X, ipt.Y));	
		} 

		/*
		for (int i = vertebrae->at(0).X; i < vertebrae->size(); ++i) {
			Point ipt;
			ipt.X = vertebrae->at(i).X;
			ipt.Y = 0;
			for (int j = 0; j < n + 1; ++j) {
				ipt.Y += (double)mat_k.data[j, 0] * pow((double)ipt.X / normalize_X, j) * normalize_Y;
			}
			cout << ipt.X << ", " << ipt.Y << endl;
			
			newVertebrae->push_back(Point(ipt.X, ipt.Y));

		}*/
		
		vertebrae =  newVertebrae;

	}

	void smoothVertebrae(cliext::vector<Point>^ vertebrae) {

		cout << vertebrae->size() << endl;
		/*
		int sum = 0, mean = 0, N = 10;

		for (int i = vertebrae->at(vertebrae->size() * 0.7).X; i < vertebrae->size(); i += N) {
			sum = 0; mean = 0;

			if ((i + N) > vertebrae->size()) {
				N = vertebrae->size() % N;
			}

			for (int n = 0; n < N; n++) {
				sum += vertebrae->at(i + n).Y;
			}

			mean = sum / N;
			for (int n = 0; n < N; n++) {
				vertebrae->at(i + n).Y = mean;
			}
		}*/
		

		
		int sum = 0, mean = 0, N = 10;

		for (int i = 0; i < vertebrae->size(); i += N) {
			sum = 0; mean = 0;

			if ((i + N) > vertebrae->size()) {
				N = vertebrae->size() % N;
			}

			for (int n = 0; n < N; n++) {
				sum += vertebrae->at(i + n).Y;
			}

			mean = sum / N;
			for (int n = 0; n < N; n++) {
				vertebrae->at(i + n).Y = mean;
			}
		}
		
		
	}

	void plotMidVertebrae(Bitmap^ temp, cliext::vector<Point>^ vertebrae) {
		for (int i = 0; i < vertebrae->size(); i++) {
			temp->SetPixel(vertebrae->at(i).Y, vertebrae->at(i).X, Color::FromArgb(255, 0, 0));
		}

	}

	void localHist(Bitmap^ temp, Bitmap^ ori, cliext::vector<Point>^ vertebrae) {
		
		Height = window_height; Width = passwindow_width;
		Mat tmp(window_height, passwindow_width, "tmp");
		for (int num_v = 0; num_v < vertebrae->size(); num_v++) {
			// Input the equalization of histogram 
			int gray;
			/* Assign to 2D matrix */
			for (int i = vertebrae->at(num_v).X; i < vertebrae->at(num_v).X + tmp.height; i++) {
				for (int j = vertebrae->at(num_v).Y - (tmp.width / 2); j < vertebrae->at(num_v).Y + (tmp.width / 2); j++) {
					if (j >= 500 || j < 0) continue;
					Color RGB = temp->GetPixel(j, i);
					gray = RGB.R;
					gray = gray > 255 ? 255 : gray; // clip to 255
					tmp.data[i - vertebrae->at(num_v).X, j - (vertebrae->at(num_v).Y - (tmp.width / 2))] = gray;
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
				s[k] = (int)255 * sum;
			}

			/* Inverse */
			for (int i = 0; i < Height; i++) {
				for (int j = 0; j < Width; j++) {
					gray = tmp.data[i, j];
					tmp.data[i, j] = s[gray];
				}
			}

			for (int i = vertebrae->at(num_v).X; i < vertebrae->at(num_v).X + tmp.height; i++) {
				for (int j = vertebrae->at(num_v).Y - (tmp.width / 2); j < vertebrae->at(num_v).Y + (tmp.width / 2); j++) {
					if (j >= 500 || j < 0) continue;
					gray = tmp.data[i - vertebrae->at(num_v).X, j - (vertebrae->at(num_v).Y - (tmp.width / 2))];
					temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
				}
			}

		}

		updateParameters(ori);

	}

	void localBandPass(Bitmap^ temp, Bitmap^ ori, cliext::vector<Point>^ vertebrae) {

		cout << "Local threshold ... " << endl;
		
		Mat window(window_height, passwindow_width, "window");
		for (int i = 0; i < vertebrae->size(); i++) {
			double max = 0, gray = 0, thre = 0.95;
			// Adaptly choose the threshold

			if (vertebrae->at(i).X <= (double)Height * 0.5) thre = 0.97;
			else if ((double)Height * neck < vertebrae->at(i).X && vertebrae->at(i).X <= (double)Height * heart) thre = 0.91;

			for (int h = vertebrae->at(i).X; h < vertebrae->at(i).X + window.height; h++) {
				for (int w = vertebrae->at(i).Y - (window.width / 2); w < vertebrae->at(i).Y + (window.width / 2); w++) {
					if (w >= 500 || w < 0) continue;
					max = max < ori->GetPixel(w, h).R ? ori->GetPixel(w, h).R : max;
				}
			}

			for (int h = vertebrae->at(i).X; h < vertebrae->at(i).X + window.height; h++) {
				for (int w = vertebrae->at(i).Y - (window.width / 2); w < vertebrae->at(i).Y + (window.width / 2); w++) {
					if (w >= 500 || w < 0) continue;
					gray = ori->GetPixel(w, h).R > max * thre ? 255 : 0;
					temp->SetPixel(w, h, Color::FromArgb(gray, gray, gray));
				}
			}
		}
		
	}

	void localOtsu(Bitmap^ temp, Bitmap^ ori, cliext::vector<Point>^ vertebrae) {

		cout << "Local Otsu threshold ... " << endl;
		Height = window_height; Width = passwindow_width;

		for (int num_v = 0; num_v < vertebrae->size(); num_v++) {
			// Input the equalization of histogram 
			Mat tmp(window_height, passwindow_width, "tmp");

			int gray;
			/* Assign to 2D matrix */
			for (int i = vertebrae->at(num_v).X; i < vertebrae->at(num_v).X + tmp.height; i++) {
				for (int j = vertebrae->at(num_v).Y - (tmp.width / 2); j < vertebrae->at(num_v).Y + (tmp.width / 2); j++) {
					Color RGB = ori->GetPixel(j, i);
					gray = RGB.R;
					gray = gray > 255 ? 255 : gray; // clip to 255
					tmp.data[i - vertebrae->at(num_v).X, j - (vertebrae->at(num_v).Y - (tmp.width / 2) )] = gray;
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
				s[k] = (int)255 * sum;
			}

			/* Inverse */
			for (int i = 0; i < Height; i++) {
				for (int j = 0; j < Width; j++) {
					gray = tmp.data[i, j];
					tmp.data[i, j] = s[gray];
				}
			}

			// 
			for (int i = 0; i < 256; i++) s[i] / (Height * Width);

			double max_k = 0, max_sigma = 0;
			for (int k = 0; k < 256; k++) {
				// Compute P1(k), P2(k)	
				double P1_k = 0, P2_k = 0;
				for (int i = 0; i <= k; i++) P1_k += s[i];
				for (int i = k + 1; i < 256; i++) P2_k += s[i];
//				cout << "P1_k = " << P1_k << ", 1 - P1_k = " << P2_k << endl;
				if (P1_k == 0 || P2_k == 0) continue;

				// Compute m_k, m_G
				double m_k = 0, m_G = 0;
				for (int i = 0; i < k; i++) m_k += (i * s[i]);
				for (int i = 0; i < 256; i++) m_G += (i * s[i]);
//				cout << "m_k = " << m_k << ", m_G = " << m_G << endl;

				// Compute sigmaB_k
				double sigmaB_k;
				sigmaB_k = (double)pow(((double)m_G - (double)m_k), 2) / ( ((double)P1_k * (1 - (double)P1_k)));
//				cout << "sigma = " << (double)pow(((double)m_G - (double)m_k), 2) << " / " << ((double)P1_k * (1 - (double)P1_k)) << endl;

				// Find max_k
				if (max_sigma < sigmaB_k) {
					max_sigma = sigmaB_k;
					max_k = k;
				}
				
//				cout << " =================== " << endl;

			}
			cout << "max_k = " << max_k << endl;

			// Threshold by max_k and Assign to Bitmap
			for (int i = vertebrae->at(num_v).X; i < vertebrae->at(num_v).X + tmp.height; i++) {
				for (int j = vertebrae->at(num_v).Y - (tmp.width / 2); j < vertebrae->at(num_v).Y + (tmp.width / 2); j++) {
					gray = tmp.data[i - vertebrae->at(num_v).X, j - (vertebrae->at(num_v).Y - (tmp.width / 2))];
					gray = gray > max_k*1.3 ? 255 : 0;
					temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
				}
			}
			// End 
		}

		

		



	}

	void extraVertebraeWindow(Bitmap^ temp, Bitmap^ ori, cliext::vector<Point>^ vertebrae) {

		Mat window(window_height, passwindow_width, "window");
		cout << "extraVertebraeWindow .. " << endl;

		for (int i = 0; i < vertebrae->size(); i++) {
			for (int h = vertebrae->at(i).X; h < vertebrae->at(i).X + window.height; h++) {
				for (int w = vertebrae->at(i).Y - (window.width / 2); w < vertebrae->at(i).Y + (window.width / 2); w++) {
					if (w >= 500 || w < 0) continue;
					temp->SetPixel(w, h, Color::FromArgb(255, 0, 0));
				}
			}
		}
		return;

	}

	void bypassVertebrae(Bitmap^ temp, Bitmap^ ori) {

		for (int i = 0; i < Height; i++) {
			for (int j = 0; j < Width; j++) {
				if (ori->GetPixel(j, i) != Color::FromArgb(255, 0, 0)) {
					temp->SetPixel(j, i, Color::FromArgb(0, 0, 0) );
				}
			}
		}

	}

	void plotHistY(Bitmap^ temp, Bitmap^ ori) {
		updateParameters(ori);
		Mat tmp(Height, 1, "tmp");

		int gray, sum;
	
		for (int i = 0; i < Height; i++) {
			sum = 0;
			for (int j = 0; j < Width; j++) {
				gray = temp->GetPixel(j, i).R;
				sum += gray;
			}
			tmp.data[i, 0] = sum;
		}

	
		for (int i = 0; i < Height; i++) histChartY->Series[0]->Points->AddXY(i, tmp.data[i, 0]);

	}

	void boundingBox(Bitmap^ temp, Bitmap^ ori, cliext::vector<Point>^ vertebrae) {

		Mat window(window_height, passwindow_width, "window");
		cout << "extraVertebraeWindow .. " << endl;

		for (int i = 0; i < vertebrae->size(); i++) {
			for (int h = vertebrae->at(i).X; h < vertebrae->at(i).X + window.height; h++) {
				for (int w = vertebrae->at(i).Y - (window.width / 2); w < vertebrae->at(i).Y + (window.width / 2); w++) {
					if (w >= 500 || w < 0) continue;
					temp->SetPixel(w, h, Color::FromArgb(255, 0, 0));
				}
			}
		}
		return;

	}
		
	void findRegions(Bitmap^ ori, cliext::vector<cliext::vector<Point>^>^ &regions) {
		paddingImage(ori, 1);
		updateParameters(ori);
		temp = cloneImage(ori);

		for (int i = 1; i < Height - 1; i++) {
			for (int j = 1; j < Width - 1; j++) {
				
				if (ori->GetPixel(j, i - 1).R == 0 && ori->GetPixel(j, i).R == 255) {
					cliext::vector<Point>^ region = gcnew cliext::vector<Point>;

					// follow Region 
					visitRegion(temp, region, i, j, 255, 250);
					regions->push_back(region);

					int shift_i = region->front_item.X;
					for (int k = 0; k < region->size(); k++) {
						if (region->at(k).X > shift_i) shift_i = region->at(k).X;
					}

					i = shift_i;
					j = 1;

					continue;
				}
				else continue;

			}
		}

	}

	void visitRegion(Bitmap^ clone_ori, cliext::vector<Point>^ &region_point,int x, int y, int region_color, int visited_color) {
		
		if (clone_ori->GetPixel(y, x).R == region_color) { // assume RGB.R is gray scale, region_color is 255
			region_point->push_back(Point(x, y));
			clone_ori->SetPixel(y, x, Color::FromArgb(visited_color, visited_color, visited_color)); // visited region color is 250

			visitRegion(clone_ori, region_point, x + 1, y, region_color, visited_color);
			visitRegion(clone_ori, region_point, x, y + 1, region_color, visited_color);
			visitRegion(clone_ori, region_point, x - 1, y, region_color, visited_color);
			visitRegion(clone_ori, region_point, x, y - 1, region_color, visited_color);
		}

	}

	double diceCoefficient(cliext::vector<Point>^ &region_g, cliext::vector<Point>^ &region_p) {

		int g_cross_p = 0;

		for (int i = 0; i < region_g->size(); i++)
			for (int j = 0; j < region_p->size(); j++) {
				if (region_g->at(i) == region_p->at(j)) g_cross_p += 1;
			}

		return ( (double) 2 * g_cross_p) / (region_g->size() + region_p->size());
	}


// Pre-Processing

private: System::Void undoButton_Click(System::Object^  sender, System::EventArgs^  e) {
	imgs.pop_back();
	results.pop_back();
	showImage();
}

private: System::Void meanFilterButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int times = System::Int32::Parse(filterTimes->Text);
	for (int i = 0; i < times; i++) {
		temp = cloneImage(imgs.back_item);
		meanfilter(temp, imgs.back_item);
		imgs.push_back(temp);
	}
	results.push_back(temp);
	showImage();
}

private: System::Void sobelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	String^ mode = sobelSelect->Text;
	temp = cloneImage(imgs.back_item);
	sobel(temp, imgs.back_item, mode);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();
}

private: System::Void threButton_Click(System::Object^  sender, System::EventArgs^  e) {
	double thre = (double) System::Int32::Parse(maxthreSet->Text) / 100;
	temp = cloneImage(imgs.back_item);
	updateParameters(temp);

	int max = 0;
	for (int i = 0; i < Height; i++) 
		for (int j = 0; j < Width; j++) {
			max = temp->GetPixel(j, i).R > max ? temp->GetPixel(j, i).R : max;
		}

	threshold(temp, thre * max);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();
}

private: System::Void bandPaButton_Click(System::Object^  sender, System::EventArgs^  e) {
	double high = (double)System::Int32::Parse(highSet->Text) / 100;
	double low = (double)System::Int32::Parse(lowSet->Text) / 100;
	temp = cloneImage(imgs.back_item);
	updateParameters(temp);
	int max = 0;
	for (int i = 0; i < Height; i++)
		for (int j = 0; j < Width; j++) {
			max = temp->GetPixel(j, i).R > max ? temp->GetPixel(j, i).R : max;
		}

	bandpass(temp, low*max, high*max);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();
}

private: System::Void erosionButton_Click(System::Object^  sender, System::EventArgs^  e) {
	int times = System::Int32::Parse(erosionTime->Text);
	for (int i = 0; i < times; i++) {
		temp = cloneImage(imgs.back_item);
		erosion(temp, imgs.back_item);
		imgs.push_back(temp);
	}
	results.push_back(temp);
	showImage();

}

private: System::Void closeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = cloneImage(imgs.back_item);
	close(temp, imgs.back_item);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();
}

private: System::Void laplaButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.back_item);
	laplacian(temp, imgs.back_item);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}

private: System::Void addtoButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.back_item);
	int gray;
	for (int i = 0; i < Height; i++) {
		for (int j = 0; j < Width; j++) {
			gray = imgs.at(imgs.size() - 2)->GetPixel(j, i).R - temp->GetPixel(j, i).R;
			gray = gray < 0 ? 0 : gray;
			gray = gray > 256 ? 256 : gray;
			temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
		}
	}

	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}

private: System::Void histButton_Click(System::Object^  sender, System::EventArgs^  e) {
	
	temp = cloneImage(imgs.back_item);
	histogram(temp, imgs.back_item);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}


/// Generate training set

private: System::Void imgGeButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if (folderBrowserDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ save_imgs_path = gcnew String(folderBrowserDialog1->SelectedPath);
			String^ save_masks_path = gcnew String(folderBrowserDialog2->SelectedPath);
			int picutres = System::Int32::Parse(NumOfNewdata->Text);

			string imgs_path = "./data/imgs/";
			string masks_path = "./data/masks/";

			cout << "load raw imgas and masks ... " << endl;
			imgs.clear(); masks.clear(); results.clear();

			// loading imgs Bitmap
			for (int i = 1; i < 10; i++) {
				string s = to_string(i);
				string img_path = imgs_path + "000" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				imgs.push_back(temp);
			}

			for (int i = 10; i < 61; i++) {
				string s = to_string(i);
				string img_path = imgs_path + "00" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				imgs.push_back(temp);
			}
			//loading masks Bitmap
			for (int i = 1; i < 10; i++) {
				string s = to_string(i);
				string img_path = masks_path + "000" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				masks.push_back(temp);
			}

			for (int i = 10; i < 61; i++) {
				string s = to_string(i);
				string img_path = masks_path + "00" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				masks.push_back(temp);
			}

			//
			cout << "raw imgs has " << imgs.size() << endl;
			cout << "raw masks has " << masks.size() << endl;

			// generate
			int start_from = 20 -1;
			for (int i = start_from; i < picutres; i++) {
				results.clear();

				temp = cloneImage(imgs.at(i));
				results.push_back(temp);

				cout << "apply histogram ...  " << endl;
				temp = cloneImage(results.back_item);
				updateParameters(temp);
				histogram(temp, results.back_item);
				results.push_back(temp);

				cout << "apply mean filter ..." << endl;
				int times = System::Int32::Parse(filterTimes->Text);
				for (int i = 0; i < times; i++) {
					temp = cloneImage(results.back_item);
					meanfilter(temp, results.back_item);
					results.push_back(temp);
				}
								
				cout << "apply sobel combined ...  " << endl;
				String^ mode = sobelSelect->Text;
				temp = cloneImage(results.back_item);
				updateParameters(temp);
				sobel(temp, results.back_item, mode);
				results.push_back(temp);			
				
				cout << "apply mask ...  " << endl;
				temp = cloneImage(results.back_item);
				int gray;
				for (int i = 0; i < Height; i++) {
					for (int j = 0; j < Width; j++) {
						gray = results.at(results.size() - 2)->GetPixel(j, i).R - temp->GetPixel(j, i).R;
						gray = gray < 0 ? 0 : gray;
						gray = gray > 256 ? 256 : gray;
						temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
					}
				}
				results.push_back(temp);
				Bitmap^ orig = cloneImage(temp);
				
				cout << "apply detection ...  " << endl;
	
				cliext::vector<Point>^ vertebrae = gcnew cliext::vector<Point>;

				temp = cloneImage(results.back_item);
				detectionSpine(temp, results.back_item, vertebrae);
				results.push_back(temp);

				smoothVertebrae(vertebrae);
				shiftVertebrae(vertebrae);

				temp = cloneImage(results.back_item);
				extraVertebraeWindow(temp, results.back_item, vertebrae);
				results.push_back(temp);

				temp = orig;
				bypassVertebrae(temp, results.back_item);
				results.push_back(temp);	
				
				temp = cloneImage(results.back_item);
				localHist(temp, results.back_item, vertebrae);
				results.push_back(temp);

				temp = cloneImage(results.back_item);
				localBandPass(temp, results.back_item, vertebrae);
				results.push_back(temp);
			
				showImage();

				cout << "save image ... " << endl;
				// save the picture
				runImageWindow->Image = results.back_item;
				selectModelWindow->Image = masks.at(i);
				if (i < 9) {

					String^ a = System::Convert::ToString(save_imgs_path + "/000" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/000" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (9 <= i && i < 99) {

					String^ a = System::Convert::ToString(save_imgs_path + "/00" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/00" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (99 <= i && i < 999) {

					String^ a = System::Convert::ToString(save_imgs_path + "/0" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/0" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}

				cout << "Save the picutre ..." << endl;
			}
		}

	}

}

private: System::Void randGeneButton_Click(System::Object^  sender, System::EventArgs^  e) {
	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if (folderBrowserDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ save_imgs_path = gcnew String(folderBrowserDialog1->SelectedPath);
			String^ save_masks_path = gcnew String(folderBrowserDialog2->SelectedPath);
			int picutres = System::Int32::Parse(NumOfNewdata->Text);

			string imgs_path = "./data/imgs/";
			string masks_path = "./data/masks/";

			cout << "load raw imgas and masks ... " << endl;
			imgs.clear(); masks.clear(); results.clear();

			// loading imgs Bitmap
			for (int i = 1; i < 10; i++) {
				string s = to_string(i);
				string img_path = imgs_path + "000" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				imgs.push_back(temp);
			}

			for (int i = 10; i < 61; i++) {
				string s = to_string(i);
				string img_path = imgs_path + "00" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				imgs.push_back(temp);
			}
			//loading masks Bitmap
			for (int i = 1; i < 10; i++) {
				string s = to_string(i);
				string img_path = masks_path + "000" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				masks.push_back(temp);
			}

			for (int i = 10; i < 61; i++) {
				string s = to_string(i);
				string img_path = masks_path + "00" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				masks.push_back(temp);
			}

			//
			cout << "raw imgs has " << imgs.size() << endl;
			cout << "raw masks has " << masks.size() << endl;

			// generate
			int start_from = 1 - 1;
			for (int i = start_from; i < picutres; i++) {
				results.clear();

				temp = cloneImage(imgs.at(i));
				results.push_back(temp);

				cout << "apply histogram ...  " << endl;
				temp = cloneImage(results.back_item);
				updateParameters(temp);
				histogram(temp, results.back_item);
				results.push_back(temp);

				cout << "apply mean filter ..." << endl;
				int times = System::Int32::Parse(filterTimes->Text);
				for (int i = 0; i < times; i++) {
					temp = cloneImage(results.back_item);
					meanfilter(temp, results.back_item);
					results.push_back(temp);
				}

				cout << "apply sobel combined ...  " << endl;
				String^ mode = sobelSelect->Text;
				temp = cloneImage(results.back_item);
				updateParameters(temp);
				sobel(temp, results.back_item, mode);
				results.push_back(temp);

				/*
				cout << "apply mask ...  " << endl;
				temp = cloneImage(results.back_item);
				int gray;
				for (int i = 0; i < Height; i++) {
					for (int j = 0; j < Width; j++) {
						gray = results.at(results.size() - 2)->GetPixel(j, i).R - temp->GetPixel(j, i).R;
						gray = gray < 0 ? 0 : gray;
						gray = gray > 256 ? 256 : gray;
						temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
					}
				}
				results.push_back(temp);*/
				
				showImage();

				cout << "save image ... " << endl;
				// save the picture
				runImageWindow->Image = results.back_item;
				selectModelWindow->Image = masks.at(i);
				if (i < 9) {

					String^ a = System::Convert::ToString(save_imgs_path + "/000" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/000" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (9 <= i && i < 99) {

					String^ a = System::Convert::ToString(save_imgs_path + "/00" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/00" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (99 <= i && i < 999) {

					String^ a = System::Convert::ToString(save_imgs_path + "/0" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/0" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}

				cout << "Save the picutre ..." << endl;
			}
		}
		
	}


	

}


/// Evaluate
private: System::Void loadTestButton_Click(System::Object^  sender, System::EventArgs^  e) {
	imgs.clear();

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		temp = gcnew Bitmap(openFileDialog1->FileName);

		// to gray-scale
		for(int i = 0; i < temp->Height; i++)
			for (int j = 0; j < temp->Width; j++) {
				Color RGB = temp->GetPixel(j, i);
				int gray = (RGB.R + RGB.G + RGB.B) / 3;
				temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
			}

		imgs.push_back(temp);
		results.push_back(temp);
		showImage();
	}

	else return;
}
private: System::Void loadModelButton_Click(System::Object^  sender, System::EventArgs^  e) {
	masks.clear();

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		mask = gcnew Bitmap(openFileDialog1->FileName);

		// to gray-scale
		for (int i = 0; i < mask->Height; i++)
			for (int j = 0; j < mask->Width; j++) {
				Color RGB = mask->GetPixel(j, i);
				int gray = (RGB.R + RGB.G + RGB.B) / 3;
				mask->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
			}

		// threshold
		threshold(mask, 127);

		masks.push_back(mask);
		showImage();
	}
	else return;

}

private: System::Void dcScoreButton_Click(System::Object^  sender, System::EventArgs^  e) {
	results.clear();

	if (openFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		temp = gcnew Bitmap(openFileDialog1->FileName);

		// to gray-scale
		for (int i = 0; i < temp->Height; i++)
			for (int j = 0; j < temp->Width; j++) {
				Color RGB = temp->GetPixel(j, i);
				int gray = (RGB.R + RGB.G + RGB.B) / 3;
				temp->SetPixel(j, i, Color::FromArgb(gray, gray, gray));
			}
		// threshold
		threshold(mask, 127);

		results.push_back(temp); // ground_truth
		showImage();

		// find regions of ground_truth
		cout << "Finding regions of ground truth ... " << endl;
		temp = cloneImage(results.front_item);
		cliext::vector<cliext::vector<Point>^>^ region_g = gcnew cliext::vector<cliext::vector<Point>^>;
		findRegions(temp, region_g);
		cout << "Done! " << endl;

		// Info of region of ground truth
		cout << "Total find the " << region_g->size() << " regions " << endl;
		for (int i = 0; i < region_g->size(); i++)
			cout << "the regions :" << i << " has " << region_g->at(i)->size() << endl;

		/*
		// Draw regions
		cout << "draw" << endl;
		cliext::vector<Point>^ region1 = region_g->at(0);
		for (int i = 0; i < region1->size(); i++)
			temp->SetPixel(region1->at(i).Y, region1->at(i).X, Color::FromArgb(255, 0, 0));
		
		results.push_back(temp);
		*/

		// find regions of predict
		cout << "Find predict regions " << endl;
		temp = cloneImage(masks.back_item);
		cliext::vector<cliext::vector<Point>^>^ region_p = gcnew cliext::vector<cliext::vector<Point>^>;
		findRegions(temp, region_p);
		cout << "done" << endl;

		// Info-ground
		cout << "total find the " << region_p->size() << " regions " << endl;
		for (int i = 0; i < region_p->size(); i++)
			cout << "the regions :" << i << " has " << region_p->at(i)->size() << endl;

		/*
		// Draw regions
		cout << "draw" << endl;
		cliext::vector<Point>^ region2 = region_p->at(0);
		for (int i = 0; i < region2->size(); i++)
			temp->SetPixel(region2->at(i).Y, region2->at(i).X, Color::FromArgb(255, 0, 0));
		results.push_back(temp);
		showImage();			*/




	//	double a = diceCoefficient(region1, region2);
	//	cout << "dice = " << a << endl;


	}

	

}


/// Detection
static cliext::vector<Point>^ gobal_vertebrae;
private: System::Void detSpineButton_Click(System::Object^  sender, System::EventArgs^  e) {

	gobal_vertebrae = gcnew cliext::vector<Point>;
	temp = cloneImage(imgs.back_item);
	detectionSpine(temp, imgs.back_item, gobal_vertebrae);
	plotMidVertebrae(temp, gobal_vertebrae);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();
}
private: System::Void smoothButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.back_item);
	smoothVertebrae(gobal_vertebrae);
	plotMidVertebrae(temp, gobal_vertebrae);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}
private: System::Void shiftButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.back_item);
	shiftVertebrae(gobal_vertebrae);
	plotMidVertebrae(temp, gobal_vertebrae);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}
private: System::Void extractButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.back_item);
	extraVertebraeWindow(temp, imgs.back_item, gobal_vertebrae);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}
private: System::Void bypassButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.front_item); // get the initial img
	bypassVertebrae(temp, imgs.back_item);
	imgs.push_back(temp);
	results.push_back(temp);
	showImage();

}

private: System::Void localHistButton_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = cloneImage(imgs.back_item);
	localHist(temp, imgs.back_item, gobal_vertebrae);
	imgs.push_back(temp);

	results.push_back(temp);
	showImage();
}
private: System::Void localbandButton_Click(System::Object^  sender, System::EventArgs^  e) {

	temp = cloneImage(imgs.back_item);
	localBandPass(temp, imgs.back_item, gobal_vertebrae);
	imgs.push_back(temp);

	results.push_back(temp);
	showImage();

}

private: System::Void localOtsuButton_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = cloneImage(imgs.back_item);
	localOtsu(temp, imgs.back_item, gobal_vertebrae);
	imgs.push_back(temp);

	results.push_back(temp);
	showImage();
}

private: System::Void histYButton_Click(System::Object^  sender, System::EventArgs^  e) {
	temp = cloneImage(imgs.back_item);
	plotHistY(temp, imgs.back_item);
	imgs.push_back(temp);

	results.push_back(temp);
	showImage();
}

private: System::Void detButton_Click(System::Object^  sender, System::EventArgs^  e) {

	cliext::vector<Point>^ vertebrae = gcnew cliext::vector<Point>;

	temp = cloneImage(imgs.back_item);
	Bitmap^ orig = cloneImage(temp);

	detectionSpine(temp, imgs.back_item, vertebrae);
	imgs.push_back(temp);

	for (int i = 0; i < vertebrae->size(); i++) cout << "row " << vertebrae->at(i).X << ", " << vertebrae->at(i).Y << endl;

	smoothVertebrae(vertebrae);
	//    fitVertebrae(vertebrae);
	shiftVertebrae(vertebrae);
	//	plotMidVertebrae(temp, vertebrae);

	temp = cloneImage(imgs.back_item);
	extraVertebraeWindow(temp, imgs.back_item, vertebrae);
	imgs.push_back(temp);

//	temp = cloneImage(imgs.front_item); // get the initial img
	temp = orig;
	bypassVertebrae(temp, imgs.back_item);
	imgs.push_back(temp);

	temp = cloneImage(imgs.back_item);
	localHist(temp, imgs.back_item, vertebrae);
	imgs.push_back(temp);

	temp = cloneImage(imgs.back_item);
	localBandPass(temp, imgs.back_item, vertebrae);
//	localOtsu(temp, imgs.back_item, vertebrae);
	imgs.push_back(temp);

	plotHistY(temp, imgs.back_item);

	results.push_back(temp);
	showImage();

}

private: System::Void compareButton_Click(System::Object^  sender, System::EventArgs^  e) {

	if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		if (folderBrowserDialog2->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			String^ save_imgs_path = gcnew String(folderBrowserDialog1->SelectedPath);
			String^ save_masks_path = gcnew String(folderBrowserDialog2->SelectedPath);
			int picutres = System::Int32::Parse(NumOfNewdata->Text);

			string imgs_path = "./data/imgs/";
			string masks_path = "./data/masks/";

			cout << "load raw imgas and masks ... " << endl;
			imgs.clear(); masks.clear(); results.clear();

			// loading imgs Bitmap
			for (int i = 1; i < 10; i++) {
				string s = to_string(i);
				string img_path = imgs_path + "000" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				imgs.push_back(temp);
			}

			for (int i = 10; i < 61; i++) {
				string s = to_string(i);
				string img_path = imgs_path + "00" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				imgs.push_back(temp);
			}
			//loading masks Bitmap
			for (int i = 1; i < 10; i++) {
				string s = to_string(i);
				string img_path = masks_path + "000" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				masks.push_back(temp);
			}

			for (int i = 10; i < 61; i++) {
				string s = to_string(i);
				string img_path = masks_path + "00" + s + ".png";
				String^ load = gcnew String(img_path.c_str());
				temp = gcnew Bitmap(load);
				masks.push_back(temp);
			}

			//
			cout << "raw imgs has " << imgs.size() << endl;
			cout << "raw masks has " << masks.size() << endl;


			// generate
			int start_from = 1 - 1;
			for (int i = start_from; i < picutres; i++) {

				// to gray-scale
				for (int h = 0; h < masks.at(i)->Height; h++)
					for (int w = 0; w < masks.at(i)->Width; w++) {
						Color RGB = masks.at(i)->GetPixel(w, h);
						int gray = (RGB.R + RGB.G + RGB.B) / 3;
						masks.at(i)->SetPixel(w, h, Color::FromArgb(gray, gray, gray));
					}

				// threshold
				threshold(masks.at(i), 127);

				results.clear();

				temp = cloneImage(masks.at(i));
				updateParameters(temp);
				results.push_back(temp);

				cout << "apply sobel combined ...  " << endl;
				String^ mode = sobelSelect->Text;
				sobel(temp, masks.at(i), mode);
				results.push_back(temp);
				
				temp = cloneImage(imgs.at(i));
				for (int i = 0; i < Height; i++) {
					for (int j = 0; j < Width; j++) {
						if (results.back_item->GetPixel(j, i).R == 255) {
							temp->SetPixel(j, i, Color::FromArgb(255, 0, 0));
						}

					}
				}

				results.push_back(temp);
				showImage();

				// save the picture
				runImageWindow->Image = results.back_item;
				selectModelWindow->Image = masks.at(i);
				if (i < 9) {

					String^ a = System::Convert::ToString(save_imgs_path + "/000" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/000" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (9 <= i && i < 99) {

					String^ a = System::Convert::ToString(save_imgs_path + "/00" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/00" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}
				else if (99 <= i && i < 999) {

					String^ a = System::Convert::ToString(save_imgs_path + "/0" + (i + 1) + ".png");
					Console::WriteLine(a);
					runImageWindow->Image->Save(a, System::Drawing::Imaging::ImageFormat::Png);

					String^ b = System::Convert::ToString(save_masks_path + "/0" + (i + 1) + ".png");
					selectModelWindow->Image->Save(b, System::Drawing::Imaging::ImageFormat::Png);
				}

				cout << "Save the picutre ..." << endl;
			}
		}

	}

}

private: System::Void outputButton_Click(System::Object^  sender, System::EventArgs^  e) {
	SaveFileDialog^ saveFileDialog1 = gcnew SaveFileDialog();
	saveFileDialog1->Filter = "JPeg Image|*.jpg|Bitmap Image|*.bmp|Gif Image|*.gif";
	saveFileDialog1->Title = "Save an Image File";

	if (saveFileDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ sfd = saveFileDialog1->FileName;

		runImageWindow->Image->Save(sfd, System::Drawing::Imaging::ImageFormat::Png);
	}

}


private: System::Void predictButton_Click(System::Object^  sender, System::EventArgs^  e) {
//	system("C:/Users/DCMC/Documents/MachinLearningForPython/DIP/UNet/predict.py -i ./data/imgs/0001.png");
	system("C:/Users/DCMC/Desktop/data/tess.py");


}
};
}