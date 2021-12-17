#pragma once

#include "Order.h"
#include "Customer.h"
#include "DBQuery.h"
#include "Order_history.h"

namespace MainApp {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for FormMyOrders
	/// </summary>
	public ref class FormMyOrders : public System::Windows::Forms::Form
	{
	public:
		FormMyOrders(Customer^ customer)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			this->customer = customer;
		}
		Customer^ customer;
	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~FormMyOrders()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowOrders;
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
			this->flowOrders = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowOrders
			// 
			this->flowOrders->AutoScroll = true;
			this->flowOrders->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->flowOrders->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(55)), static_cast<System::Int32>(static_cast<System::Byte>(55)),
				static_cast<System::Int32>(static_cast<System::Byte>(55)));
			this->flowOrders->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowOrders->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowOrders->Location = System::Drawing::Point(0, 0);
			this->flowOrders->Name = L"flowOrders";
			this->flowOrders->Size = System::Drawing::Size(1370, 659);
			this->flowOrders->TabIndex = 0;
			this->flowOrders->WrapContents = false;
			// 
			// FormMyOrders
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1370, 659);
			this->Controls->Add(this->flowOrders);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormMyOrders";
			this->Text = L"FormMyOrders";
			this->Load += gcnew System::EventHandler(this, &FormMyOrders::FormMyOrders_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		Order_history^ order_history = gcnew Order_history();
		Void SpawnOrders()
		{
			SqlConnection^ con = gcnew SqlConnection(DBQuery::connect_str);
			con->Open();
			SqlCommand^ cmd = gcnew SqlCommand("SELECT * FROM Orders WHERE CustomerID='" + customer->getId() + "'", con);
			SqlDataReader^ reader = cmd->ExecuteReader();
			if (reader->HasRows)
			{
				while (reader->Read())
				{
					auto editions_id = reader["EditionsID"]->ToString()->Split(' ');
					auto editions_coount = reader["EditionsCount"]->ToString()->Split(' ');

					List<String^>^ links = gcnew List<String^>();
					for (int i = 0; i < editions_id->Length; i++)
					{
						SqlConnection^ tmp_con = gcnew SqlConnection(DBQuery::connect_str);
						tmp_con->Open();
						SqlCommand^ tmp_cmd = gcnew SqlCommand("SELECT LinkToImg FROM Editions WHERE Id='" + editions_id[i] + "'", tmp_con);
						SqlDataReader^ tmp_r = tmp_cmd->ExecuteReader();
						if (tmp_r->HasRows)
						{
							tmp_r->Read();
							links->Add(tmp_r["LinkToImg"]->ToString());
						}
						tmp_con->Close();
					}
					Order^ order = gcnew Order;
					order->setId(Convert::ToInt32(reader["Id"]));
					order->setDate(Convert::ToDateTime(reader["DateCreateOrder"]));
					order->setPayStatus(Convert::ToBoolean(reader["PayStatus"]));
					Order_history::Data data
					{
						order,
						(float)Convert::ToDouble(reader["TotalSum"]),
						links,
						Convert::ToInt32(reader["ProcessStatus"])
					};
					order_history->orders->Add(data);
				}
				con->Close();
			}
			if (order_history->orders == nullptr || order_history == nullptr) return;

			for each (auto data in order_history->orders) {

				Panel^ panel = gcnew Panel;
				panel->AutoSize = true;
				panel->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
				panel->Location = System::Drawing::Point(3, 3);
				panel->MaximumSize = System::Drawing::Size(1375, 500);
				panel->MinimumSize = System::Drawing::Size(1375, 2);
				panel->Name = L"panel" + data.order->getId();
				panel->Size = System::Drawing::Size(1375, 79);

				if (data.order->getPayStatus() == false && data.process_status == 1) {
					Button^ btn_pay = gcnew Button;
					btn_pay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(0)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
						static_cast<System::Int32>(static_cast<System::Byte>(80)));
					btn_pay->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
					btn_pay->Font = (gcnew System::Drawing::Font(L"Cascadia Mono", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
						static_cast<System::Byte>(204)));
					btn_pay->ForeColor = System::Drawing::Color::WhiteSmoke;
					btn_pay->Location = System::Drawing::Point(1269, 18);
					btn_pay->Name = L"btn_pay" + data.order->getId();
					btn_pay->Size = System::Drawing::Size(87, 41);
					btn_pay->Text = L"Pay";
					btn_pay->UseVisualStyleBackColor = false;
					btn_pay->Click += gcnew System::EventHandler(this, &FormMyOrders::btn_pay_Click);
					panel->Controls->Add(btn_pay);
				}

				FlowLayoutPanel^ flow = gcnew FlowLayoutPanel;
				flow->AutoScroll = true;
				flow->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
				flow->Location = System::Drawing::Point(699, 3);
				flow->Name = L"flow" + data.order->getId();
				flow->Size = System::Drawing::Size(548, 71);
				flow->WrapContents = false;

				for each (auto link in data.image_links)
				{
					PictureBox^ pb = gcnew PictureBox;
					pb->ImageLocation = link;
					pb->Location = System::Drawing::Point(456, 3);
					pb->Name = L"edition_image" + data.order->getId();
					pb->Size = System::Drawing::Size(59, 43);
					pb->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
					pb->TabStop = false;
					flow->Controls->Add(pb);
				}

				Label^ value_order_price = gcnew Label;
				value_order_price->AutoSize = true;
				value_order_price->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				value_order_price->ForeColor = System::Drawing::Color::Gainsboro;
				value_order_price->Location = System::Drawing::Point(461, 53);
				value_order_price->Name = L"value_order_price" + data.order->getId();
				value_order_price->Size = System::Drawing::Size(46, 21);
				value_order_price->Text = data.total_sum.ToString() + "$";

				Label^ text_order_price = gcnew Label;
				text_order_price->AutoSize = true;
				text_order_price->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				text_order_price->ForeColor = System::Drawing::Color::DarkGray;
				text_order_price->Location = System::Drawing::Point(461, 6);
				text_order_price->Name = L"text_order_price" + data.order->getId();
				text_order_price->Size = System::Drawing::Size(109, 21);
				text_order_price->Text = L"Order price";

				Label^ text_status = gcnew Label;
				text_status->AutoSize = true;
				text_status->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				text_status->ForeColor = System::Drawing::Color::Gainsboro;
				text_status->Location = System::Drawing::Point(51, 53);
				text_status->Name = L"text_status" + data.order->getId();
				text_status->Size = System::Drawing::Size(64, 21);
				if (data.process_status == 1)
					text_status->Text = L"Waiting for payment";
				else if (data.process_status == 2)
					text_status->Text = L"Paid";
				else
					text_status->Text = L"Black list";

				Label^ id_and_date = gcnew Label;
				id_and_date->AutoSize = true;
				id_and_date->Font = (gcnew System::Drawing::Font(L"Cascadia Mono SemiBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
					static_cast<System::Byte>(204)));
				id_and_date->ForeColor = System::Drawing::Color::DarkGray;
				id_and_date->Location = System::Drawing::Point(51, 6);
				id_and_date->Name = L"id_and_date" + data.order->getId();
				id_and_date->Size = System::Drawing::Size(163, 21);
				id_and_date->Text = L"¹ " + +data.order->getId() + " of " + data.order->getDate();

				PictureBox^ picture_status = gcnew PictureBox;
				if (data.process_status == 1)
					picture_status->ImageLocation = "icons\\status_gray.png";
				else if (data.process_status == 2)
					picture_status->ImageLocation = "icons\\status_green.png";
				else
					picture_status->ImageLocation = "icons\\status_red.png";
				picture_status->Location = System::Drawing::Point(15, 14);
				picture_status->Name = L"picture_status" + data.order->getId();
				picture_status->Size = System::Drawing::Size(22, 53);
				picture_status->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
				picture_status->TabStop = false;

				panel->Controls->Add(flow);
				panel->Controls->Add(text_order_price);
				panel->Controls->Add(value_order_price);
				panel->Controls->Add(text_status);
				panel->Controls->Add(id_and_date);
				panel->Controls->Add(picture_status);
				flowOrders->Controls->Add(panel);
			}
		}
	private: System::Void btn_pay_Click(System::Object^ sender, System::EventArgs^ e)
	{
		auto btn = (Button^)sender;
		String^ id = btn->Name->Substring(7);
		String^ str_price = flowOrders->Controls["panel" + id]->Controls["value_order_price" + id]->Text->Remove(
			flowOrders->Controls["panel" + id]->Controls["value_order_price" + id]->Text->Length - 1);
		float price = (float)Math::Round(Convert::ToDouble(str_price), 2);
		if (customer->getMoney() >= price)
		{
			SqlConnection^ con = gcnew SqlConnection(DBQuery::connect_str);
			con->Open();
			SqlCommand^ cmd = gcnew SqlCommand("UPDATE Orders SET PayStatus=@PayStatus, ProcessStatus=@ProcessStatus WHERE Id=@Id", con);
			cmd->Parameters->AddWithValue("@PayStatus", true);
			cmd->Parameters->AddWithValue("@ProcessStatus", Status::PAID);
			cmd->Parameters->AddWithValue("@Id", Int32::Parse(id));
			cmd->ExecuteNonQuery();
			con->Close();
			flowOrders->Controls["panel" + id]->Controls->RemoveByKey("btn_pay" + id);
			((PictureBox^)flowOrders->Controls["panel" + id]->Controls["picture_status" + id])->ImageLocation = "icons\\status_green.png";
			flowOrders->Controls["panel" + id]->Controls["text_status" + id]->Text = "Paid";
			SqlConnection^ con2 = gcnew SqlConnection(DBQuery::connect_str);
			con2->Open();
			SqlCommand^ cmd2 = gcnew SqlCommand("UPDATE Accounts SET Money=@Money WHERE Id='" + customer->getId() + "'", con2);
			cmd2->Parameters->AddWithValue("@Money", (float)Math::Round(customer->getMoney() - price, 2));
			cmd2->ExecuteNonQuery();
			con2->Close();
			customer->setMoney((float)Math::Round(customer->getMoney() - price, 2));
		}
		else {
			MessageBox::Show(this, "You don't have enough money to pay it order, please top up your balance!", "Not enough money",
				MessageBoxButtons::OK, MessageBoxIcon::Warning);
		}
	}
	private: System::Void FormMyOrders_Load(System::Object^ sender, System::EventArgs^ e) {
		SpawnOrders();
	}
	};
}
