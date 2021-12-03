#pragma once

#include "FormPromptAddEdition.h"
#include "DBQuery.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormEditions
	/// </summary>
	public ref class FormEditions : public System::Windows::Forms::Form
	{
	public:
		FormEditions(void)
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
		~FormEditions()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ btnAddEdition;
	private: System::Windows::Forms::DataGridView^ tableEditions;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EName;
	private: System::Windows::Forms::Panel^ PanelButtons;
	private: System::Windows::Forms::Label^ lblDbIsEmpty;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionType;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Genre;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionDescription;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionPaperback;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionPrice;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ EditionDiscount;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Available;
	protected:
	protected:
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormEditions::typeid));
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->btnAddEdition = (gcnew System::Windows::Forms::Button());
			this->tableEditions = (gcnew System::Windows::Forms::DataGridView());
			this->EditionId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionName = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionType = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Genre = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionDescription = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionPaperback = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionPrice = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->EditionDiscount = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Available = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->PanelButtons = (gcnew System::Windows::Forms::Panel());
			this->lblDbIsEmpty = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableEditions))->BeginInit();
			this->PanelButtons->SuspendLayout();
			this->SuspendLayout();
			// 
			// btnAddEdition
			// 
			this->btnAddEdition->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->btnAddEdition->FlatAppearance->BorderSize = 2;
			this->btnAddEdition->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnAddEdition->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->btnAddEdition->ForeColor = System::Drawing::Color::Gainsboro;
			this->btnAddEdition->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnAddEdition.Image")));
			this->btnAddEdition->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->btnAddEdition->Location = System::Drawing::Point(533, 15);
			this->btnAddEdition->Name = L"btnAddEdition";
			this->btnAddEdition->Size = System::Drawing::Size(278, 60);
			this->btnAddEdition->TabIndex = 0;
			this->btnAddEdition->Text = L"Add edition";
			this->btnAddEdition->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnAddEdition->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->btnAddEdition->UseVisualStyleBackColor = true;
			this->btnAddEdition->Click += gcnew System::EventHandler(this, &FormEditions::btnAddEdition_Click);
			// 
			// tableEditions
			// 
			this->tableEditions->AllowUserToAddRows = false;
			this->tableEditions->AllowUserToOrderColumns = true;
			this->tableEditions->AllowUserToResizeColumns = false;
			this->tableEditions->AllowUserToResizeRows = false;
			this->tableEditions->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->tableEditions->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(33)), static_cast<System::Int32>(static_cast<System::Byte>(74)));
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableEditions->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle1;
			this->tableEditions->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->tableEditions->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(9) {
				this->EditionId,
					this->EditionName, this->EditionType, this->Genre, this->EditionDescription, this->EditionPaperback, this->EditionPrice, this->EditionDiscount,
					this->Available
			});
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tableEditions->DefaultCellStyle = dataGridViewCellStyle2;
			this->tableEditions->Dock = System::Windows::Forms::DockStyle::Top;
			this->tableEditions->Location = System::Drawing::Point(0, 0);
			this->tableEditions->MultiSelect = false;
			this->tableEditions->Name = L"tableEditions";
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle3->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableEditions->RowHeadersDefaultCellStyle = dataGridViewCellStyle3;
			this->tableEditions->RowHeadersWidthSizeMode = System::Windows::Forms::DataGridViewRowHeadersWidthSizeMode::AutoSizeToDisplayedHeaders;
			dataGridViewCellStyle4->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::Color::Black;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			this->tableEditions->RowsDefaultCellStyle = dataGridViewCellStyle4;
			this->tableEditions->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->tableEditions->Size = System::Drawing::Size(1347, 725);
			this->tableEditions->TabIndex = 1;
			this->tableEditions->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &FormEditions::tableEditions_CellEndEdit);
			this->tableEditions->UserDeletingRow += gcnew System::Windows::Forms::DataGridViewRowCancelEventHandler(this, &FormEditions::tableEditions_UserDeletingRow);
			// 
			// EditionId
			// 
			this->EditionId->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EditionId->FillWeight = 355.33F;
			this->EditionId->HeaderText = L"Id";
			this->EditionId->Name = L"EditionId";
			this->EditionId->Width = 70;
			// 
			// EditionName
			// 
			this->EditionName->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EditionName->FillWeight = 17.7665F;
			this->EditionName->HeaderText = L"Name";
			this->EditionName->Name = L"EditionName";
			this->EditionName->Width = 150;
			// 
			// EditionType
			// 
			this->EditionType->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EditionType->FillWeight = 17.7665F;
			this->EditionType->HeaderText = L"Type";
			this->EditionType->Name = L"EditionType";
			this->EditionType->Width = 150;
			// 
			// Genre
			// 
			this->Genre->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Genre->HeaderText = L"Genre";
			this->Genre->Name = L"Genre";
			this->Genre->Width = 150;
			// 
			// EditionDescription
			// 
			this->EditionDescription->FillWeight = 17.7665F;
			this->EditionDescription->HeaderText = L"Description";
			this->EditionDescription->Name = L"EditionDescription";
			// 
			// EditionPaperback
			// 
			this->EditionPaperback->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EditionPaperback->FillWeight = 255.8376F;
			this->EditionPaperback->HeaderText = L"Paperback";
			this->EditionPaperback->Name = L"EditionPaperback";
			this->EditionPaperback->Width = 110;
			// 
			// EditionPrice
			// 
			this->EditionPrice->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EditionPrice->FillWeight = 17.7665F;
			this->EditionPrice->HeaderText = L"Price";
			this->EditionPrice->Name = L"EditionPrice";
			this->EditionPrice->Width = 70;
			// 
			// EditionDiscount
			// 
			this->EditionDiscount->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->EditionDiscount->FillWeight = 17.7665F;
			this->EditionDiscount->HeaderText = L"Discount";
			this->EditionDiscount->Name = L"EditionDiscount";
			// 
			// Available
			// 
			this->Available->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::None;
			this->Available->HeaderText = L"Available";
			this->Available->Name = L"Available";
			// 
			// PanelButtons
			// 
			this->PanelButtons->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PanelButtons->Controls->Add(this->btnAddEdition);
			this->PanelButtons->Dock = System::Windows::Forms::DockStyle::Fill;
			this->PanelButtons->Location = System::Drawing::Point(0, 725);
			this->PanelButtons->Name = L"PanelButtons";
			this->PanelButtons->Size = System::Drawing::Size(1347, 99);
			this->PanelButtons->TabIndex = 2;
			// 
			// lblDbIsEmpty
			// 
			this->lblDbIsEmpty->AutoSize = true;
			this->lblDbIsEmpty->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 48, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->lblDbIsEmpty->ForeColor = System::Drawing::Color::Gainsboro;
			this->lblDbIsEmpty->Location = System::Drawing::Point(12, 63);
			this->lblDbIsEmpty->Name = L"lblDbIsEmpty";
			this->lblDbIsEmpty->Size = System::Drawing::Size(683, 85);
			this->lblDbIsEmpty->TabIndex = 1;
			this->lblDbIsEmpty->Text = L"DATABASE IS EMPTY";
			this->lblDbIsEmpty->Visible = false;
			// 
			// FormEditions
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 21);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(33)),
				static_cast<System::Int32>(static_cast<System::Byte>(74)));
			this->ClientSize = System::Drawing::Size(1347, 824);
			this->Controls->Add(this->lblDbIsEmpty);
			this->Controls->Add(this->PanelButtons);
			this->Controls->Add(this->tableEditions);
			this->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(4, 5, 4, 5);
			this->Name = L"FormEditions";
			this->Text = L"Editions";
			this->Load += gcnew System::EventHandler(this, &FormEditions::FormEditions_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableEditions))->EndInit();
			this->PanelButtons->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void UpdateTable()
	{
		tableEditions->Rows->Clear();
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		SqlCommand^ cmd = gcnew SqlCommand("Select Id, Name, Type, Genre, Description, Paperback, Price, Discount, Available From Editions", dbc);
		SqlDataReader^ sdr = cmd->ExecuteReader();
		if (sdr->HasRows)
		{
			while (sdr->Read())
			{
				DataGridViewRow^ row = gcnew DataGridViewRow();
				row->CreateCells(tableEditions);
				row->Cells[0]->Value = sdr["Id"]->ToString();
				row->Cells[2]->Value = sdr["Name"]->ToString();
				row->Cells[1]->Value = sdr["Type"]->ToString();
				row->Cells[3]->Value = sdr["Genre"]->ToString();
				row->Cells[4]->Value = sdr["Description"]->ToString();
				row->Cells[5]->Value = sdr["Paperback"]->ToString();
				row->Cells[6]->Value = sdr["Price"]->ToString();
				row->Cells[7]->Value = sdr["Discount"]->ToString();
				row->Cells[8]->Value = sdr["Available"]->ToString();
				row->MinimumHeight = 30;
				tableEditions->Rows->Add(row);
			}
		}
		else lblDbIsEmpty->Visible = true;
	}
	private: System::Void FormEditions_Load(System::Object^ sender, System::EventArgs^ e) {
		UpdateTable();
	}
	private: System::Void btnAddEdition_Click(System::Object^ sender, System::EventArgs^ e) {
		auto dr = (gcnew FormPromptAddEdition)->ShowDialog();
		if (dr == System::Windows::Forms::DialogResult::OK)
			UpdateTable();
	}
	private: System::Void tableEditions_UserDeletingRow(System::Object^ sender, System::Windows::Forms::DataGridViewRowCancelEventArgs^ e) {
		auto dr = MessageBox::Show(this, "Edition will be removed."
			+ " Are you sure to do it?", "Warning", MessageBoxButtons::YesNo, MessageBoxIcon::Warning);
		if (dr == System::Windows::Forms::DialogResult::No)
		{
			e->Cancel = true;
		}
		else
		{
			DataGridViewRow^ row = tableEditions->SelectedRows[0];
			DBQuery::DeleteRow(Convert::ToInt32(row->Cells["Id"]->Value), "Editions");
		}
	}
	private: System::Void tableEditions_CellEndEdit(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
		auto value = tableEditions->Rows[e->RowIndex]->Cells[e->ColumnIndex]->Value;
		if (e->ColumnIndex <= 4 && String::IsNullOrWhiteSpace(value->ToString()))
		{
			tableEditions->Refresh();
			return;
		}
		else if (e->ColumnIndex == 5 || e->ColumnIndex > 6)
		{
			if (Convert::ToInt32(value) < 0)
			{
				tableEditions->Refresh();
				return;
			}
		}
		else {
			if ((float)Convert::ToDouble(value) < 0.f)
			{
				tableEditions->Refresh();
				return;
			}
		}
		SqlConnection^ dbc = gcnew SqlConnection(DBQuery::connect_str);
		dbc->Open();
		String^ currentCell = tableEditions->Columns[e->ColumnIndex]->Name;
		String^ formatedName = "";
		for (int i = 7; i < currentCell->Length; i++)
			formatedName += currentCell[i];

		SqlCommand^ cmd = gcnew SqlCommand("Update Editions Set " + formatedName + " = @Value Where Id=@Id", dbc);
		cmd->Parameters->AddWithValue("@Id", tableEditions->Rows[e->RowIndex]->Cells[0]->Value);
		cmd->Parameters->AddWithValue("@Value", value);
		cmd->ExecuteNonQuery();
		dbc->Close();
	}
	};
}
