#pragma once

#include "Mailer.h"
#include "DBQuery.h"

namespace AppForOwner {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormRequestsAR
	/// </summary>
	public ref class FormRequestsAR : public System::Windows::Forms::Form
	{
	private:
		DBQuery^ db = gcnew DBQuery();
		static ArrayList^ ListId;
		static ArrayList^ ListName;
		static ArrayList^ ListEmail;
		static ArrayList^ ListDateTime;

	public:
	private: System::Windows::Forms::DataGridView^ dataGridView2;
	private: System::Windows::Forms::Label^ lblError404;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Fullname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateTime;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s_Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s_Fullname;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s_Email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ s_DateTime;
	public:
		FormRequestsAR(void)
		{
			InitializeComponent();
			ListId = gcnew ArrayList();
			ListName = gcnew ArrayList();
			ListEmail = gcnew ArrayList();
			ListDateTime = gcnew ArrayList();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormRequestsAR()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:




	private: System::Windows::Forms::Label^ lblTitle;





	private: System::Windows::Forms::Button^ btnSend;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormRequestsAR::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->btnSend = (gcnew System::Windows::Forms::Button());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->lblError404 = (gcnew System::Windows::Forms::Label());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Fullname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s_Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s_Fullname = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s_Email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->s_DateTime = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->dataGridView1->BorderStyle = System::Windows::Forms::BorderStyle::None;
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
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->Id, this->Fullname,
					this->Email, this->DateTime
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
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
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
			this->dataGridView1->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView1->Size = System::Drawing::Size(1347, 514);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->SelectionChanged += gcnew System::EventHandler(this, &FormRequestsAR::dataGridView1_SelectionChanged);
			// 
			// lblTitle
			// 
			this->lblTitle->AutoSize = true;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 27.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblTitle->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblTitle->Location = System::Drawing::Point(478, 517);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(374, 49);
			this->lblTitle->TabIndex = 2;
			this->lblTitle->Text = L"Selected request";
			// 
			// btnSend
			// 
			this->btnSend->FlatAppearance->BorderSize = 2;
			this->btnSend->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSend->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnSend->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnSend->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnSend.Image")));
			this->btnSend->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSend->Location = System::Drawing::Point(487, 671);
			this->btnSend->Name = L"btnSend";
			this->btnSend->Padding = System::Windows::Forms::Padding(5, 0, 0, 0);
			this->btnSend->Size = System::Drawing::Size(375, 84);
			this->btnSend->TabIndex = 4;
			this->btnSend->Text = L" Send activation key";
			this->btnSend->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnSend->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnSend->UseVisualStyleBackColor = true;
			this->btnSend->Click += gcnew System::EventHandler(this, &FormRequestsAR::btnSend_Click);
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView2->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView2->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView2->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllCells;
			this->dataGridView2->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->dataGridView2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->dataGridView2->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {
				this->s_Id, this->s_Fullname,
					this->s_Email, this->s_DateTime
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView2->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView2->GridColor = System::Drawing::Color::Black;
			this->dataGridView2->Location = System::Drawing::Point(0, 569);
			this->dataGridView2->MultiSelect = false;
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->ReadOnly = true;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle9->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView2->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView2->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView2->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView2->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView2->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->dataGridView2->Size = System::Drawing::Size(1347, 86);
			this->dataGridView2->TabIndex = 3;
			this->dataGridView2->RowsAdded += gcnew System::Windows::Forms::DataGridViewRowsAddedEventHandler(this, &FormRequestsAR::dataGridView2_RowsAdded);
			// 
			// lblError404
			// 
			this->lblError404->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblError404->AutoSize = true;
			this->lblError404->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblError404->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblError404->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblError404->Location = System::Drawing::Point(234, 349);
			this->lblError404->Name = L"lblError404";
			this->lblError404->Size = System::Drawing::Size(867, 63);
			this->lblError404->TabIndex = 5;
			this->lblError404->Text = L"#ERROR 404 : DATABASE IS EMPTY";
			this->lblError404->Visible = false;
			// 
			// Id
			// 
			this->Id->FillWeight = 0.2383647F;
			this->Id->HeaderText = L"Id";
			this->Id->MinimumWidth = 100;
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			// 
			// Fullname
			// 
			this->Fullname->FillWeight = 28.81814F;
			this->Fullname->HeaderText = L"Fullname";
			this->Fullname->MinimumWidth = 400;
			this->Fullname->Name = L"Fullname";
			this->Fullname->ReadOnly = true;
			// 
			// Email
			// 
			this->Email->FillWeight = 369.5431F;
			this->Email->HeaderText = L"Email";
			this->Email->MinimumWidth = 400;
			this->Email->Name = L"Email";
			this->Email->ReadOnly = true;
			// 
			// DateTime
			// 
			this->DateTime->HeaderText = L"DateTime";
			this->DateTime->MinimumWidth = 325;
			this->DateTime->Name = L"DateTime";
			this->DateTime->ReadOnly = true;
			// 
			// s_Id
			// 
			this->s_Id->FillWeight = 0.2383647F;
			this->s_Id->HeaderText = L"Id";
			this->s_Id->MinimumWidth = 100;
			this->s_Id->Name = L"s_Id";
			this->s_Id->ReadOnly = true;
			// 
			// s_Fullname
			// 
			this->s_Fullname->FillWeight = 28.81814F;
			this->s_Fullname->HeaderText = L"Fullname";
			this->s_Fullname->MinimumWidth = 400;
			this->s_Fullname->Name = L"s_Fullname";
			this->s_Fullname->ReadOnly = true;
			// 
			// s_Email
			// 
			this->s_Email->FillWeight = 369.5431F;
			this->s_Email->HeaderText = L"Email";
			this->s_Email->MinimumWidth = 400;
			this->s_Email->Name = L"s_Email";
			this->s_Email->ReadOnly = true;
			// 
			// s_DateTime
			// 
			this->s_DateTime->HeaderText = L"DateTime";
			this->s_DateTime->MinimumWidth = 325;
			this->s_DateTime->Name = L"s_DateTime";
			this->s_DateTime->ReadOnly = true;
			// 
			// FormRequestsAR
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 824);
			this->Controls->Add(this->lblError404);
			this->Controls->Add(this->btnSend);
			this->Controls->Add(this->dataGridView2);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormRequestsAR";
			this->Text = L"FormRequestsAR";
			this->Load += gcnew System::EventHandler(this, &FormRequestsAR::FormRequestsAR_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void GetData()
	{
		try
		{
			db->Open();
			String^ query = "Select * From RequestsToCreateAdminAccount";
			SqlDataReader^ row = db->ExecuteReader(query);
			if (row->HasRows)
			{
				while (row->Read())
				{
					ListId->Add(row["Id"]->ToString());
					ListName->Add(row["Fullname"]->ToString());
					ListEmail->Add(row["Email"]->ToString());
					ListDateTime->Add(row["DateTime"]->ToString());
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
			newRow->Cells[3]->Value = ListDateTime[i];
			dataGridView1->Rows->Add(newRow);
		}
	}
	private: System::Void FormRequestsAR_Load(System::Object^ sender, System::EventArgs^ e) {
		btnSend->Enabled = false;
		GetData();
		if (ListId->Count > 0)
		{
			updateDataGrid();
		}
		else
		{
			lblError404->Visible = true;
			dataGridView1->Visible = false;
			dataGridView2->Visible = false;
			lblTitle->Visible = false;
			btnSend->Visible = false;
		}
	}

	private: System::Void btnSend_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ charset = "qQwWeErRtTyYuUiIoOpPaAsSdDfFgGhHjJkKlLzZxXcCvVbBnNmM1234567890";
		Random^ rand = gcnew Random();
		String^ key = "";
		for (int i = 0; i < 15; i++)
		{
			key += (Char)charset[rand->Next(0, charset->Length - 1)];
		}
		Int32 id = Convert::ToInt32(dataGridView2->Rows[0]->Cells["s_Id"]->Value);
		String^ to = (String^)dataGridView2->Rows[0]->Cells["s_Email"]->Value;
		Mailer::SendMail(
			gcnew MailAddress(to),
			"Admin root activation key",
			"<h2 style=""margin:0"">Your activation key is: " + key + "</h2><br></br>" +
			"© Oleg Voloshyn, 2021. All riâghts reserved."
		);
		db->CreateAdmin(id, key);
		db->DeleteRow(id, DBQuery::tableRequestsToCreateAdminAccount);
		dataGridView1->Rows->RemoveAt(dataGridView1->SelectedRows[0]->Index);
		dataGridView2->Rows->RemoveAt(0);
	}
	private: System::Void dataGridView1_SelectionChanged(System::Object^ sender, System::EventArgs^ e) {
		if (dataGridView1->SelectedRows->Count == 1)
		{
			DataGridViewRow^ selected = dataGridView1->SelectedRows[0];
			dataGridView2->Rows->Clear();
			DataGridViewRow^ newRow = gcnew DataGridViewRow();
			newRow->CreateCells(dataGridView2);
			newRow->Cells[0]->Value = selected->Cells["Id"]->Value;
			newRow->Cells[1]->Value = selected->Cells["Fullname"]->Value;
			newRow->Cells[2]->Value = selected->Cells["Email"]->Value;
			newRow->Cells[3]->Value = selected->Cells["DateTime"]->Value;
			dataGridView2->Rows->Add(newRow);
		}
	}
	private: System::Void dataGridView2_RowsAdded(System::Object^ sender, System::Windows::Forms::DataGridViewRowsAddedEventArgs^ e) {
		btnSend->Enabled = true;
	}
	};
}
