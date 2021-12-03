#pragma once

#include "DBQuery.h"

namespace AppForOwner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormAdmins
	/// </summary>
	public ref class FormAdmins : public System::Windows::Forms::Form
	{

	private: System::Windows::Forms::DataGridView^ dataGridView1;





	private: System::Windows::Forms::Label^ lblError404;

	private:
		DBQuery^ db = gcnew DBQuery();
		static ArrayList^ ListId;
		static ArrayList^ ListName;
		static ArrayList^ ListEmail;
		static ArrayList^ ListAge;
		static ArrayList^ ListSex;
		static ArrayList^ ListCountry;
		static ArrayList^ ListCity;
		static ArrayList^ ListRootStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fullname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Age;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Sex;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ City;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RootStatus;

	public:
		FormAdmins(void)
		{
			InitializeComponent();
			ListId = gcnew ArrayList();
			ListName = gcnew ArrayList();
			ListEmail = gcnew ArrayList();
			ListAge = gcnew ArrayList();
			ListSex = gcnew ArrayList();
			ListCountry = gcnew ArrayList();
			ListCity = gcnew ArrayList();
			ListRootStatus = gcnew ArrayList(); 
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormAdmins()
		{
			if (components)
			{
				delete components;
			}
		}

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
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fullname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Age = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Sex = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->City = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RootStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblError404 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Id, this->Fullname,
					this->Email, this->Age, this->Sex, this->Country, this->City, this->RootStatus
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
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle5->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle5->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(1362, 823);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &FormAdmins::dataGridView1_UserDeletingRow);
			// 
			// Id
			// 
			this->Id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::AllCellsExceptHeader;
			this->Id->FillWeight = 0.2383647F;
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 100;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			this->Id->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Fullname
			// 
			this->Fullname->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Fullname->FillWeight = 28.81814F;
			this->Fullname->HeaderText = L"Fullname";
			this->Fullname->MinimumWidth = 275;
			this->Fullname->Name = L"Fullname";
			this->Fullname->ReadOnly = true;
			this->Fullname->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Fullname->Width = 275;
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
			// Age
			// 
			this->Age->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Age->HeaderText = L"Age";
			this->Age->MinimumWidth = 100;
			this->Age->Name = L"Age";
			this->Age->ReadOnly = true;
			this->Age->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// Sex
			// 
			this->Sex->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Sex->HeaderText = L"Sex";
			this->Sex->MinimumWidth = 100;
			this->Sex->Name = L"Sex";
			this->Sex->ReadOnly = true;
			this->Sex->Resizable = System::Windows::Forms::DataGridViewTriState::False;
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
			this->City->MinimumWidth = 175;
			this->City->Name = L"City";
			this->City->ReadOnly = true;
			this->City->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->City->Width = 175;
			// 
			// RootStatus
			// 
			this->RootStatus->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->RootStatus->FillWeight = 1.400316F;
			this->RootStatus->HeaderText = L"Root Status";
			this->RootStatus->MinimumWidth = 100;
			this->RootStatus->Name = L"RootStatus";
			this->RootStatus->ReadOnly = true;
			this->RootStatus->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			// 
			// lblError404
			// 
			this->lblError404->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblError404->AutoSize = true;
			this->lblError404->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblError404->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblError404->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblError404->Location = System::Drawing::Point(12, 60);
			this->lblError404->Name = L"lblError404";
			this->lblError404->Size = System::Drawing::Size(683, 85);
			this->lblError404->TabIndex = 2;
			this->lblError404->Text = L"DATABASE IS EMPTY";
			this->lblError404->Visible = false;
			// 
			// FormAdmins
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 824);
			this->Controls->Add(this->lblError404);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormAdmins";
			this->Text = L"FormAdmins";
			this->Load += gcnew System::EventHandler(this, &FormAdmins::FormAdmins_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GetData()
	{
		try
		{
			db->Open();
			String^ query = "Select Id, Email, Fullname, Age, Sex, Country, City, RootStatus From Admins";
			SqlDataReader^ row = db->ExecuteReader(query);
			if (row->HasRows)
			{
				while (row->Read())
				{
					ListId->Add(row["Id"]->ToString());
					ListEmail->Add(row["Email"]->ToString());
					ListName->Add(row["Fullname"]->ToString());
					ListAge->Add(row["Age"]->ToString());
					ListSex->Add(row["Sex"]->ToString());
					ListCountry->Add(row["Country"]->ToString());
					ListCity->Add(row["City"]->ToString());
					ListRootStatus->Add(row["RootStatus"]->ToString());
				}
			}
			db->Close();
		}
		catch (Exception^ e)
		{
			DBQuery::writeErr(e->Message);
		}
	}
	private: System::Void updateDataGrid()
	{
		dataGridView1->Rows->Clear();
		for (int i = 0; i < ListId->Count; i++)
		{
			DataGridViewRow^ newRow = gcnew DataGridViewRow();
			newRow->CreateCells(dataGridView1);
			newRow->Cells[0]->Value = ListId[i];
			newRow->Cells[1]->Value = ListName[i];
			newRow->Cells[2]->Value = ListEmail[i];
			newRow->Cells[3]->Value = ListAge[i];
			newRow->Cells[4]->Value = ListSex[i];
			newRow->Cells[5]->Value = ListCountry[i];
			newRow->Cells[6]->Value = ListCity[i];
			newRow->Cells[7]->Value = ListRootStatus[i];
			dataGridView1->Rows->Add(newRow);
		}
	}
	private: System::Void FormAdmins_Load(System::Object^ sender, System::EventArgs^ e) {
		GetData();
		if (ListId->Count > 0)
		{
			updateDataGrid();
		}
		else
		{
			lblError404->Visible = true;
		}
	}
	private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void dataGridView1_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
		auto dr = MessageBox::Show(this, "Delete?", "Q", MessageBoxButtons::YesNo);
		if (dr == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
		else
		{
			DataGridViewRow^ row = dataGridView1->SelectedRows[0];
			db->DeleteRow(Convert::ToInt32(row->Cells["Id"]->Value), DBQuery::tableAdmins);
		}
	}
};
}
