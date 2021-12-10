#pragma once

#include "DBQuery.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormClients
	/// </summary>
	public ref class FormClients : public System::Windows::Forms::Form
	{
	public:
		FormClients(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormClients()
		{
			if (components)
			{
				delete components;
			}
		}








	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Label^ lblError404;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ City;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Money;






























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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblError404 = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Money = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToOrderColumns = true;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {
				this->Id, this->CName,
					this->Email, this->Country, this->City, this->Money
			});
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle3;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidth = 40;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle5->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(1347, 824);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &FormClients::dataGridView1_UserDeletingRow);
			// 
			// lblError404
			// 
			this->lblError404->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblError404->AutoSize = true;
			this->lblError404->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblError404->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblError404->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblError404->Location = System::Drawing::Point(12, 39);
			this->lblError404->Name = L"lblError404";
			this->lblError404->Size = System::Drawing::Size(683, 85);
			this->lblError404->TabIndex = 2;
			this->lblError404->Text = L"DATABASE IS EMPTY";
			this->lblError404->Visible = false;
			// 
			// Id
			// 
			this->Id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Id->FillWeight = 0.2383647F;
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 100;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// CName
			// 
			this->CName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->CName->FillWeight = 28.81814F;
			this->CName->HeaderText = L"Name";
			this->CName->MinimumWidth = 275;
			this->CName->Name = L"CName";
			this->CName->ReadOnly = true;
			this->CName->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->CName->Width = 275;
			// 
			// Email
			// 
			this->Email->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Email->FillWeight = 369.5431F;
			this->Email->HeaderText = L"Email";
			this->Email->MinimumWidth = 275;
			this->Email->Name = L"Email";
			this->Email->ReadOnly = true;
			this->Email->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Email->Width = 275;
			// 
			// Country
			// 
			this->Country->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Country->HeaderText = L"Country";
			this->Country->MinimumWidth = 200;
			this->Country->Name = L"Country";
			this->Country->ReadOnly = true;
			this->Country->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Country->Width = 200;
			// 
			// City
			// 
			this->City->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->City->HeaderText = L"City";
			this->City->MinimumWidth = 200;
			this->City->Name = L"City";
			this->City->ReadOnly = true;
			this->City->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->City->Width = 200;
			// 
			// Money
			// 
			this->Money->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::Fill;
			this->Money->FillWeight = 1.400316F;
			this->Money->HeaderText = L"Money";
			this->Money->MinimumWidth = 80;
			this->Money->Name = L"Money";
			this->Money->ReadOnly = true;
			this->Money->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// FormClients
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 824);
			this->Controls->Add(this->lblError404);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormClients";
			this->Text = L"Clients";
			this->Load += gcnew System::EventHandler(this, &FormClients::FormClients_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean updateDataGrid()
	{
		dataGridView1->Rows->Clear();
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand("Select Id, Name, Email,Country, City, Money From Accounts", dbc);
		SqlDataReader^ sdr = cmd->ExecuteReader();
		if (sdr->HasRows)
		{
			while (sdr->Read())
			{
				DataGridViewRow^ newRow = gcnew DataGridViewRow();
				newRow->CreateCells(dataGridView1);
				newRow->Cells[0]->Value = sdr["Id"]->ToString();
				newRow->Cells[1]->Value = sdr["Name"]->ToString();
				newRow->Cells[2]->Value = sdr["Email"]->ToString();
				newRow->Cells[3]->Value = sdr["Country"]->ToString();
				newRow->Cells[4]->Value = sdr["City"]->ToString();
				newRow->Cells[5]->Value = sdr["Money"]->ToString();
				newRow->MinimumHeight = 30;
				dataGridView1->Rows->Add(newRow);
			}
			return true;
		}
		return false;
	}
	private: System::Void FormClients_Load(System::Object^ sender, System::EventArgs^ e) {
		if(!updateDataGrid())
		{
			lblError404->Visible = true;
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
		auto dr = MessageBox::Show(this, "Account will be permanently removed without possibility of recovery."
			+ " Are you sure to do it?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (dr == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
		else
		{
			DataGridViewRow^ row = dataGridView1->SelectedRows[0];
			DBQuery::DeleteRow(Convert::ToInt32(row->Cells["Id"]->Value), "Clients");
		}
	}
	};
}
