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
	/// Summary for FormOrders
	/// </summary>
	public ref class FormOrders : public System::Windows::Forms::Form
	{
	public:
		FormOrders(Label^ label)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->label = label;
		}
		Label^ label;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	protected:
	private: System::Windows::Forms::Label^ lblError404;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Id;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ CustomerEmail;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionsID;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionsCount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ TotalSum;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ DateCreateOrder;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ PayStatus;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ ProcessStatus;
	private: System::Windows::Forms::Button^ button3;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle6 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle7 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle8 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle9 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle10 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Id = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->CustomerEmail = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionsID = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionsCount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->TotalSum = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->DateCreateOrder = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PayStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->ProcessStatus = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->lblError404 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			dataGridViewCellStyle6->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle6->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle6->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle6->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle6;
			this->dataGridView1->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dataGridView1->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->dataGridView1->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Single;
			dataGridViewCellStyle7->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle7->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle7->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle7->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle7->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle7->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle7->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle7;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(10) {
				this->Id, this->CustomerID,
					this->CustomerName, this->CustomerEmail, this->EditionsID, this->EditionsCount, this->TotalSum, this->DateCreateOrder, this->PayStatus,
					this->ProcessStatus
			});
			dataGridViewCellStyle8->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle8->BackColor = System::Drawing::Color::White;
			dataGridViewCellStyle8->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle8->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle8->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle8->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle8->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle8;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Top;
			this->dataGridView1->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->dataGridView1->GridColor = System::Drawing::Color::Black;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->MultiSelect = false;
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			this->dataGridView1->RowHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::Sunken;
			dataGridViewCellStyle9->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle9->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle9->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle9->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle9->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle9->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle9;
			this->dataGridView1->RowHeadersWidth = 40;
			this->dataGridView1->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::DisableResizing;
			dataGridViewCellStyle10->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle10->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle10->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle10->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle10->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->dataGridView1->RowsDefaultCellStyle = dataGridViewCellStyle10;
			this->dataGridView1->RowTemplate->Height = 50;
			this->dataGridView1->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->dataGridView1->Size = System::Drawing::Size(1347, 739);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &FormOrders::dataGridView1_UserDeletingRow);
			// 
			// Id
			// 
			this->Id->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Id->HeaderText = L"OrderID";
			this->Id->Name = L"Id";
			this->Id->ReadOnly = true;
			// 
			// CustomerID
			// 
			this->CustomerID->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->CustomerID->HeaderText = L"CustomerID";
			this->CustomerID->Name = L"CustomerID";
			this->CustomerID->ReadOnly = true;
			this->CustomerID->Width = 125;
			// 
			// CustomerName
			// 
			this->CustomerName->HeaderText = L"CustomerName";
			this->CustomerName->Name = L"CustomerName";
			this->CustomerName->ReadOnly = true;
			// 
			// CustomerEmail
			// 
			this->CustomerEmail->HeaderText = L"CustomerEmail";
			this->CustomerEmail->Name = L"CustomerEmail";
			this->CustomerEmail->ReadOnly = true;
			// 
			// EditionsID
			// 
			this->EditionsID->HeaderText = L"EditionsID";
			this->EditionsID->Name = L"EditionsID";
			this->EditionsID->ReadOnly = true;
			// 
			// EditionsCount
			// 
			this->EditionsCount->HeaderText = L"EditionsCount";
			this->EditionsCount->Name = L"EditionsCount";
			this->EditionsCount->ReadOnly = true;
			// 
			// TotalSum
			// 
			this->TotalSum->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->TotalSum->HeaderText = L"TotalSum";
			this->TotalSum->Name = L"TotalSum";
			this->TotalSum->ReadOnly = true;
			this->TotalSum->Width = 125;
			// 
			// DateCreateOrder
			// 
			this->DateCreateOrder->HeaderText = L"DateCreateOrder";
			this->DateCreateOrder->Name = L"DateCreateOrder";
			this->DateCreateOrder->ReadOnly = true;
			// 
			// PayStatus
			// 
			this->PayStatus->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->PayStatus->HeaderText = L"PayStatus";
			this->PayStatus->Name = L"PayStatus";
			this->PayStatus->ReadOnly = true;
			// 
			// ProcessStatus
			// 
			this->ProcessStatus->HeaderText = L"ProcessStatus";
			this->ProcessStatus->Name = L"ProcessStatus";
			this->ProcessStatus->ReadOnly = true;
			// 
			// lblError404
			// 
			this->lblError404->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->lblError404->AutoSize = true;
			this->lblError404->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->lblError404->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblError404->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblError404->Location = System::Drawing::Point(12, 36);
			this->lblError404->Name = L"lblError404";
			this->lblError404->Size = System::Drawing::Size(683, 85);
			this->lblError404->TabIndex = 3;
			this->lblError404->Text = L"DATABASE IS EMPTY";
			this->lblError404->Visible = false;
			// 
			// button1
			// 
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Gainsboro;
			this->button1->Location = System::Drawing::Point(280, 745);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(270, 55);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Show overdue orders";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &FormOrders::button1_Click);
			// 
			// button2
			// 
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->ForeColor = System::Drawing::Color::Gainsboro;
			this->button2->Location = System::Drawing::Point(556, 745);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(270, 55);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Show all orders";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &FormOrders::button2_Click);
			// 
			// button3
			// 
			this->button3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->ForeColor = System::Drawing::Color::Gainsboro;
			this->button3->Location = System::Drawing::Point(832, 745);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(310, 55);
			this->button3->TabIndex = 6;
			this->button3->Text = L"Show black list orders";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &FormOrders::button3_Click);
			// 
			// FormOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 824);
			this->Controls->Add(this->lblError404);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormOrders";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &FormOrders::FormOrders_FormClosing);
			this->Load += gcnew System::EventHandler(this, &FormOrders::FormOrders_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean updateDataGrid(int mode, String^ tableName)
	{
		dataGridView1->Rows->Clear();
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand("Select * From " + tableName, dbc);
		SqlDataReader^ sdr = cmd->ExecuteReader();
		if (sdr->HasRows)
		{
			if (mode == 0) {
				String^ id;
				if (tableName == "Orders")
					id = "Id";
				else
					id = "OrderID";

				while (sdr->Read())
				{
					DataGridViewRow^ newRow = gcnew DataGridViewRow();
					newRow->CreateCells(dataGridView1);
					newRow->Cells[0]->Value = sdr[id]->ToString();
					newRow->Cells[1]->Value = sdr["CustomerID"]->ToString();
					newRow->Cells[2]->Value = sdr["CustomerName"]->ToString();
					newRow->Cells[3]->Value = sdr["CustomerEmail"]->ToString();
					newRow->Cells[4]->Value = sdr["EditionsID"]->ToString();
					newRow->Cells[5]->Value = sdr["EditionsCount"]->ToString();
					newRow->Cells[6]->Value = sdr["TotalSum"]->ToString();
					newRow->Cells[7]->Value = sdr["DateCreateOrder"]->ToString();
					if (tableName == "Orders") {
						newRow->Cells[8]->Value = sdr["PayStatus"]->ToString();
						newRow->Cells[9]->Value = sdr["ProcessStatus"]->ToString();
					}
					newRow->MinimumHeight = 30;
					dataGridView1->Rows->Add(newRow);
				}
			}
			else if (tableName != "OrdersBlackList") {
				while (sdr->Read())
				{
					if ((DateTime::Now - (Convert::ToDateTime(sdr["DateCreateOrder"]))).TotalHours >= 12 && 
						(!Convert::ToBoolean(sdr["PayStatus"]))) 
					{
						DataGridViewRow^ newRow = gcnew DataGridViewRow();
						newRow->CreateCells(dataGridView1);
						newRow->Cells[0]->Value = sdr["Id"]->ToString();
						newRow->Cells[1]->Value = sdr["CustomerID"]->ToString();
						newRow->Cells[2]->Value = sdr["CustomerName"]->ToString();
						newRow->Cells[3]->Value = sdr["CustomerEmail"]->ToString();
						newRow->Cells[4]->Value = sdr["EditionsID"]->ToString();
						newRow->Cells[5]->Value = sdr["EditionsCount"]->ToString();
						newRow->Cells[6]->Value = sdr["TotalSum"]->ToString();
						newRow->Cells[7]->Value = sdr["DateCreateOrder"]->ToString();
						newRow->Cells[8]->Value = sdr["PayStatus"]->ToString();
						newRow->Cells[9]->Value = sdr["ProcessStatus"]->ToString();
						newRow->MinimumHeight = 30;
						dataGridView1->Rows->Add(newRow);
					}
				}
			}
			dbc->Close();
			return true;
		}
		dbc->Close();
		return false;
	}
	private: System::Void FormOrders_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		lblError404->Visible = false;
		if (!updateDataGrid(1, "Orders"))
		{
			lblError404->Visible = true;
		}
		dataGridView1->AllowUserToDeleteRows = true;
		label->Text = "Overdue orders";
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		lblError404->Visible = false;
		if (!updateDataGrid(0, "Orders"))
		{
			lblError404->Visible = true;
		}
		dataGridView1->AllowUserToDeleteRows = false;
		label->Text = "All orders";
	}
	private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {
		lblError404->Visible = false;
		if (!updateDataGrid(0, "OrdersBlackList"))
		{
			lblError404->Visible = true;
		}
		dataGridView1->AllowUserToDeleteRows = false;
		label->Text = "Orders in black list";
	}
	private: System::Void dataGridView1_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
		auto dr = MessageBox::Show(this, "Order will be removed to black list."
			+ " Are you sure to do it?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (dr == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
		else
		{
			DataGridViewRow^ row = dataGridView1->SelectedRows[0];
			SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
			dbc->Open();
			SqlCommand^ cmd = gcnew SqlCommand("Insert Into OrdersBlackList" +
				" (OrderID, CustomerID, CustomerName, CustomerEmail, EditionsID, EditionsCount, TotalSum, DateCreateOrder)" +
				" Values (@OrderID, @CustomerID, @CustomerName, @CustomerEmail, @EditionsID, @EditionsCount, @TotalSum, @DateCreateOrder)", dbc);
			cmd->Parameters->AddWithValue("@OrderID", Convert::ToInt32(row->Cells["Id"]->Value));
			cmd->Parameters->AddWithValue("@CustomerID", Convert::ToInt32(row->Cells["CustomerID"]->Value));
			cmd->Parameters->AddWithValue("@CustomerName", row->Cells["CustomerName"]->Value->ToString());
			cmd->Parameters->AddWithValue("@CustomerEmail", row->Cells["CustomerEmail"]->Value->ToString());
			cmd->Parameters->AddWithValue("@EditionsID", row->Cells["EditionsID"]->Value->ToString());
			cmd->Parameters->AddWithValue("@EditionsCount", row->Cells["EditionsCount"]->Value->ToString());
			cmd->Parameters->AddWithValue("@TotalSum", (float)Math::Round(Convert::ToDouble(row->Cells["TotalSum"]->Value), 2));
			cmd->Parameters->AddWithValue("@DateCreateOrder", Convert::ToDateTime(row->Cells["DateCreateOrder"]->Value));
			cmd->ExecuteNonQuery();
			dbc->Close();
			DBQuery::DeleteRow(Convert::ToInt32(row->Cells["Id"]->Value), "Orders");
		}
	}

	private: System::Void FormOrders_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		label->Visible = false;
	}
	};
}

