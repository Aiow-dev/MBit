#pragma once
#include <iostream>
#include <string>
#include <windows.h>
#include <fstream>
#include <random>
#include <stdlib.h>
namespace MBit {
	using namespace std;
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;
	using namespace System::Threading;
	using namespace Runtime::InteropServices;
	/// <summary>
	/// Сводка для TextInBit
	/// </summary>
	public ref class TextInBit : public System::Windows::Forms::Form
	{
	public:
		TextInBit(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~TextInBit()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ button_exit;
	protected:


	private: System::Windows::Forms::Label^ write_text;


	private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;

	private: System::Windows::Forms::Label^ upload_file;

	private: System::Windows::Forms::Label^ button_play_music;
	private: System::Windows::Forms::Label^ name_music;
	private: System::Windows::Forms::Label^ button_inbit;

	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::Label^ button_openpanel;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Label^ button_action_outbit;
	private: System::Windows::Forms::Label^ button_action_inbit;


	private: System::Windows::Forms::Label^ text_outbit;
	private: System::Windows::Forms::RichTextBox^ field_textinbit;
	private: System::Windows::Forms::RichTextBox^ field_outbit;


	private: System::Windows::Forms::Label^ MBit_text;
	private: System::Windows::Forms::Label^ button_closepanel;
	private: System::Windows::Forms::ToolTip^ toolTip1;

	private: System::Windows::Forms::RichTextBox^ directory_text;
	private: System::Windows::Forms::Label^ library_track;
	private: System::Windows::Forms::RichTextBox^ list_tracks;
	private: System::Windows::Forms::RichTextBox^ write_id;

	private: System::Windows::Forms::RichTextBox^ tracks;
	private: System::Windows::Forms::Label^ clear_library_tracks;
	private: System::Windows::Forms::Label^ restore_library_tracks;
	private: System::Windows::Forms::Label^ player_music;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::Label^ exit_app;
	private: System::Windows::Forms::Label^ convert_button;
	private: System::Windows::Forms::WebBrowser^ webBrowser1;
	private: System::Windows::Forms::Label^ browser_click;


	private: System::Windows::Forms::Label^ search;
	private: System::Windows::Forms::RichTextBox^ url_browser_search;
	private: System::Windows::Forms::Label^ move_google;
	private: System::Windows::Forms::Label^ exit_browser;







	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(TextInBit::typeid));
			this->button_exit = (gcnew System::Windows::Forms::Label());
			this->write_text = (gcnew System::Windows::Forms::Label());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->upload_file = (gcnew System::Windows::Forms::Label());
			this->button_play_music = (gcnew System::Windows::Forms::Label());
			this->name_music = (gcnew System::Windows::Forms::Label());
			this->button_inbit = (gcnew System::Windows::Forms::Label());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->button_openpanel = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->convert_button = (gcnew System::Windows::Forms::Label());
			this->exit_app = (gcnew System::Windows::Forms::Label());
			this->library_track = (gcnew System::Windows::Forms::Label());
			this->button_closepanel = (gcnew System::Windows::Forms::Label());
			this->MBit_text = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button_action_outbit = (gcnew System::Windows::Forms::Label());
			this->button_action_inbit = (gcnew System::Windows::Forms::Label());
			this->text_outbit = (gcnew System::Windows::Forms::Label());
			this->field_textinbit = (gcnew System::Windows::Forms::RichTextBox());
			this->field_outbit = (gcnew System::Windows::Forms::RichTextBox());
			this->toolTip1 = (gcnew System::Windows::Forms::ToolTip(this->components));
			this->write_id = (gcnew System::Windows::Forms::RichTextBox());
			this->clear_library_tracks = (gcnew System::Windows::Forms::Label());
			this->restore_library_tracks = (gcnew System::Windows::Forms::Label());
			this->player_music = (gcnew System::Windows::Forms::Label());
			this->search = (gcnew System::Windows::Forms::Label());
			this->url_browser_search = (gcnew System::Windows::Forms::RichTextBox());
			this->move_google = (gcnew System::Windows::Forms::Label());
			this->exit_browser = (gcnew System::Windows::Forms::Label());
			this->browser_click = (gcnew System::Windows::Forms::Label());
			this->directory_text = (gcnew System::Windows::Forms::RichTextBox());
			this->list_tracks = (gcnew System::Windows::Forms::RichTextBox());
			this->tracks = (gcnew System::Windows::Forms::RichTextBox());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_exit->ForeColor = System::Drawing::Color::White;
			this->button_exit->Location = System::Drawing::Point(1079, 692);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(169, 48);
			this->button_exit->TabIndex = 4;
			this->button_exit->Text = L"Выйти";
			this->button_exit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_exit->Click += gcnew System::EventHandler(this, &TextInBit::button_exit_Click);
			this->button_exit->MouseEnter += gcnew System::EventHandler(this, &TextInBit::button_exit_MouseEnter);
			this->button_exit->MouseLeave += gcnew System::EventHandler(this, &TextInBit::button_exit_MouseLeave);
			// 
			// write_text
			// 
			this->write_text->AutoSize = true;
			this->write_text->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->write_text->ForeColor = System::Drawing::Color::White;
			this->write_text->Location = System::Drawing::Point(142, 122);
			this->write_text->Name = L"write_text";
			this->write_text->Size = System::Drawing::Size(434, 34);
			this->write_text->TabIndex = 6;
			this->write_text->Text = L"Напишите встраиваемый текст";
			this->write_text->Click += gcnew System::EventHandler(this, &TextInBit::write_text_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(820, 204);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(307, 306);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 8;
			this->pictureBox3->TabStop = false;
			this->toolTip1->SetToolTip(this->pictureBox3, L"Поддерживаются файлы только в формате .wav");
			this->pictureBox3->Click += gcnew System::EventHandler(this, &TextInBit::pictureBox3_Click);
			// 
			// upload_file
			// 
			this->upload_file->AutoSize = true;
			this->upload_file->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->upload_file->ForeColor = System::Drawing::Color::White;
			this->upload_file->Location = System::Drawing::Point(861, 122);
			this->upload_file->Name = L"upload_file";
			this->upload_file->Size = System::Drawing::Size(221, 34);
			this->upload_file->TabIndex = 10;
			this->upload_file->Text = L"Загрузите файл";
			// 
			// button_play_music
			// 
			this->button_play_music->BackColor = System::Drawing::Color::White;
			this->button_play_music->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_play_music->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->button_play_music->Location = System::Drawing::Point(29, 692);
			this->button_play_music->Name = L"button_play_music";
			this->button_play_music->Size = System::Drawing::Size(38, 37);
			this->button_play_music->TabIndex = 12;
			this->button_play_music->Text = L"⏵";
			this->toolTip1->SetToolTip(this->button_play_music, L"Клик - проигрывание\r\nДвойной клик - пауза");
			this->button_play_music->Click += gcnew System::EventHandler(this, &TextInBit::button_play_music_Click);
			this->button_play_music->DoubleClick += gcnew System::EventHandler(this, &TextInBit::button_play_music_DoubleClick);
			// 
			// name_music
			// 
			this->name_music->BackColor = System::Drawing::Color::White;
			this->name_music->Font = (gcnew System::Drawing::Font(L"Roboto", 7, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_music->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->name_music->Location = System::Drawing::Point(55, 692);
			this->name_music->Name = L"name_music";
			this->name_music->Size = System::Drawing::Size(347, 37);
			this->name_music->TabIndex = 13;
			this->name_music->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->name_music, L"Ваша проигрываемая музыка");
			// 
			// button_inbit
			// 
			this->button_inbit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->button_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_inbit->ForeColor = System::Drawing::Color::White;
			this->button_inbit->Location = System::Drawing::Point(523, 688);
			this->button_inbit->Name = L"button_inbit";
			this->button_inbit->Size = System::Drawing::Size(162, 45);
			this->button_inbit->TabIndex = 15;
			this->button_inbit->Text = L"Встроить текст в аудио";
			this->button_inbit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->toolTip1->SetToolTip(this->button_inbit, L"Enter для быстрой активации");
			this->button_inbit->Click += gcnew System::EventHandler(this, &TextInBit::button_inbit_Click);
			this->button_inbit->MouseEnter += gcnew System::EventHandler(this, &TextInBit::button_inbit_MouseEnter);
			this->button_inbit->MouseLeave += gcnew System::EventHandler(this, &TextInBit::button_inbit_MouseLeave);
			// 
			// saveFileDialog1
			// 
			this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &TextInBit::saveFileDialog1_FileOk);
			// 
			// button_openpanel
			// 
			this->button_openpanel->AutoSize = true;
			this->button_openpanel->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_openpanel->ForeColor = System::Drawing::Color::White;
			this->button_openpanel->Location = System::Drawing::Point(1278, 9);
			this->button_openpanel->Name = L"button_openpanel";
			this->button_openpanel->Size = System::Drawing::Size(28, 34);
			this->button_openpanel->TabIndex = 16;
			this->button_openpanel->Text = L"♪";
			this->button_openpanel->Click += gcnew System::EventHandler(this, &TextInBit::button_openpanel_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel1->Controls->Add(this->convert_button);
			this->panel1->Controls->Add(this->exit_app);
			this->panel1->Controls->Add(this->library_track);
			this->panel1->Controls->Add(this->button_closepanel);
			this->panel1->Controls->Add(this->MBit_text);
			this->panel1->Controls->Add(this->panel2);
			this->panel1->Controls->Add(this->button_action_outbit);
			this->panel1->Controls->Add(this->button_action_inbit);
			this->panel1->Location = System::Drawing::Point(1095, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(211, 748);
			this->panel1->TabIndex = 17;
			this->panel1->Visible = false;
			// 
			// convert_button
			// 
			this->convert_button->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->convert_button->ForeColor = System::Drawing::Color::White;
			this->convert_button->Location = System::Drawing::Point(30, 418);
			this->convert_button->Name = L"convert_button";
			this->convert_button->Size = System::Drawing::Size(158, 73);
			this->convert_button->TabIndex = 20;
			this->convert_button->Text = L"Конвертирование";
			this->convert_button->Click += gcnew System::EventHandler(this, &TextInBit::convert_button_Click);
			this->convert_button->DoubleClick += gcnew System::EventHandler(this, &TextInBit::convert_button_DoubleClick);
			this->convert_button->MouseEnter += gcnew System::EventHandler(this, &TextInBit::convert_button_MouseEnter);
			// 
			// exit_app
			// 
			this->exit_app->AutoSize = true;
			this->exit_app->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_app->ForeColor = System::Drawing::Color::White;
			this->exit_app->Location = System::Drawing::Point(166, 12);
			this->exit_app->Name = L"exit_app";
			this->exit_app->Size = System::Drawing::Size(25, 29);
			this->exit_app->TabIndex = 19;
			this->exit_app->Text = L"x";
			this->exit_app->Click += gcnew System::EventHandler(this, &TextInBit::exit_app_Click);
			// 
			// library_track
			// 
			this->library_track->AutoSize = true;
			this->library_track->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->library_track->ForeColor = System::Drawing::Color::White;
			this->library_track->Location = System::Drawing::Point(30, 377);
			this->library_track->Name = L"library_track";
			this->library_track->Size = System::Drawing::Size(147, 29);
			this->library_track->TabIndex = 18;
			this->library_track->Text = L"Библиотека";
			this->library_track->Click += gcnew System::EventHandler(this, &TextInBit::library_track_Click);
			this->library_track->MouseEnter += gcnew System::EventHandler(this, &TextInBit::library_track_MouseEnter);
			// 
			// button_closepanel
			// 
			this->button_closepanel->AutoSize = true;
			this->button_closepanel->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_closepanel->ForeColor = System::Drawing::Color::White;
			this->button_closepanel->Location = System::Drawing::Point(183, 9);
			this->button_closepanel->Name = L"button_closepanel";
			this->button_closepanel->Size = System::Drawing::Size(28, 34);
			this->button_closepanel->TabIndex = 17;
			this->button_closepanel->Text = L"♪";
			this->button_closepanel->Click += gcnew System::EventHandler(this, &TextInBit::button_closepanel_Click);
			// 
			// MBit_text
			// 
			this->MBit_text->BackColor = System::Drawing::Color::White;
			this->MBit_text->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->MBit_text->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->MBit_text->Location = System::Drawing::Point(0, 659);
			this->MBit_text->Name = L"MBit_text";
			this->MBit_text->Size = System::Drawing::Size(211, 89);
			this->MBit_text->TabIndex = 3;
			this->MBit_text->Text = L"NBit";
			this->MBit_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(16, 302);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(5, 25);
			this->panel2->TabIndex = 2;
			this->panel2->Visible = false;
			// 
			// button_action_outbit
			// 
			this->button_action_outbit->AutoSize = true;
			this->button_action_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_action_outbit->ForeColor = System::Drawing::Color::White;
			this->button_action_outbit->Location = System::Drawing::Point(27, 339);
			this->button_action_outbit->Name = L"button_action_outbit";
			this->button_action_outbit->Size = System::Drawing::Size(150, 29);
			this->button_action_outbit->TabIndex = 1;
			this->button_action_outbit->Text = L"Извлечение";
			this->button_action_outbit->Click += gcnew System::EventHandler(this, &TextInBit::button_action_outbit_Click);
			this->button_action_outbit->MouseEnter += gcnew System::EventHandler(this, &TextInBit::button_action_outbit_MouseEnter);
			// 
			// button_action_inbit
			// 
			this->button_action_inbit->AutoSize = true;
			this->button_action_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_action_inbit->ForeColor = System::Drawing::Color::White;
			this->button_action_inbit->Location = System::Drawing::Point(27, 298);
			this->button_action_inbit->Name = L"button_action_inbit";
			this->button_action_inbit->Size = System::Drawing::Size(161, 29);
			this->button_action_inbit->TabIndex = 0;
			this->button_action_inbit->Text = L"Встраивание";
			this->button_action_inbit->Click += gcnew System::EventHandler(this, &TextInBit::button_action_inbit_Click);
			this->button_action_inbit->MouseEnter += gcnew System::EventHandler(this, &TextInBit::button_action_inbit_MouseEnter);
			// 
			// text_outbit
			// 
			this->text_outbit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->text_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text_outbit->ForeColor = System::Drawing::Color::White;
			this->text_outbit->Location = System::Drawing::Point(523, 689);
			this->text_outbit->Name = L"text_outbit";
			this->text_outbit->Size = System::Drawing::Size(162, 45);
			this->text_outbit->TabIndex = 19;
			this->text_outbit->Text = L"Извлечь текст из аудио";
			this->text_outbit->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->toolTip1->SetToolTip(this->text_outbit, L"Выберите тот же файл, что и загрузили");
			this->text_outbit->Visible = false;
			this->text_outbit->Click += gcnew System::EventHandler(this, &TextInBit::text_outbit_Click);
			this->text_outbit->MouseEnter += gcnew System::EventHandler(this, &TextInBit::text_outbit_MouseEnter);
			this->text_outbit->MouseLeave += gcnew System::EventHandler(this, &TextInBit::text_outbit_MouseLeave);
			// 
			// field_textinbit
			// 
			this->field_textinbit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->field_textinbit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->field_textinbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_textinbit->ForeColor = System::Drawing::Color::White;
			this->field_textinbit->Location = System::Drawing::Point(29, 179);
			this->field_textinbit->Name = L"field_textinbit";
			this->field_textinbit->Size = System::Drawing::Size(651, 380);
			this->field_textinbit->TabIndex = 7;
			this->field_textinbit->Text = L"";
			this->field_textinbit->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TextInBit::EnterField);
			// 
			// field_outbit
			// 
			this->field_outbit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->field_outbit->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->field_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->field_outbit->ForeColor = System::Drawing::Color::White;
			this->field_outbit->Location = System::Drawing::Point(29, 177);
			this->field_outbit->Name = L"field_outbit";
			this->field_outbit->ReadOnly = true;
			this->field_outbit->Size = System::Drawing::Size(650, 382);
			this->field_outbit->TabIndex = 18;
			this->field_outbit->Text = L"";
			this->field_outbit->Visible = false;
			// 
			// write_id
			// 
			this->write_id->BackColor = System::Drawing::Color::White;
			this->write_id->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->write_id->Location = System::Drawing::Point(29, 605);
			this->write_id->Name = L"write_id";
			this->write_id->Size = System::Drawing::Size(473, 37);
			this->write_id->TabIndex = 23;
			this->write_id->Text = L"Код трека";
			this->toolTip1->SetToolTip(this->write_id, L"Укажите числовой код трека, из которого хотите извлечь встроенный текст\r\nБыстрая "
				L"активация - Enter");
			this->write_id->Visible = false;
			this->write_id->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &TextInBit::EnterTracks);
			// 
			// clear_library_tracks
			// 
			this->clear_library_tracks->AutoSize = true;
			this->clear_library_tracks->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->clear_library_tracks->ForeColor = System::Drawing::Color::White;
			this->clear_library_tracks->Location = System::Drawing::Point(512, 610);
			this->clear_library_tracks->Name = L"clear_library_tracks";
			this->clear_library_tracks->Size = System::Drawing::Size(279, 24);
			this->clear_library_tracks->TabIndex = 25;
			this->clear_library_tracks->Text = L"Очистить библиотеку треков";
			this->toolTip1->SetToolTip(this->clear_library_tracks, L"Клик - очистка библиотеки треков с возможностью восстановления\r\nДвойной клик - оч"
				L"истка библиотеки треков без возможности восстановления");
			this->clear_library_tracks->Visible = false;
			this->clear_library_tracks->Click += gcnew System::EventHandler(this, &TextInBit::clear_library_tracks_Click);
			this->clear_library_tracks->DoubleClick += gcnew System::EventHandler(this, &TextInBit::clear_library_tracks_DoubleClick);
			// 
			// restore_library_tracks
			// 
			this->restore_library_tracks->AutoSize = true;
			this->restore_library_tracks->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->restore_library_tracks->ForeColor = System::Drawing::Color::White;
			this->restore_library_tracks->Location = System::Drawing::Point(512, 696);
			this->restore_library_tracks->Name = L"restore_library_tracks";
			this->restore_library_tracks->Size = System::Drawing::Size(321, 24);
			this->restore_library_tracks->TabIndex = 26;
			this->restore_library_tracks->Text = L"Восстановить библиотеку треков";
			this->toolTip1->SetToolTip(this->restore_library_tracks, L"Клик - восстановить библиотеку треков\r\nДвойной клик - очистить буфер восстановлен"
				L"ия библиотеки треков");
			this->restore_library_tracks->Visible = false;
			this->restore_library_tracks->Click += gcnew System::EventHandler(this, &TextInBit::restore_library_tracks_Click);
			this->restore_library_tracks->DoubleClick += gcnew System::EventHandler(this, &TextInBit::restore_library_tracks_DoubleClick);
			// 
			// player_music
			// 
			this->player_music->AutoSize = true;
			this->player_music->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->player_music->ForeColor = System::Drawing::Color::White;
			this->player_music->Location = System::Drawing::Point(25, 659);
			this->player_music->Name = L"player_music";
			this->player_music->Size = System::Drawing::Size(68, 24);
			this->player_music->TabIndex = 27;
			this->player_music->Text = L"Плеер";
			this->toolTip1->SetToolTip(this->player_music, L"Клик - очистка библиотеки треков с возможностью восстановления\r\nДвойной клик - оч"
				L"истка библиотеки треков без возможности восстановления");
			// 
			// search
			// 
			this->search->BackColor = System::Drawing::Color::White;
			this->search->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->search->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->search->Location = System::Drawing::Point(113, 9);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(35, 34);
			this->search->TabIndex = 32;
			this->search->Text = L"🔎";
			this->search->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->toolTip1->SetToolTip(this->search, L"Нажмите, чтобы перейти по указанному url");
			this->search->Click += gcnew System::EventHandler(this, &TextInBit::search_Click);
			// 
			// url_browser_search
			// 
			this->url_browser_search->BackColor = System::Drawing::Color::White;
			this->url_browser_search->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->url_browser_search->Location = System::Drawing::Point(145, 9);
			this->url_browser_search->Name = L"url_browser_search";
			this->url_browser_search->Size = System::Drawing::Size(482, 34);
			this->url_browser_search->TabIndex = 33;
			this->url_browser_search->Text = L"Веб-сайт или страница";
			this->toolTip1->SetToolTip(this->url_browser_search, L"Ищите любой сайт, указанный в этом поле");
			// 
			// move_google
			// 
			this->move_google->AutoSize = true;
			this->move_google->Font = (gcnew System::Drawing::Font(L"Futura Md BT", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->move_google->ForeColor = System::Drawing::Color::White;
			this->move_google->Location = System::Drawing::Point(633, 14);
			this->move_google->Name = L"move_google";
			this->move_google->Size = System::Drawing::Size(27, 24);
			this->move_google->TabIndex = 34;
			this->move_google->Text = L"G";
			this->toolTip1->SetToolTip(this->move_google, L"Перейдите в браузере на сайт Google");
			this->move_google->Click += gcnew System::EventHandler(this, &TextInBit::move_google_Click);
			// 
			// exit_browser
			// 
			this->exit_browser->AutoSize = true;
			this->exit_browser->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_browser->ForeColor = System::Drawing::Color::White;
			this->exit_browser->Location = System::Drawing::Point(659, 9);
			this->exit_browser->Name = L"exit_browser";
			this->exit_browser->Size = System::Drawing::Size(25, 29);
			this->exit_browser->TabIndex = 35;
			this->exit_browser->Text = L"x";
			this->toolTip1->SetToolTip(this->exit_browser, L"Нажмите, чтобы выйти из браузера");
			this->exit_browser->Click += gcnew System::EventHandler(this, &TextInBit::exit_browser_Click);
			// 
			// browser_click
			// 
			this->browser_click->AutoSize = true;
			this->browser_click->Font = (gcnew System::Drawing::Font(L"Roboto", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->browser_click->ForeColor = System::Drawing::Color::White;
			this->browser_click->Location = System::Drawing::Point(12, 15);
			this->browser_click->Name = L"browser_click";
			this->browser_click->Size = System::Drawing::Size(87, 24);
			this->browser_click->TabIndex = 31;
			this->browser_click->Text = L"Браузер";
			// 
			// directory_text
			// 
			this->directory_text->BackColor = System::Drawing::Color::White;
			this->directory_text->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->directory_text->Location = System::Drawing::Point(29, 605);
			this->directory_text->Name = L"directory_text";
			this->directory_text->Size = System::Drawing::Size(473, 37);
			this->directory_text->TabIndex = 21;
			this->directory_text->Text = L"Место расположения файла сохранения";
			// 
			// list_tracks
			// 
			this->list_tracks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->list_tracks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->list_tracks->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->list_tracks->ForeColor = System::Drawing::Color::White;
			this->list_tracks->Location = System::Drawing::Point(12, 177);
			this->list_tracks->Name = L"list_tracks";
			this->list_tracks->ReadOnly = true;
			this->list_tracks->Size = System::Drawing::Size(650, 382);
			this->list_tracks->TabIndex = 22;
			this->list_tracks->Text = L"";
			this->list_tracks->Visible = false;
			// 
			// tracks
			// 
			this->tracks->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(170)),
				static_cast<System::Int32>(static_cast<System::Byte>(117)));
			this->tracks->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tracks->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->tracks->ForeColor = System::Drawing::Color::White;
			this->tracks->Location = System::Drawing::Point(740, 177);
			this->tracks->Name = L"tracks";
			this->tracks->ReadOnly = true;
			this->tracks->Size = System::Drawing::Size(349, 382);
			this->tracks->TabIndex = 24;
			this->tracks->Text = L"";
			this->tracks->Visible = false;
			// 
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::Color::White;
			this->flowLayoutPanel1->Location = System::Drawing::Point(700, 177);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(5, 382);
			this->flowLayoutPanel1->TabIndex = 28;
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(117, 49);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(1039, 666);
			this->webBrowser1->TabIndex = 29;
			this->webBrowser1->Url = (gcnew System::Uri(L"", System::UriKind::Relative));
			this->webBrowser1->Visible = false;
			// 
			// TextInBit
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(43)), static_cast<System::Int32>(static_cast<System::Byte>(53)),
				static_cast<System::Int32>(static_cast<System::Byte>(61)));
			this->ClientSize = System::Drawing::Size(1900, 900);
			this->ControlBox = false;
			this->Controls->Add(this->exit_browser);
			this->Controls->Add(this->move_google);
			this->Controls->Add(this->url_browser_search);
			this->Controls->Add(this->search);
			this->Controls->Add(this->browser_click);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->player_music);
			this->Controls->Add(this->restore_library_tracks);
			this->Controls->Add(this->clear_library_tracks);
			this->Controls->Add(this->tracks);
			this->Controls->Add(this->write_id);
			this->Controls->Add(this->list_tracks);
			this->Controls->Add(this->directory_text);
			this->Controls->Add(this->text_outbit);
			this->Controls->Add(this->field_outbit);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button_openpanel);
			this->Controls->Add(this->button_inbit);
			this->Controls->Add(this->name_music);
			this->Controls->Add(this->button_play_music);
			this->Controls->Add(this->upload_file);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->field_textinbit);
			this->Controls->Add(this->write_text);
			this->Controls->Add(this->button_exit);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"TextInBit";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"NBit";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		String^ get_filename;
	private: System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
		   string& Convert_String_to_string(System::String^ text1, string& text2) {
			   const char* chars = (const char*)(Marshal::StringToHGlobalAnsi(text1)).ToPointer();
			   text2 = chars;
			   Marshal::FreeHGlobal(IntPtr((void*)chars));
			   return text2;
		   }
		   String^ Convert_string_to_String(string& text1, String^ text2) {
			   text2 = gcnew System::String(text1.c_str());
			   return text2;
		   }
	private: System::Void pictureBox3_Click(System::Object^ sender, System::EventArgs^ e) {
		openFileDialog1->Filter = "WAV files(*.wav)|*.wav";
		openFileDialog1->ShowDialog();
		String^ filename=openFileDialog1->FileName;
		name_music->Text = filename;
	}
private: System::Void PlayMusic() {
	SoundPlayer^ player = gcnew SoundPlayer;
	player->SoundLocation = name_music->Text;
	player->Play();
}
	   private: System::Void StopMusic() {
		   SoundPlayer^ player = gcnew SoundPlayer;
		   player->SoundLocation = name_music->Text;
		   player->Stop();
	   }
private: System::Void write_text_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button_play_music_Click(System::Object^ sender, System::EventArgs^ e) {
	if (name_music->Text->Length > 0) {
		Thread^ back = gcnew Thread(gcnew ThreadStart(this, &TextInBit::PlayMusic));
		back->Start();
		player_music->Text = "Плеер - Сейчас воспроизводится:";
	}
	else {
		MessageBox::Show("Трек не открыт, чтобы его проигрывать");
	}
}
private: System::Void button_inbit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (name_music->Text->Length != 0 && name_music->Text!="openFileDialog1") {
		if (field_textinbit->Text->Length != 0) {
			if (directory_text->Text != "Место расположения файла сохранения" && directory_text->Text->Length != 0) {
				OpenFileDialog^ dil = gcnew System::Windows::Forms::OpenFileDialog();
				dil->Filter = "WAV files(*.wav)|*.wav";
				if (dil->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
					String^ fileToCopy = dil->FileName;
					if (System::IO::File::Exists(fileToCopy)) {
						String^ onlyFileName = System::IO::Path::GetFileName(dil->FileName);
						String^ newLocation = directory_text->Text + onlyFileName;
						System::IO::File::Copy(fileToCopy, newLocation, true);
					}
				}
				srand(time(NULL));
				int generate_id = 1 + rand() % 10000;
				string get_id = to_string(generate_id) + ".txt";
				ofstream theme_file(get_id);
				string state_theme;
				state_theme = Convert_String_to_string(field_textinbit->Text, state_theme);
				theme_file << state_theme;
				theme_file.close();
				fstream file_key;
				file_key.open("key.txt", ios_base::out | ios_base::trunc);
				file_key << generate_id;
				file_key.close();
				fstream file_library;
				file_library.open("library.txt", ios_base::app);
				string library_track = "\n";
				library_track = to_string(generate_id) + " : " + Convert_String_to_string(field_textinbit->Text, library_track) + " : " + Convert_String_to_string(name_music->Text, library_track) + "\n";
				file_library << library_track;
				file_library.close();
				MessageBox::Show("Текст встроен в аудио");
			}
			else {
				MessageBox::Show("Не указано расположение файла сохранения");
			}
		}
		else {
			MessageBox::Show("Нет текста, чтобы его встроить в аудио");
		}
	}
	else {
		MessageBox::Show("Файл не открыт, чтобы встроить текст");
	}
}
private: System::Void button_openpanel_Click(System::Object^ sender, System::EventArgs^ e) {
	panel1->Visible = true;
	button_openpanel->Visible = false;
	button_exit->Location = System::Drawing::Point(591, 446);
}
private: System::Void button_action_inbit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = true;
	panel2->Location = System::Drawing::Point(16, 195);
	this->button_action_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	library_track->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	convert_button->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	button_action_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void button_action_outbit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = true;
	panel2->Location = System::Drawing::Point(16,221);
	button_action_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	library_track->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	convert_button->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	button_action_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void button_action_outbit_Click(System::Object^ sender, System::EventArgs^ e) {
			field_textinbit->Visible = false;
			field_outbit->Visible = true;
			button_inbit->Visible = false;
			text_outbit->Visible = true;
			directory_text->Visible = true;
			pictureBox3->Visible = true;
			upload_file->Text = "Загрузите файл";
			upload_file->Location = System::Drawing::Point(573, 78);
			tracks->Visible = false;
			list_tracks->Visible = false;
			write_id->Visible = false;
			clear_library_tracks->Visible = false;
			restore_library_tracks->Visible = false;
			write_text->Text = "Извлеченный текст";
			panel1->Visible = false;
			button_openpanel->Visible = true;
}
private: System::Void button_action_inbit_Click(System::Object^ sender, System::EventArgs^ e) {
	write_text->Text = "Напишите встраиваемый текст";
	field_outbit->Visible = false;
	field_textinbit->Visible = true;
	button_inbit->Visible = true;
	text_outbit->Visible = false;
	field_textinbit->Select();
	field_textinbit->ScrollToCaret();
	field_textinbit->SelectionStart = field_textinbit->Text->Length;
	directory_text->Visible = true;
	pictureBox3->Visible = true;
	upload_file->Text = "Загрузите файл";
	upload_file->Location = System::Drawing::Point(573, 78);
	tracks->Visible = false;
	list_tracks->Visible = false;
	write_id->Visible = false;
	clear_library_tracks->Visible = false;
	restore_library_tracks->Visible = false;
	panel1->Visible = false;
	button_openpanel->Visible = true;
}
private: System::Void button_inbit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void button_inbit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void text_outbit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (name_music->Text->Length > 0) {
		if (directory_text->Text != "Место расположения файла сохранения" && directory_text->Text->Length != 0) {
	fstream file_key;
	file_key.open("key.txt");
	int get_id;
	file_key >> get_id;
	string id = to_string(get_id) + ".txt";
	fstream open_file_with_id;
	open_file_with_id.open(id);
	string get_text;
	string get_file_text;
	while (!open_file_with_id.eof()) {
		getline(open_file_with_id, get_file_text);
		get_text += get_file_text;
		if (!open_file_with_id.eof()) {
			get_text += '\n';
		}
	}
	OpenFileDialog^ dil = gcnew System::Windows::Forms::OpenFileDialog();
	dil->Filter = "WAV files(*.wav)|*.wav";
	if (dil->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
		String^ fileToCopy = dil->FileName;
		if (System::IO::File::Exists(fileToCopy)) {
			String^ onlyFileName = System::IO::Path::GetFileName(dil->FileName);
			String^ newLocation = directory_text->Text + onlyFileName;
			System::IO::File::Copy(fileToCopy, newLocation, true);
		}
	}
	field_outbit->Text = Convert_string_to_String(get_text, text_outbit->Text);
	MessageBox::Show("Текст извлечен");
		}
		else {
			MessageBox::Show("Не указано расположение файла сохранения");
		}
	}
	else {
		MessageBox::Show("Не загружен файл, чтобы осуществить извлечение");
	}
}
private: System::Void text_outbit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	text_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void text_outbit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	text_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void button_play_music_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	if (name_music->Text->Length > 0) {
		Thread^ back = gcnew Thread(gcnew ThreadStart(this, &TextInBit::StopMusic));
		back->Start();
		player_music->Text = "Плеер - Остановлено воспроизведение:";
	}
	else {
		MessageBox::Show("Трек не открыт, чтобы остановить его проигрывание");
	}
}
private: System::Void button_closepanel_Click(System::Object^ sender, System::EventArgs^ e) {
		panel1->Visible = false;
		button_openpanel->Visible = true;
		button_exit->Location = System::Drawing::Point(737, 446);
}
private: System::Void button_exit_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	button_exit->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void button_exit_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
	button_exit->Font = (gcnew System::Drawing::Font(L"Roboto", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void EnterField(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
	if (e->KeyCode == Keys(13)) {
		button_inbit_Click(sender, e);
	}
}
private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
	get_filename = saveFileDialog1->InitialDirectory;
}
private: System::Void library_track_Click(System::Object^ sender, System::EventArgs^ e) {
	write_text->Text = "Библиотека треков";
	field_outbit->Visible = false;
	field_textinbit->Visible = false;
	button_inbit->Visible = false;
	text_outbit->Visible = false;
	list_tracks->Visible = true;
	fstream file_library;
	file_library.open("library.txt");
	string get_tracks;
	string get_library_tracks;
	while (!file_library.eof()) {
		getline(file_library, get_tracks);
		get_library_tracks += get_tracks;
		if (!file_library.eof()) {
			get_library_tracks += '\n';
		}
	}
	list_tracks->Text = Convert_string_to_String(get_library_tracks, list_tracks->Text);
	pictureBox3->Visible = false;
	upload_file->Text = "Полученный трек";
	upload_file->Location = System::Drawing::Point(528, 78);
	tracks->Visible = true;
	write_id->Visible = true;
	clear_library_tracks->Visible = true;
	restore_library_tracks->Visible = true;
	panel1->Visible = false;
	button_openpanel->Visible = true;
}
private: System::Void library_track_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = true;
	panel2->Location = System::Drawing::Point(16, 247);
	button_action_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	button_action_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	convert_button->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	library_track->Font= (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
	private: System::Void library_track_get_track(System::Object^ sender, System::EventArgs^ e) {
		fstream file_track;
		string get_id_track;
		get_id_track = Convert_String_to_string(write_id->Text, get_id_track);
		bool check_data = false;
		const char* temp = "0123456789";
		for (int i = 0;i < get_id_track.length();i++) {
			if (!strchr(temp,get_id_track[i])) {
				check_data=false;
			}
			else {
				check_data = true;
			}
		}
		if (check_data == true) {
				get_id_track += ".txt";
				file_track.open(get_id_track);
				string track_out;
				file_track >> track_out;
				tracks->Text = Convert_string_to_String(track_out, tracks->Text);
		}
		else {
			MessageBox::Show("Введен не числовой код");
		}
	}
		   private: System::Void EnterTracks(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e) {
			   if (e->KeyCode == Keys(13)) {
				   library_track_get_track(sender, e);
			   }
		   }
private: System::Void clear_library_tracks_Click(System::Object^ sender, System::EventArgs^ e) {
	fstream bufer_library_file;
	bufer_library_file.open("bufer_library.txt",ios_base::out|ios_base::trunc);
	string bufer;
	bufer=Convert_String_to_string(list_tracks->Text, bufer);
	bufer_library_file << bufer;
	MessageBox::Show("Внимание! Вся сохраненная история треков удалится!");
	fstream file_library;
	file_library.open("library.txt",ios_base::out|ios_base::trunc);
	string library_text = "";
	file_library << library_text;
	list_tracks->Text = "";
	MessageBox::Show("Завершено");
}
private: System::Void restore_library_tracks_Click(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Внимание! Восстановленная библиотека треков может перекрыть старую библиотеку треков!");
	fstream file_bufer_library;
	file_bufer_library.open("bufer_library.txt");
	string get_tracks;
	string get_library_tracks;
	while (!file_bufer_library.eof()) {
		getline(file_bufer_library, get_tracks);
		get_library_tracks += get_tracks;
		if (!file_bufer_library.eof()) {
			get_library_tracks += '\n';
		}
	}
	list_tracks->Text = Convert_string_to_String(get_library_tracks, list_tracks->Text);
	MessageBox::Show("Завершено");
}
private: System::Void clear_library_tracks_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Внимание! Вся сохраненная история треков удалится без возможности восстановления!");
	fstream file_library;
	file_library.open("library.txt", ios_base::out | ios_base::trunc);
	string library_text = "";
	file_library << library_text;
	list_tracks->Text = "";
	MessageBox::Show("Завершено");
}
private: System::Void restore_library_tracks_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	MessageBox::Show("Внимание! Буфер восстановления полностью очистится без возможности восстановления!");
	fstream file_bufer_library;
	file_bufer_library.open("bufer_library.txt", ios_base::out | ios_base::trunc);
	string library_text = "";
	file_bufer_library << library_text;
	MessageBox::Show("Завершено");
}
private: System::Void exit_app_Click(System::Object^ sender, System::EventArgs^ e) {
	Application::Exit();
}
private: System::Void convert_button_Click(System::Object^ sender, System::EventArgs^ e) {
	if (webBrowser1->Visible == false) {
		webBrowser1->Visible = true;
	}
	webBrowser1->ScriptErrorsSuppressed = false;
	webBrowser1->Navigate("https://audio.online-convert.com/ru/convert-to-wav");
}
private: System::Void convert_button_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
	panel2->Visible = true;
	panel2->Location = System::Drawing::Point(16, 273);
	button_action_inbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	button_action_outbit->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	library_track->Font = (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
	convert_button->Font= (gcnew System::Drawing::Font(L"Roboto", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
		static_cast<System::Byte>(204)));
}
private: System::Void convert_button_DoubleClick(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->Visible = false;
}
private: System::Void search_Click(System::Object^ sender, System::EventArgs^ e) {
	if (url_browser_search->Text != "Веб-сайт или страница" && url_browser_search->Text->Length > 0) {
		if (webBrowser1->Visible == false) {
			webBrowser1->Visible = true;
			webBrowser1->Navigate(url_browser_search->Text);
		}
		else {
			webBrowser1->Navigate(url_browser_search->Text);
		}
	}
	else {
		MessageBox::Show("Не заполнено поле url, чтобы открыть браузер по данному сайту или странице");
	}
}
private: System::Void move_google_Click(System::Object^ sender, System::EventArgs^ e) {
	if (webBrowser1->Visible == true) {
		webBrowser1->Navigate("google.by");
	}
	else {
		webBrowser1->Visible = true;
		webBrowser1->Navigate("google.by");
	}
}
private: System::Void exit_browser_Click(System::Object^ sender, System::EventArgs^ e) {
	webBrowser1->Visible = false;
}
};
}
