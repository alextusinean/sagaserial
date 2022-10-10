#pragma once
#include <math.h>

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System::Text::RegularExpressions;
using namespace System::Collections::Generic;

namespace sagaserial {
	/// <summary>
	/// Summary for SagaSerialForm
	/// </summary>
	public ref class SagaSerialForm : public System::Windows::Forms::Form
	{
	public:
		SagaSerialForm(void)
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
		~SagaSerialForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		System::Windows::Forms::RadioButton^ bRadio;
		System::Windows::Forms::RadioButton^ cRadio;
		System::Windows::Forms::RadioButton^ psRadio;
		System::Windows::Forms::Label^ typeLabel;

		System::Windows::Forms::Label^ versionLabel;
		System::Windows::Forms::Label^ versionPrefixLabel;
		System::Windows::Forms::TextBox^ versionTextBox;

		System::Windows::Forms::Label^ idLabel;
		System::Windows::Forms::MaskedTextBox^ idTextBox;

		System::Windows::Forms::Label^ accountancyLabel;
		System::Windows::Forms::TextBox^ accountancyTextBox;

		System::Windows::Forms::Label^ stocksLabel;
		System::Windows::Forms::TextBox^ stocksTextBox;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SagaSerialForm::typeid));
			this->bRadio = (gcnew System::Windows::Forms::RadioButton());
			this->cRadio = (gcnew System::Windows::Forms::RadioButton());
			this->psRadio = (gcnew System::Windows::Forms::RadioButton());
			this->typeLabel = (gcnew System::Windows::Forms::Label());
			this->versionLabel = (gcnew System::Windows::Forms::Label());
			this->versionPrefixLabel = (gcnew System::Windows::Forms::Label());
			this->versionTextBox = (gcnew System::Windows::Forms::TextBox());
			this->idLabel = (gcnew System::Windows::Forms::Label());
			this->idTextBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->stocksLabel = (gcnew System::Windows::Forms::Label());
			this->stocksTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountancyTextBox = (gcnew System::Windows::Forms::TextBox());
			this->accountancyLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// bRadio
			// 
			this->bRadio->AutoSize = true;
			this->bRadio->Checked = true;
			this->bRadio->Location = System::Drawing::Point(15, 27);
			this->bRadio->Name = L"bRadio";
			this->bRadio->Size = System::Drawing::Size(60, 17);
			this->bRadio->TabIndex = 1;
			this->bRadio->TabStop = true;
			this->bRadio->Text = L"Saga B";
			this->bRadio->UseVisualStyleBackColor = true;
			this->bRadio->CheckedChanged += gcnew System::EventHandler(this, &SagaSerialForm::typeRadio_CheckedChanged);
			// 
			// cRadio
			// 
			this->cRadio->AutoSize = true;
			this->cRadio->Location = System::Drawing::Point(15, 50);
			this->cRadio->Name = L"cRadio";
			this->cRadio->Size = System::Drawing::Size(60, 17);
			this->cRadio->TabIndex = 2;
			this->cRadio->Text = L"Saga C";
			this->cRadio->UseVisualStyleBackColor = true;
			this->cRadio->CheckedChanged += gcnew System::EventHandler(this, &SagaSerialForm::typeRadio_CheckedChanged);
			// 
			// psRadio
			// 
			this->psRadio->AutoSize = true;
			this->psRadio->Location = System::Drawing::Point(15, 73);
			this->psRadio->Name = L"psRadio";
			this->psRadio->Size = System::Drawing::Size(67, 17);
			this->psRadio->TabIndex = 3;
			this->psRadio->Text = L"Saga PS";
			this->psRadio->UseVisualStyleBackColor = true;
			this->psRadio->CheckedChanged += gcnew System::EventHandler(this, &SagaSerialForm::typeRadio_CheckedChanged);
			// 
			// typeLabel
			// 
			this->typeLabel->AutoSize = true;
			this->typeLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->typeLabel->Location = System::Drawing::Point(12, 9);
			this->typeLabel->Name = L"typeLabel";
			this->typeLabel->Size = System::Drawing::Size(131, 15);
			this->typeLabel->TabIndex = 4;
			this->typeLabel->Text = L"Selecteaza programul:";
			// 
			// versionLabel
			// 
			this->versionLabel->AutoSize = true;
			this->versionLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->versionLabel->Location = System::Drawing::Point(12, 102);
			this->versionLabel->Name = L"versionLabel";
			this->versionLabel->Size = System::Drawing::Size(104, 15);
			this->versionLabel->TabIndex = 5;
			this->versionLabel->Text = L"Introdu versiunea:";
			// 
			// versionPrefixLabel
			// 
			this->versionPrefixLabel->AutoSize = true;
			this->versionPrefixLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->versionPrefixLabel->Location = System::Drawing::Point(12, 123);
			this->versionPrefixLabel->Name = L"versionPrefixLabel";
			this->versionPrefixLabel->Size = System::Drawing::Size(32, 17);
			this->versionPrefixLabel->TabIndex = 6;
			this->versionPrefixLabel->Text = L"3.0.";
			// 
			// versionTextBox
			// 
			this->versionTextBox->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->versionTextBox->Location = System::Drawing::Point(40, 121);
			this->versionTextBox->MaxLength = 3;
			this->versionTextBox->Name = L"versionTextBox";
			this->versionTextBox->Size = System::Drawing::Size(35, 23);
			this->versionTextBox->TabIndex = 7;
			this->versionTextBox->Text = L"000";
			this->versionTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->versionTextBox->TextChanged += gcnew System::EventHandler(this, &SagaSerialForm::versionTextBox_TextChanged);
			this->versionTextBox->Enter += gcnew System::EventHandler(this, &SagaSerialForm::versionTextBox_Enter);
			this->versionTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SagaSerialForm::versionTextBox_KeyPress);
			this->versionTextBox->Leave += gcnew System::EventHandler(this, &SagaSerialForm::versionTextBox_Leave);
			// 
			// idLabel
			// 
			this->idLabel->AutoSize = true;
			this->idLabel->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9));
			this->idLabel->Location = System::Drawing::Point(12, 157);
			this->idLabel->Name = L"idLabel";
			this->idLabel->Size = System::Drawing::Size(161, 15);
			this->idLabel->TabIndex = 8;
			this->idLabel->Text = L"Introdu codul de identificare:";
			// 
			// idTextBox
			// 
			this->idTextBox->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->idTextBox->InsertKeyMode = System::Windows::Forms::InsertKeyMode::Overwrite;
			this->idTextBox->Location = System::Drawing::Point(15, 176);
			this->idTextBox->Mask = L"AA AA AA AA";
			this->idTextBox->Name = L"idTextBox";
			this->idTextBox->Size = System::Drawing::Size(101, 23);
			this->idTextBox->TabIndex = 9;
			this->idTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->idTextBox->TextChanged += gcnew System::EventHandler(this, &SagaSerialForm::idTextBox_TextChanged);
			this->idTextBox->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SagaSerialForm::idTextBox_KeyPress);
			// 
			// accountancyLabel
			// 
			this->accountancyLabel->AutoSize = true;
			this->accountancyLabel->Location = System::Drawing::Point(12, 264);
			this->accountancyLabel->Name = L"accountancyLabel";
			this->accountancyLabel->Size = System::Drawing::Size(130, 13);
			this->accountancyLabel->TabIndex = 12;
			this->accountancyLabel->Text = L"Cod activare contabilitate:";
			// 
			// accountancyTextBox
			// 
			this->accountancyTextBox->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->accountancyTextBox->Location = System::Drawing::Point(15, 280);
			this->accountancyTextBox->Name = L"accountancyTextBox";
			this->accountancyTextBox->ReadOnly = true;
			this->accountancyTextBox->Size = System::Drawing::Size(101, 23);
			this->accountancyTextBox->TabIndex = 13;
			this->accountancyTextBox->Text = L"-";
			this->accountancyTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// stocksLabel
			// 
			this->stocksLabel->AutoSize = true;
			this->stocksLabel->Location = System::Drawing::Point(12, 306);
			this->stocksLabel->Name = L"stocksLabel";
			this->stocksLabel->Size = System::Drawing::Size(104, 13);
			this->stocksLabel->TabIndex = 10;
			this->stocksLabel->Text = L"Cod activare stocuri:";
			// 
			// stocksTextBox
			// 
			this->stocksTextBox->Font = (gcnew System::Drawing::Font(L"Consolas", 10));
			this->stocksTextBox->Location = System::Drawing::Point(15, 322);
			this->stocksTextBox->Name = L"stocksTextBox";
			this->stocksTextBox->ReadOnly = true;
			this->stocksTextBox->Size = System::Drawing::Size(101, 23);
			this->stocksTextBox->TabIndex = 11;
			this->stocksTextBox->Text = L"-";
			this->stocksTextBox->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// SagaSerialForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(278, 350);
			this->Controls->Add(this->accountancyTextBox);
			this->Controls->Add(this->accountancyLabel);
			this->Controls->Add(this->stocksTextBox);
			this->Controls->Add(this->stocksLabel);
			this->Controls->Add(this->idTextBox);
			this->Controls->Add(this->idLabel);
			this->Controls->Add(this->versionTextBox);
			this->Controls->Add(this->versionPrefixLabel);
			this->Controls->Add(this->versionLabel);
			this->Controls->Add(this->typeLabel);
			this->Controls->Add(this->psRadio);
			this->Controls->Add(this->cRadio);
			this->Controls->Add(this->bRadio);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->Name = L"SagaSerialForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"SagaSerial";
			this->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &SagaSerialForm::versionTextBox_KeyPress);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		double first, sec, res;
		String^ ioperator;

private:
	long GetActivationCode(String^ identificationCode, int patchVersion, char programType) {
		return -1;
	}

	char GetProgramType() {
		if (this->bRadio->Checked)
			return 'B';
		else if (this->cRadio->Checked)
			return 'C';

		// psRadio
		return 'P';
	}

	void RefreshCode() {
		if (String::IsNullOrEmpty(this->versionTextBox->Text))
			return;

		this->accountancyTextBox->Text = "";
		this->stocksTextBox->Text = "";

		long activationCode = GetActivationCode(this->idTextBox->Text->Trim()->Replace(" ", "")->ToUpper(), Convert::ToInt32(this->versionTextBox->Text), GetProgramType());
		if (activationCode == -1)
			this->accountancyTextBox->Text = "-";
		else {
			String^ code = activationCode.ToString();
			if (code->Length & 1) {
				this->accountancyTextBox->Text = " " + code->Substring(0, 1) + " ";
				code = code->Substring(1, code->Length - 1);
			}

			this->accountancyTextBox->Text += Regex::Replace(code, "(.{2})", "$1 ")->TrimEnd();
		}

		activationCode = GetActivationCode(this->idTextBox->Text->Trim()->Replace(" ", "")->ToUpper(), Convert::ToInt32(this->versionTextBox->Text), 'S');
		if (activationCode == -1)
			this->stocksTextBox->Text = "-";
		else {
			String^ code = activationCode.ToString();
			if (code->Length & 1) {
				this->stocksTextBox->Text = " " + code->Substring(0, 1) + " ";
				code = code->Substring(1, code->Length - 1);
			}

			this->stocksTextBox->Text += Regex::Replace(code, "(.{2})", "$1 ")->TrimEnd();
		}
	}

	System::Void typeRadio_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		RefreshCode();
	}

	System::Void versionTextBox_KeyPress(System::Object^ sender, KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && !Char::IsDigit(e->KeyChar))
			e->Handled = true;
	}

	System::Void versionTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		RefreshCode();
	}

	System::Void idTextBox_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (!Char::IsControl(e->KeyChar) && Char::IsWhiteSpace(e->KeyChar))
			e->Handled = true;
		else
			e->KeyChar = Char::ToUpper(e->KeyChar);
	}

	System::Void idTextBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		int PreviousSelectionStart = this->idTextBox->SelectionStart;
		int PreviousSelectionLength = this->idTextBox->SelectionLength;
		this->idTextBox->Text = this->idTextBox->Text->ToUpper();
		this->idTextBox->Select(PreviousSelectionStart, PreviousSelectionLength);

		RefreshCode();
	}

	System::Void versionTextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		if (String::Equals(this->versionTextBox->Text, "000"))
			this->versionTextBox->Text = "";
	}

	System::Void versionTextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		if (String::IsNullOrWhiteSpace(this->versionTextBox->Text))
			this->versionTextBox->Text = "000";
	}
};
}
