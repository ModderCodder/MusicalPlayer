#pragma once


namespace MusicalPlayer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Media;

	/// <summary>
	/// —водка дл€ MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
		
	public:
		

		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ Music_Play;
	private: System::Windows::Forms::Label^ change_label;



	private: System::Windows::Forms::TrackBar^ VolumeBar;

	private: System::Windows::Forms::Label^ Deb_Volume;



	//public things
	public: MediaPlayer^ sound = gcnew MediaPlayer();
	public: System::Boolean is_playing = false;
	public: Uri^ uri;
	public: System::Boolean pause_and_resume;




	private: System::Windows::Forms::TrackBar^ SpeedBar;
	private: System::Windows::Forms::Label^ Deb_Speed;






	private: System::Windows::Forms::Label^ Speed_label;
	private: System::Windows::Forms::CheckBox^ Speed_Yes;


	private: System::Windows::Forms::ListBox^ List_of_saved_songs;


	private: System::Windows::Forms::Button^ Save_to_list;
	private: System::Windows::Forms::Button^ Save_To_File_Button;
	private: System::Windows::Forms::Button^ Export_button;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::CheckBox^ Do_Loop;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::PictureBox^ pictureBox4;

	private: System::Windows::Forms::Timer^ Tick_timer;
	private: System::Windows::Forms::TrackBar^ Duration_Track_Bar;
	private: System::Windows::Forms::Button^ Pause_Button;

	private: System::ComponentModel::IContainer^ components;







	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->Music_Play = (gcnew System::Windows::Forms::Button());
			this->change_label = (gcnew System::Windows::Forms::Label());
			this->VolumeBar = (gcnew System::Windows::Forms::TrackBar());
			this->Deb_Volume = (gcnew System::Windows::Forms::Label());
			this->SpeedBar = (gcnew System::Windows::Forms::TrackBar());
			this->Deb_Speed = (gcnew System::Windows::Forms::Label());
			this->Speed_label = (gcnew System::Windows::Forms::Label());
			this->Speed_Yes = (gcnew System::Windows::Forms::CheckBox());
			this->List_of_saved_songs = (gcnew System::Windows::Forms::ListBox());
			this->Save_to_list = (gcnew System::Windows::Forms::Button());
			this->Save_To_File_Button = (gcnew System::Windows::Forms::Button());
			this->Export_button = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Do_Loop = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->Tick_timer = (gcnew System::Windows::Forms::Timer(this->components));
			this->Duration_Track_Bar = (gcnew System::Windows::Forms::TrackBar());
			this->Pause_Button = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VolumeBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpeedBar))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Duration_Track_Bar))->BeginInit();
			this->SuspendLayout();
			// 
			// Music_Play
			// 
			this->Music_Play->BackColor = System::Drawing::Color::Silver;
			this->Music_Play->Location = System::Drawing::Point(37, 485);
			this->Music_Play->Name = L"Music_Play";
			this->Music_Play->Size = System::Drawing::Size(125, 23);
			this->Music_Play->TabIndex = 0;
			this->Music_Play->Text = L"Play";
			this->Music_Play->UseVisualStyleBackColor = false;
			this->Music_Play->Click += gcnew System::EventHandler(this, &MyForm::Music_Play_Click);
			// 
			// change_label
			// 
			this->change_label->AutoSize = true;
			this->change_label->Location = System::Drawing::Point(401, 42);
			this->change_label->Name = L"change_label";
			this->change_label->Size = System::Drawing::Size(135, 13);
			this->change_label->TabIndex = 1;
			this->change_label->Text = L"Enter directory of music---->";
			this->change_label->Click += gcnew System::EventHandler(this, &MyForm::change_label_Click);
			// 
			// VolumeBar
			// 
			this->VolumeBar->Location = System::Drawing::Point(261, 17);
			this->VolumeBar->Maximum = 100;
			this->VolumeBar->Name = L"VolumeBar";
			this->VolumeBar->Size = System::Drawing::Size(104, 45);
			this->VolumeBar->TabIndex = 5;
			this->VolumeBar->Value = 50;
			this->VolumeBar->Scroll += gcnew System::EventHandler(this, &MyForm::VolumeBar_Scroll);
			// 
			// Deb_Volume
			// 
			this->Deb_Volume->AutoSize = true;
			this->Deb_Volume->Location = System::Drawing::Point(361, 28);
			this->Deb_Volume->Name = L"Deb_Volume";
			this->Deb_Volume->Size = System::Drawing::Size(19, 13);
			this->Deb_Volume->TabIndex = 7;
			this->Deb_Volume->Text = L"50";
			// 
			// SpeedBar
			// 
			this->SpeedBar->LargeChange = 2;
			this->SpeedBar->Location = System::Drawing::Point(84, 136);
			this->SpeedBar->Maximum = 200;
			this->SpeedBar->Name = L"SpeedBar";
			this->SpeedBar->Size = System::Drawing::Size(104, 45);
			this->SpeedBar->TabIndex = 9;
			this->SpeedBar->Value = 100;
			this->SpeedBar->Visible = false;
			this->SpeedBar->Scroll += gcnew System::EventHandler(this, &MyForm::SpeedBar_Scroll);
			// 
			// Deb_Speed
			// 
			this->Deb_Speed->AutoSize = true;
			this->Deb_Speed->Location = System::Drawing::Point(61, 146);
			this->Deb_Speed->Name = L"Deb_Speed";
			this->Deb_Speed->Size = System::Drawing::Size(25, 13);
			this->Deb_Speed->TabIndex = 10;
			this->Deb_Speed->Text = L"100";
			this->Deb_Speed->Visible = false;
			// 
			// Speed_label
			// 
			this->Speed_label->AutoSize = true;
			this->Speed_label->Location = System::Drawing::Point(9, 147);
			this->Speed_label->Name = L"Speed_label";
			this->Speed_label->Size = System::Drawing::Size(52, 13);
			this->Speed_label->TabIndex = 11;
			this->Speed_label->Text = L"SPEED : ";
			this->Speed_label->Visible = false;
			// 
			// Speed_Yes
			// 
			this->Speed_Yes->AutoSize = true;
			this->Speed_Yes->Location = System::Drawing::Point(688, 246);
			this->Speed_Yes->Name = L"Speed_Yes";
			this->Speed_Yes->Size = System::Drawing::Size(15, 14);
			this->Speed_Yes->TabIndex = 12;
			this->Speed_Yes->UseVisualStyleBackColor = true;
			this->Speed_Yes->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Speed_Yes_CheckedChanged);
			// 
			// List_of_saved_songs
			// 
			this->List_of_saved_songs->BackColor = System::Drawing::Color::Silver;
			this->List_of_saved_songs->FormattingEnabled = true;
			this->List_of_saved_songs->Location = System::Drawing::Point(203, 65);
			this->List_of_saved_songs->Name = L"List_of_saved_songs";
			this->List_of_saved_songs->Size = System::Drawing::Size(410, 394);
			this->List_of_saved_songs->TabIndex = 15;
			this->List_of_saved_songs->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::List_of_saved_songs_SelectedIndexChanged);
			// 
			// Save_to_list
			// 
			this->Save_to_list->BackColor = System::Drawing::Color::Silver;
			this->Save_to_list->Location = System::Drawing::Point(543, 39);
			this->Save_to_list->Name = L"Save_to_list";
			this->Save_to_list->Size = System::Drawing::Size(70, 23);
			this->Save_to_list->TabIndex = 16;
			this->Save_to_list->Text = L"Add Song";
			this->Save_to_list->UseVisualStyleBackColor = false;
			this->Save_to_list->Click += gcnew System::EventHandler(this, &MyForm::Save_to_list_Click);
			// 
			// Save_To_File_Button
			// 
			this->Save_To_File_Button->BackColor = System::Drawing::Color::Silver;
			this->Save_To_File_Button->Location = System::Drawing::Point(628, 104);
			this->Save_To_File_Button->Name = L"Save_To_File_Button";
			this->Save_To_File_Button->Size = System::Drawing::Size(75, 23);
			this->Save_To_File_Button->TabIndex = 17;
			this->Save_To_File_Button->Text = L"Save to File";
			this->Save_To_File_Button->UseVisualStyleBackColor = false;
			this->Save_To_File_Button->Click += gcnew System::EventHandler(this, &MyForm::Save_To_File_Button_Click);
			// 
			// Export_button
			// 
			this->Export_button->BackColor = System::Drawing::Color::Silver;
			this->Export_button->Location = System::Drawing::Point(628, 133);
			this->Export_button->Name = L"Export_button";
			this->Export_button->Size = System::Drawing::Size(75, 23);
			this->Export_button->TabIndex = 18;
			this->Export_button->Text = L"Export";
			this->Export_button->UseVisualStyleBackColor = false;
			this->Export_button->Click += gcnew System::EventHandler(this, &MyForm::Export_button_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(628, 162);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(50, 50);
			this->pictureBox1->TabIndex = 19;
			this->pictureBox1->TabStop = false;
			// 
			// Do_Loop
			// 
			this->Do_Loop->AutoSize = true;
			this->Do_Loop->Location = System::Drawing::Point(688, 180);
			this->Do_Loop->Name = L"Do_Loop";
			this->Do_Loop->Size = System::Drawing::Size(15, 14);
			this->Do_Loop->TabIndex = 13;
			this->Do_Loop->UseVisualStyleBackColor = true;
			this->Do_Loop->CheckedChanged += gcnew System::EventHandler(this, &MyForm::Do_Loop_CheckedChanged);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(203, 5);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(64, 50);
			this->pictureBox2->TabIndex = 20;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(632, 218);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(46, 64);
			this->pictureBox3->TabIndex = 21;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(628, 12);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(100, 70);
			this->pictureBox4->TabIndex = 22;
			this->pictureBox4->TabStop = false;
			// 
			// Tick_timer
			// 
			this->Tick_timer->Interval = 200;
			this->Tick_timer->Tick += gcnew System::EventHandler(this, &MyForm::Tick_timer_Tick);
			// 
			// Duration_Track_Bar
			// 
			this->Duration_Track_Bar->Location = System::Drawing::Point(203, 465);
			this->Duration_Track_Bar->Maximum = 400;
			this->Duration_Track_Bar->Name = L"Duration_Track_Bar";
			this->Duration_Track_Bar->Size = System::Drawing::Size(410, 45);
			this->Duration_Track_Bar->TabIndex = 24;
			this->Duration_Track_Bar->TickStyle = System::Windows::Forms::TickStyle::Both;
			this->Duration_Track_Bar->Scroll += gcnew System::EventHandler(this, &MyForm::Duration_Track_Bar_Scroll);
			// 
			// Pause_Button
			// 
			this->Pause_Button->Location = System::Drawing::Point(37, 456);
			this->Pause_Button->Name = L"Pause_Button";
			this->Pause_Button->Size = System::Drawing::Size(125, 23);
			this->Pause_Button->TabIndex = 25;
			this->Pause_Button->Text = L"Pause";
			this->Pause_Button->UseVisualStyleBackColor = true;
			this->Pause_Button->Click += gcnew System::EventHandler(this, &MyForm::Pause_Button_Click);
			// 
			// MyForm
			// 
			this->AllowDrop = true;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Window;
			this->ClientSize = System::Drawing::Size(727, 520);
			this->Controls->Add(this->Pause_Button);
			this->Controls->Add(this->Duration_Track_Bar);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Export_button);
			this->Controls->Add(this->Save_To_File_Button);
			this->Controls->Add(this->Save_to_list);
			this->Controls->Add(this->List_of_saved_songs);
			this->Controls->Add(this->Do_Loop);
			this->Controls->Add(this->Speed_Yes);
			this->Controls->Add(this->Speed_label);
			this->Controls->Add(this->Deb_Speed);
			this->Controls->Add(this->SpeedBar);
			this->Controls->Add(this->Deb_Volume);
			this->Controls->Add(this->VolumeBar);
			this->Controls->Add(this->change_label);
			this->Controls->Add(this->Music_Play);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"MyForm";
			this->Text = L"Music Player by Modder v.1.0.0";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->VolumeBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->SpeedBar))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Duration_Track_Bar))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	

	private: System::Void Music_Play_Click(System::Object^ sender, System::EventArgs^ e) {

		
		
		if (this->is_playing == false) {

			try {


				
				uri = gcnew Uri(List_of_saved_songs->GetItemText(List_of_saved_songs->SelectedItem));


				//uri = gcnew Uri(this->Directory_Of_Music->Text, System::UriKind::Relative);
				sound->Open(uri);
				sound->Play();
				sound->MediaOpened += gcnew System::EventHandler(this, &MusicalPlayer::MyForm::OnMediaOpened);
				sound->MediaEnded += gcnew System::EventHandler(this, &MusicalPlayer::MyForm::OnMediaEnded);
				
				
				this->Music_Play->Text = "Stop";
				this->is_playing = true;
				this->change_label->Text = "Music playing";
				Tick_timer->Start();
			}

			catch (Exception^ err) {
				MessageBox::Show("ERROR");

			}

		}
		else if (this->is_playing == true){
			sound->Stop();
			this->is_playing = false;
			this->Music_Play->Text = "Play";
			this->change_label->Text = "Music stopped";

			pause_and_resume = false;
			Pause_Button->Text = "Pause";
		}
		else {
			sound->Stop();
			this->is_playing = false;
			this->Music_Play->Text = "Play";
			this->change_label->Text = "Music stopped";
		}

	}
	
	
	private: System::Void Directory_Of_Music_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}

	private: System::Void Song_list_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void VolumeBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		
		sound->Volume = (VolumeBar->Value)/100.0f;
		this->Deb_Volume->Text = VolumeBar->Value.ToString();
		
	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Volume_Yes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void SpeedBar_Scroll(System::Object^ sender, System::EventArgs^ e) {
	
		sound->SpeedRatio = (SpeedBar->Value)/100.0f;
		this->Deb_Speed->Text = SpeedBar->Value.ToString();
	}
	private: System::Void Speed_Yes_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Speed_Yes->Checked == true) {
			this->Speed_label->Visible = true;
			this->Deb_Speed->Visible = true;
			this->SpeedBar->Visible = true;
		}
		else if (Speed_Yes->Checked == false) {
			this->Speed_label->Visible = false;
			this->Deb_Speed->Visible = false;
			this->SpeedBar->Visible = false;
		}
}
	private: System::Void Do_Loop_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void Save_to_list_Click(System::Object^ sender, System::EventArgs^ e) {

		OpenFileDialog^ open_file_dialog = gcnew OpenFileDialog();
		open_file_dialog->Title = "Select music file";
		open_file_dialog->InitialDirectory = "C:'\'";
		open_file_dialog->Filter = "MediaFiles (*.mp3, *.mp4, *.wav)|*.mp3;*.mp4;*.wav";
		open_file_dialog->RestoreDirectory = true;
		open_file_dialog->ShowDialog();
		
		if (open_file_dialog->FileName != "") {
			
			List_of_saved_songs->Items->Add(open_file_dialog->FileName);
			
			
		}

	}
	private: System::Void List_of_saved_songs_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		List_of_saved_songs->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MusicalPlayer::MyForm::OnMouseDoubleClick);
	}


	private: System::Void change_label_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void Save_To_File_Button_Click(System::Object^ sender, System::EventArgs^ e) {

		FolderBrowserDialog^ folder_for_save = gcnew FolderBrowserDialog();
		System::String^ folder_for_save_file;

		if (folder_for_save->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
			folder_for_save_file = folder_for_save->SelectedPath;
		}

		if (folder_for_save_file != "") {
			System::String^ folder = folder_for_save_file + "\\save.txt";


			try{
				
				System::IO::StreamWriter^ save_file = gcnew System::IO::StreamWriter(folder);
				for each (System::Object^ var in List_of_saved_songs->Items)
				{
					save_file->WriteLine(var);
					
				}

				save_file->Close();
				MessageBox::Show("File Saved!");
			}
			catch (UnauthorizedAccessException^ err) {
			
				MessageBox::Show("Access denied");
			
			}	

		}
		else {

			//pass


		}
	}
	private: System::Void Export_button_Click(System::Object^ sender, System::EventArgs^ e) {

		
		OpenFileDialog^ open_file_dialog = gcnew OpenFileDialog();
		open_file_dialog->Title = "Select txt file";
		open_file_dialog->InitialDirectory = "C:'\'";
		open_file_dialog->Filter = "TxtFiles (*.txt)|*.txt";
		open_file_dialog->RestoreDirectory = true;
		open_file_dialog->ShowDialog();

		if (open_file_dialog->FileName != "") {
			System::String^ str;
			System::IO::StreamReader^ read_file = gcnew System::IO::StreamReader(open_file_dialog->FileName);
			try {
				List_of_saved_songs->Items->Clear();
				
				do{
					str = read_file->ReadLine()->ToString();
					List_of_saved_songs->Items->Add(str);
					
				} while (str != " ");
				
				
				
			}
			catch (NullReferenceException^ ignored) { read_file->Close(); MessageBox::Show("File readed");}
		}

		
	}
	private: System::Void Tick_timer_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (is_playing) {
			
			try {
				this->Duration_Track_Bar->Maximum = (int)sound->NaturalDuration.TimeSpan.TotalMilliseconds;
				this->Duration_Track_Bar->Value = (int)sound->Position.TotalMilliseconds;
			}
			catch (Exception^ ignored) {
			}
			
		}
		else
		{
			Duration_Track_Bar->Value = 0;
			Tick_timer->Stop();

		}
	}

	private: System::Void Music_Duration_Show_Click(System::Object^ sender, System::EventArgs^ e) {
	
	}
	private: System::Void Duration_Track_Bar_Scroll(System::Object^ sender, System::EventArgs^ e) {
		if (is_playing) {
			this->sound->Position = sound->NaturalDuration.TimeSpan.FromMilliseconds(Duration_Track_Bar->Value);
		}
	}
	private: System::Void Pause_Button_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!pause_and_resume && is_playing) {
			
			sound->Pause();
			pause_and_resume = true;
			Pause_Button->Text = "Resume";
		}
		else if(pause_and_resume && is_playing) {
		
			sound->Play();
			pause_and_resume = false;
			Pause_Button->Text = "Pause";
		}
	}
	

//events
	void OnMediaEnded(System::Object^ sender, System::EventArgs^ e);
	void OnMouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e);
	void OnMediaOpened(System::Object^ sender, System::EventArgs^ e);

	
};
}



void MusicalPlayer::MyForm::OnMediaEnded(System::Object^ sender, System::EventArgs^ e)
{
	
	if (this->Do_Loop->Checked == true) {
		
		this->sound->Open(uri);
		this->sound->Play();
		is_playing = true;
	
	}
	else {
		
		sound->Stop();
		is_playing = false;
		this->Music_Play->Text = "Play";
		this->change_label->Text = "Music stopped";
		
	}
}


void MusicalPlayer::MyForm::OnMouseDoubleClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e)
{
	if (!is_playing) {
		try {
			uri = gcnew Uri(List_of_saved_songs->GetItemText(List_of_saved_songs->SelectedItem));
			Tick_timer->Start();
		}
		catch (Exception^ err) {

			MessageBox::Show("ERROR");

		}
		this->sound->Open(uri);
		this->sound->Play();
		this->Music_Play->Text = "Stop";
		this->is_playing = true;
		this->change_label->Text = "Music playing";
			
		
	}
	else if(is_playing){

		this->sound->Stop();
		this->Music_Play->Text = "Play";
		this->is_playing = false;
		this->change_label->Text = "Music stopped";

		pause_and_resume = false;
		Pause_Button->Text = "Pause";
	}
}

void MusicalPlayer::MyForm::OnMediaOpened(System::Object^ sender, System::EventArgs^ e)
{

}






