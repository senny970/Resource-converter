#pragma once

#include "lib/VTFLib.h"
#include "lib/IL/il.h"
#include "VMDL.h"


namespace SEresourceconverter {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Globalization;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// —водка дл€ Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:		
		Main(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
			oVMDL = gcnew VMDL();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:

	private: System::Windows::Forms::TabPage^ tabPage2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::GroupBox^ groupBox1;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;
	private: System::Windows::Forms::Button^ button2;
		   String^ MdlInputPath;
		   String^ VMTInputPath;
		   int MdlCount = 0;
		   int VTFCount = 0;
		   int VMTCount = 0;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox3;
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::GroupBox^ groupBox4;
	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Label^ label5;



		   VMDL^ oVMDL;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			this->groupBox4->SuspendLayout();
			this->tabPage2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Location = System::Drawing::Point(9, 19);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(420, 159);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->BackColor = System::Drawing::Color::White;
			this->tabPage1->Controls->Add(this->label5);
			this->tabPage1->Controls->Add(this->comboBox1);
			this->tabPage1->Controls->Add(this->groupBox4);
			this->tabPage1->Controls->Add(this->button4);
			this->tabPage1->Controls->Add(this->button3);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->label3);
			this->tabPage1->Location = System::Drawing::Point(4, 22);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(412, 133);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Materials (.vmt)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(6, 108);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(79, 13);
			this->label5->TabIndex = 9;
			this->label5->Text = L"Default shader:";
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"SteamVR - vr_standard.vfx", L"Dota 2" });
			this->comboBox1->Location = System::Drawing::Point(91, 105);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(205, 21);
			this->comboBox1->TabIndex = 8;
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->progressBar2);
			this->groupBox4->Controls->Add(this->label4);
			this->groupBox4->Location = System::Drawing::Point(9, 36);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(393, 61);
			this->groupBox4->TabIndex = 7;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"Progress";
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(6, 18);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(381, 23);
			this->progressBar2->Step = 1;
			this->progressBar2->TabIndex = 3;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(186, 44);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(21, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"0%";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(302, 103);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(100, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"Start convert";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Main::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(355, 9);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(47, 20);
			this->button3->TabIndex = 5;
			this->button3->Text = L"...";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Main::button3_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(99, 10);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(250, 20);
			this->textBox2->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(6, 13);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(95, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"Materials directory:";
			// 
			// tabPage2
			// 
			this->tabPage2->BackColor = System::Drawing::Color::White;
			this->tabPage2->Controls->Add(this->button2);
			this->tabPage2->Controls->Add(this->button1);
			this->tabPage2->Controls->Add(this->groupBox3);
			this->tabPage2->Controls->Add(this->textBox1);
			this->tabPage2->Controls->Add(this->label1);
			this->tabPage2->Location = System::Drawing::Point(4, 22);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(412, 133);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Models (.mdl)";
			// 
			// button2
			// 
			this->button2->Enabled = false;
			this->button2->Location = System::Drawing::Point(157, 103);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Start convert";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(355, 9);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(47, 20);
			this->button1->TabIndex = 2;
			this->button1->Text = L"...";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->progressBar1);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Location = System::Drawing::Point(9, 36);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(393, 61);
			this->groupBox3->TabIndex = 6;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Progress";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(6, 18);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(381, 23);
			this->progressBar1->Step = 1;
			this->progressBar1->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(186, 44);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(21, 13);
			this->label2->TabIndex = 5;
			this->label2->Text = L"0%";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(99, 10);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(250, 20);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 13);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(87, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Models directory:";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(9, 19);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(420, 113);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &Main::richTextBox1_TextChanged);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->richTextBox1);
			this->groupBox1->Location = System::Drawing::Point(12, 205);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(436, 146);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Log";
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tabControl1);
			this->groupBox2->Location = System::Drawing::Point(12, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(436, 187);
			this->groupBox2->TabIndex = 3;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Control";
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(192, 357);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 4;
			this->button5->Text = L"About";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Main::button5_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(460, 386);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"Main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Source Engine Resource Converter";
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			this->ResumeLayout(false);

		}

		bool Constains(String^ source, String^ desk) {
			CompareInfo^ comp_info = CultureInfo::InvariantCulture->CompareInfo;
			bool result;

			if (comp_info->IndexOf(source, desk, CompareOptions::IgnoreCase) >= 0) {
				return true;
			}

			return false;
		}

		void Log(RichTextBox ^box, String^ text, Color color)
		{
			box->SelectionStart = box->TextLength;
			box->SelectionLength = 0;

			box->SelectionColor = color;
			box->AppendText(text);
			box->SelectionColor = box->ForeColor;
		}

		void SelectModelsPath() {
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				MdlInputPath = folderBrowserDialog1->SelectedPath;
				textBox1->Text = MdlInputPath;
				progressBar1->Value = 0;

				if (MdlInputPath->Length > 0) {
					Log(richTextBox1, "Models folder: " + MdlInputPath + "\n", Color::Green);
					MdlCount = GetMdlCount(MdlInputPath);
					Log(richTextBox1, "Total .mdl files: " + MdlCount.ToString() + "\n", Color::BlueViolet);
					this->progressBar1->Maximum = MdlCount;
					button2->Enabled = true;
				}
				button2->Select();
			}
		}

		void SelectMaterialsPsth() {
			if (folderBrowserDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
				VMTInputPath = folderBrowserDialog1->SelectedPath;
				textBox2->Text = VMTInputPath;
				progressBar1->Value = 0;

				if (VMTInputPath->Length > 0) {
					Log(richTextBox1, "Materials folder: " + VMTInputPath + "\n", Color::Green);
					VTFCount = GetVTFCount(VMTInputPath);
					Log(richTextBox1, "Total .vtf files: " + VTFCount.ToString() + "\n", Color::BlueViolet);
					VMTCount = GetVMTCount(VMTInputPath);
					Log(richTextBox1, "Total .vmt files: " + VMTCount.ToString() + "\n", Color::BlueViolet);
					this->progressBar2->Maximum = VTFCount + VMTCount;
					button4->Enabled = true;
				}
				button4->Select();
			}
		}

		int GetMdlCount(String^ dirPath) {
			int MdlCount = 0;
			for each (String ^ newPath in Directory::GetFiles(dirPath, "*.mdl", SearchOption::AllDirectories)) {
				if (newPath->Contains("anim") || newPath->Contains("gestures")) continue;
				MdlCount++;
			}
			return MdlCount;
		}

		int GetVTFCount(String^ dirPath) {
			int VTFCount = 0;
			for each (String ^ newPath in Directory::GetFiles(dirPath, "*.vtf", SearchOption::AllDirectories)) {
				//if (newPath->Contains("anim") || newPath->Contains("gestures")) continue;
				VTFCount++;
			}
			return VTFCount;
		}

		int GetVMTCount(String^ dirPath) {
			int VMTCount = 0;
			for each (String ^ newPath in Directory::GetFiles(dirPath, "*.vmt", SearchOption::AllDirectories)) {
				//if (newPath->Contains("anim") || newPath->Contains("gestures")) continue;
				VMTCount++;
			}
			return VMTCount;
		}

		void CreateVMDL(String ^VMDLFile) {
			String^ VMDBase = "<!-- kv3 encoding:text:version{e21c7f3c-8a33-41c5-9977-a76d3a32aa0d} format:generic:version{7412167c-06e9-4698-aff2-e63eb59037e7} -->\n{\n\tm_sMDLFilename = $modelPath$\n}";
			String^ InternalMDLPath = VMDLFile->Substring(Path::GetPathRoot(VMDLFile)->Length);
			InternalMDLPath = InternalMDLPath->Replace(".vmdl", ".mdl");
			String^ VMDLData = VMDBase->Replace("modelPath", InternalMDLPath);
			VMDLData = VMDLData->Replace('$', '"');			
			VMDLData = VMDLData->Replace('\\', '/');
			FileStream ^fs = File::Create(VMDLFile);			
			StreamWriter ^sr = gcnew StreamWriter(fs);
			sr->Write(VMDLData);
			sr->Close();
			fs->Close();			
		}

		bool CreateVMAT(String ^VMATFile, String^ VMTFile) {
			String^ VMATBase = "Layer0\n{\n\tshader $shadername$\n\tTextureColor $baseTexture$\n\tTextureNormal $bumpMap$\n}";
			StreamReader^ vmtSR;
			CompareInfo^ myComp = CultureInfo::InvariantCulture->CompareInfo;
			String^ temp_line = "";
			String^ shadername = "null";
			String^ baseTexture = "null";
			String^ bumpMap = "null";

			if (File::Exists(VMTFile)) {
				Log(richTextBox1, "Reading: " + VMTFile + "\n", Color::Blue);
				vmtSR = gcnew StreamReader(VMTFile);
			}
			else {
				Log(richTextBox1, "Error read: " + VMTFile + "\n", Color::Red);
				return false;
			}

			
			while ((temp_line = vmtSR->ReadLine()) != nullptr)
			{
				if (temp_line == "") continue;
				//Insert TextureColor
				if(Constains(temp_line,"$baseTexture")){
					baseTexture = temp_line;
					baseTexture = baseTexture->Remove(0, 13);
					Log(richTextBox1, "VMT Data: " + "TextureColor: " + baseTexture + "\n", Color::Blue);
					baseTexture = baseTexture->Insert(baseTexture->Length - 1, ".tga");					
					break;
				}				
			}

			VMATBase = VMATBase->Replace("$baseTexture$", baseTexture);

			FileStream^ vmatFS = File::Create(VMATFile);
			StreamWriter^ vmatSR = gcnew StreamWriter(vmatFS);
			vmatSR->Write(VMATBase);
			vmtSR->Close();
			vmatSR->Close();
			vmatFS->Close();

			return true;
		}

		void DeleteVTF(String ^VTFFile) {
			if (File::Exists(VTFFile)) {
				File::Delete(VTFFile);
				Log(richTextBox1, "Delete: " + VTFFile + "\n", Color::Blue);
			}
			else {
				Log(richTextBox1, "Error Delete: " + VTFFile + "\n", Color::Red);
			}
		}

		void DeleteVMAT(String^ VMATFile) {
			if (File::Exists(VMATFile)) {
				File::Delete(VMATFile);
				Log(richTextBox1, "Delete: " + VMATFile + "\n", Color::Blue);
			}
			else {
				Log(richTextBox1, "Error Delete: " + VMATFile + "\n", Color::Red);
			}
		}

		bool CreateTGA(String^ TGALFile) {
			VTFLib::CVTFFile VTFFile = VTFLib::CVTFFile();		
			String^ TGAFIle = TGALFile->Replace(".vtf", ".tga");
			char* cFile = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(TGALFile).ToPointer());

			if (VTFFile.Load(cFile))
			{
				vlUInt uiWidth = VTFFile.GetWidth(), uiHeight = VTFFile.GetHeight();

				vlByte* lpImageData = new vlByte[VTFFile.ComputeImageSize(uiWidth, uiHeight, 1, IMAGE_FORMAT_RGBA8888)];

				if (VTFFile.ConvertToRGBA8888(VTFFile.GetData(0, 0, 0, 0), lpImageData, uiWidth, uiHeight, VTFFile.GetFormat()))
				{
					VTFFile.FlipImage(lpImageData, uiWidth, uiHeight);

					if (ilTexImage(uiWidth, uiHeight, 1, 4, IL_RGBA, IL_UNSIGNED_BYTE, lpImageData))
					{						
						char* cOtherFile = (char*)(System::Runtime::InteropServices::Marshal::StringToHGlobalAnsi(TGAFIle)).ToPointer();

						if (ilSaveImage(cOtherFile))
						{
							Log(richTextBox1, "Create: " + TGAFIle + "\n", Color::Blue);							
						}
						else {
							Log(richTextBox1, "Error create: " + TGAFIle + "\n", Color::Red);
							return false;
						}
					}		
				}
				return true;
			}
			return false;
		}

		void ConvertMDL(String ^MdlFolderPath) {
			if (MdlCount == 0) return;

			int ProgressBarValue = 0;
			float percent = 0;
			String^ PercentProgress = "";

			DirectoryInfo^ InputFolder = gcnew DirectoryInfo(MdlFolderPath);
			array<DirectoryInfo^>^ Folders = InputFolder->GetDirectories();
			for each (DirectoryInfo ^ dir in Folders) {
				Log(richTextBox1, "Dir: " + dir + "\n", Color::Green);
				array<FileInfo^>^ files = dir->GetFiles("*.mdl",SearchOption::AllDirectories);
				for each (FileInfo ^ file in files) {
					if (file->FullName->Contains("anim") || file->FullName->Contains("gestures")) continue;
					String^ MDLFilePath = file->FullName; //full path	
					Log(richTextBox1, "Process: " + MDLFilePath + "\n", Color::Green); //file name			
					String^ VMDLFilePath = MDLFilePath->Replace(".mdl", ".vmdl");
					CreateVMDL(VMDLFilePath);
					Log(richTextBox1, "Create: " + VMDLFilePath + "\n", Color::Blue);
					ProgressBarValue++;
					this->progressBar1->Value = ProgressBarValue;
					percent = (float)(((double)progressBar1->Value / (double)progressBar1->Maximum) * 100);
					PercentProgress = String::Format("{0:n2}%", percent);
					label2->Text = PercentProgress;
				}
			}
			Log(richTextBox1, "End convert folder: " + MdlFolderPath + "\n", Color::BlueViolet);		
		}

		void ConvertVTF(String^ VTFFolderPath) {
			if (VTFCount == 0 && VMTCount == 0) return;
			ilInit();

			int ProgressBarValue = 0;
			float percent = 0;
			String^ PercentProgress = "";

			DirectoryInfo^ InputFolder = gcnew DirectoryInfo(VTFFolderPath);
			array<DirectoryInfo^>^ Folders = InputFolder->GetDirectories();
			for each (DirectoryInfo ^ dir in Folders) {
				Log(richTextBox1, "Dir: " + dir + "\n", Color::Green);
				array<FileInfo^>^ vtffiles = dir->GetFiles("*.vtf", SearchOption::AllDirectories);
				array<FileInfo^>^ vmtfiles = dir->GetFiles("*.vmt", SearchOption::AllDirectories);
				for each (FileInfo ^ file in vtffiles) {
					//if (file->FullName->Contains("anim") || file->FullName->Contains("gestures")) continue;
					String^ VTFFilePath = file->FullName; //full path	
					Log(richTextBox1, "Process: " + VTFFilePath + "\n", Color::Green); //file name	
					if (CreateTGA(VTFFilePath)) {
						DeleteVTF(VTFFilePath);
					}
					ProgressBarValue++;
					this->progressBar2->Value = ProgressBarValue;
					percent = (float)(((double)progressBar2->Value / (double)progressBar2->Maximum) * 100);
					PercentProgress = String::Format("{0:n2}%", percent);
					label4->Text = PercentProgress;
				}

				for each (FileInfo ^ file in vmtfiles) {
					String^ VMTFilePath = file->FullName; //full path						
					Log(richTextBox1, "Process: " + VMTFilePath + "\n", Color::Green); //file name	
					String^ VMATFilePath = VMTFilePath->Replace(".vmt", ".vmat");
					if (CreateVMAT(VMATFilePath, VMTFilePath)) {
						//DeleteVMAT(VMTFilePath);
					}
					ProgressBarValue++;
					this->progressBar2->Value = ProgressBarValue;
					percent = (float)(((double)progressBar2->Value / (double)progressBar2->Maximum) * 100);
					PercentProgress = String::Format("{0:n2}%", percent);
					label4->Text = PercentProgress;
				}
			}
			Log(richTextBox1, "End convert folder: " + VTFFolderPath + "\n", Color::BlueViolet);
		}

#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {	
		comboBox1->SelectedIndex = 0;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		SelectModelsPath();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	ConvertMDL(MdlInputPath);
}
private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	richTextBox1->SelectionStart = richTextBox1->Text->Length;
	richTextBox1->ScrollToCaret();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
	SelectMaterialsPsth();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	ConvertVTF(VMTInputPath);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
