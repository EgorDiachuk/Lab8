#pragma once

namespace Lab8 {

    using namespace System;
    using namespace System::ComponentModel;
    using namespace System::Collections;
    using namespace System::Windows::Forms;
    using namespace System::Data;
    using namespace System::Drawing;

    /// <summary>
    /// Summary for MyForm
    /// </summary>
    public ref class MyForm : public System::Windows::Forms::Form
    {
    public:
        MyForm(void)
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
        ~MyForm()
        {
            if (components)
            {
                delete components;
            }
        }
    private: System::Windows::Forms::MenuStrip^ menuStrip1;
    private: System::Windows::Forms::ToolStripMenuItem^ ôàéëToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ñòâîğèòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ â³äêğèòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ çáåğåãòèßêToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ïåğåãëÿäToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ïàíåë³ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ïàíåë³²íñòğóìåíò³âToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ğÿäîêÑòàíóToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ êîï³şâàòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ âèğ³çàòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòèToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ôîğìàòToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ øğèôòToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ äèçàéíToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ôîíToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ äîâ³äêàToolStripMenuItem;
    private: System::Windows::Forms::ContextMenuStrip^ contextMenuStrip1;
    private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
    private: System::Windows::Forms::FontDialog^ fontDialog1;
    private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
    private: System::Windows::Forms::OpenFileDialog^ openFileDialog1;
    private: System::Windows::Forms::ColorDialog^ colorDialog1;
    private: System::Windows::Forms::RichTextBox^ richTextBox1;
    private: System::Windows::Forms::ToolStrip^ toolStrip1;
    private: System::Windows::Forms::ToolStripContainer^ toolStripContainer1;
    private: System::ComponentModel::IContainer^ components;

    private:
        /// <summary>
        /// Required designer variable.
        /// </summary>


#pragma region Windows Form Designer generated code
        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        void InitializeComponent(void)
        {
            this->components = (gcnew System::ComponentModel::Container());
            this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
            this->ôàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ñòâîğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->â³äêğèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->çáåğåãòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->çáåğåãòèßêToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ïåğåãëÿäToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ïàíåë³ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ïàíåë³²íñòğóìåíò³âToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ğÿäîêÑòàíóToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->êîï³şâàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->âèğ³çàòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->âñòàâèòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ôîğìàòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->øğèôòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->äèçàéíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->ôîíToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->äîâ³äêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
            this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
            this->fontDialog1 = (gcnew System::Windows::Forms::FontDialog());
            this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
            this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
            this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
            this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
            this->toolStrip1 = (gcnew System::Windows::Forms::ToolStrip());
            this->toolStripContainer1 = (gcnew System::Windows::Forms::ToolStripContainer());
            this->menuStrip1->SuspendLayout();
            this->toolStripContainer1->SuspendLayout();
            this->SuspendLayout();
            // 
            // menuStrip1
            // 
            this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
                this->ôàéëToolStripMenuItem,
                    this->ïåğåãëÿäToolStripMenuItem, this->ïğàâêàToolStripMenuItem, this->ôîğìàòToolStripMenuItem, this->äèçàéíToolStripMenuItem,
                    this->äîâ³äêàToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(800, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // ôàéëToolStripMenuItem
            // 
            this->ôàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->ñòâîğèòèToolStripMenuItem,
                    this->â³äêğèòèToolStripMenuItem, this->çáåğåãòèToolStripMenuItem, this->çáåğåãòèßêToolStripMenuItem
            });
            this->ôàéëToolStripMenuItem->Name = L"ôàéëToolStripMenuItem";
            this->ôàéëToolStripMenuItem->Size = System::Drawing::Size(48, 20);
            this->ôàéëToolStripMenuItem->Text = L"Ôàéë";
            // 
            // ñòâîğèòèToolStripMenuItem
            // 
            this->ñòâîğèòèToolStripMenuItem->Name = L"ñòâîğèòèToolStripMenuItem";
            this->ñòâîğèòèToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->ñòâîğèòèToolStripMenuItem->Text = L"Ñòâîğèòè";
            this->ñòâîğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ñòâîğèòèToolStripMenuItem_Click);
            // 
            // â³äêğèòèToolStripMenuItem
            // 
            this->â³äêğèòèToolStripMenuItem->Name = L"â³äêğèòèToolStripMenuItem";
            this->â³äêğèòèToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->â³äêğèòèToolStripMenuItem->Text = L"Â³äêğèòè";
            this->â³äêğèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::â³äêğèòèToolStripMenuItem_Click);
            // 
            // çáåğåãòèToolStripMenuItem
            // 
            this->çáåğåãòèToolStripMenuItem->Name = L"çáåğåãòèToolStripMenuItem";
            this->çáåğåãòèToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->çáåğåãòèToolStripMenuItem->Text = L"Çáåğåãòè";
            this->çáåğåãòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèToolStripMenuItem_Click);
            // 
            // çáåğåãòèßêToolStripMenuItem
            // 
            this->çáåğåãòèßêToolStripMenuItem->Name = L"çáåğåãòèßêToolStripMenuItem";
            this->çáåğåãòèßêToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->çáåğåãòèßêToolStripMenuItem->Text = L"Çáåğåãòè ÿê";
            this->çáåğåãòèßêToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::çáåğåãòèßêToolStripMenuItem_Click);
            // 
            // ïåğåãëÿäToolStripMenuItem
            // 
            this->ïåğåãëÿäToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ïàíåë³ToolStripMenuItem });
            this->ïåğåãëÿäToolStripMenuItem->Name = L"ïåğåãëÿäToolStripMenuItem";
            this->ïåğåãëÿäToolStripMenuItem->Size = System::Drawing::Size(71, 20);
            this->ïåğåãëÿäToolStripMenuItem->Text = L"Ïåğåãëÿä";
            // 
            // ïàíåë³ToolStripMenuItem
            // 
            this->ïàíåë³ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->ïàíåë³²íñòğóìåíò³âToolStripMenuItem,
                    this->ğÿäîêÑòàíóToolStripMenuItem
            });
            this->ïàíåë³ToolStripMenuItem->Name = L"ïàíåë³ToolStripMenuItem";
            this->ïàíåë³ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
            this->ïàíåë³ToolStripMenuItem->Text = L"Ïàíåë³";
            // 
            // ïàíåë³²íñòğóìåíò³âToolStripMenuItem
            // 
            this->ïàíåë³²íñòğóìåíò³âToolStripMenuItem->Name = L"ïàíåë³²íñòğóìåíò³âToolStripMenuItem";
            this->ïàíåë³²íñòğóìåíò³âToolStripMenuItem->Size = System::Drawing::Size(185, 22);
            this->ïàíåë³²íñòğóìåíò³âToolStripMenuItem->Text = L"Ïàíåë³ ³íñòğóìåíò³â";
            this->ïàíåë³²íñòğóìåíò³âToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ïàíåë³²íñòğóìåíò³âToolStripMenuItem_Click);
            // 
            // ğÿäîêÑòàíóToolStripMenuItem
            // 
            this->ğÿäîêÑòàíóToolStripMenuItem->Name = L"ğÿäîêÑòàíóToolStripMenuItem";
            this->ğÿäîêÑòàíóToolStripMenuItem->Size = System::Drawing::Size(185, 22);
            this->ğÿäîêÑòàíóToolStripMenuItem->Text = L"Ğÿäîê ñòàíó";
            this->ğÿäîêÑòàíóToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ğÿäîêÑòàíóToolStripMenuItem_Click);
            // 
            // ïğàâêàToolStripMenuItem
            // 
            this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->êîï³şâàòèToolStripMenuItem,
                    this->âèğ³çàòèToolStripMenuItem, this->âñòàâèòèToolStripMenuItem
            });
            this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
            this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
            this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
            // 
            // êîï³şâàòèToolStripMenuItem
            // 
            this->êîï³şâàòèToolStripMenuItem->Name = L"êîï³şâàòèToolStripMenuItem";
            this->êîï³şâàòèToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->êîï³şâàòèToolStripMenuItem->Text = L"Êîï³şâàòè";
            this->êîï³şâàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::êîï³şâàòèToolStripMenuItem_Click);
            // 
            // âèğ³çàòèToolStripMenuItem
            // 
            this->âèğ³çàòèToolStripMenuItem->Name = L"âèğ³çàòèToolStripMenuItem";
            this->âèğ³çàòèToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->âèğ³çàòèToolStripMenuItem->Text = L"Âèğ³çàòè";
            this->âèğ³çàòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âèğ³çàòèToolStripMenuItem_Click);
            // 
            // âñòàâèòèToolStripMenuItem
            // 
            this->âñòàâèòèToolStripMenuItem->Name = L"âñòàâèòèToolStripMenuItem";
            this->âñòàâèòèToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->âñòàâèòèToolStripMenuItem->Text = L"Âñòàâèòè";
            this->âñòàâèòèToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::âñòàâèòèToolStripMenuItem_Click);
            // 
            // ôîğìàòToolStripMenuItem
            // 
            this->ôîğìàòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->øğèôòToolStripMenuItem });
            this->ôîğìàòToolStripMenuItem->Name = L"ôîğìàòToolStripMenuItem";
            this->ôîğìàòToolStripMenuItem->Size = System::Drawing::Size(62, 20);
            this->ôîğìàòToolStripMenuItem->Text = L"Ôîğìàò";
            // 
            // øğèôòToolStripMenuItem
            // 
            this->øğèôòToolStripMenuItem->Name = L"øğèôòToolStripMenuItem";
            this->øğèôòToolStripMenuItem->Size = System::Drawing::Size(113, 22);
            this->øğèôòToolStripMenuItem->Text = L"Øğèôò";
            this->øğèôòToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::øğèôòToolStripMenuItem_Click);
            // 
            // äèçàéíToolStripMenuItem
            // 
            this->äèçàéíToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->ôîíToolStripMenuItem });
            this->äèçàéíToolStripMenuItem->Name = L"äèçàéíToolStripMenuItem";
            this->äèçàéíToolStripMenuItem->Size = System::Drawing::Size(59, 20);
            this->äèçàéíToolStripMenuItem->Text = L"Äèçàéí";
            // 
            // ôîíToolStripMenuItem
            // 
            this->ôîíToolStripMenuItem->Name = L"ôîíToolStripMenuItem";
            this->ôîíToolStripMenuItem->Size = System::Drawing::Size(97, 22);
            this->ôîíToolStripMenuItem->Text = L"Ôîí";
            this->ôîíToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::ôîíToolStripMenuItem_Click);
            // 
            // äîâ³äêàToolStripMenuItem
            // 
            this->äîâ³äêàToolStripMenuItem->Name = L"äîâ³äêàToolStripMenuItem";
            this->äîâ³äêàToolStripMenuItem->Size = System::Drawing::Size(61, 20);
            this->äîâ³äêàToolStripMenuItem->Text = L"Äîâ³äêà";
            this->äîâ³äêàToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::äîâ³äêàToolStripMenuItem_Click);
            // 
            // contextMenuStrip1
            // 
            this->contextMenuStrip1->Name = L"contextMenuStrip1";
            this->contextMenuStrip1->Size = System::Drawing::Size(61, 4);
            // 
            // saveFileDialog1
            // 
            this->saveFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::saveFileDialog1_FileOk);
            // 
            // fontDialog1
            // 
            this->fontDialog1->Apply += gcnew System::EventHandler(this, &MyForm::fontDialog1_Apply);
            // 
            // folderBrowserDialog1
            // 
            this->folderBrowserDialog1->HelpRequest += gcnew System::EventHandler(this, &MyForm::folderBrowserDialog1_HelpRequest);
            // 
            // openFileDialog1
            // 
            this->openFileDialog1->FileName = L"openFileDialog1";
            this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
            // 
            // richTextBox1
            // 
            this->richTextBox1->Location = System::Drawing::Point(0, 24);
            this->richTextBox1->Name = L"richTextBox1";
            this->richTextBox1->Size = System::Drawing::Size(800, 414);
            this->richTextBox1->TabIndex = 1;
            this->richTextBox1->Text = L"âàïàâï";
            this->richTextBox1->TextChanged += gcnew System::EventHandler(this, &MyForm::richTextBox1_TextChanged);
            // 
            // toolStrip1
            // 
            this->toolStrip1->Location = System::Drawing::Point(0, 24);
            this->toolStrip1->Name = L"toolStrip1";
            this->toolStrip1->Size = System::Drawing::Size(800, 25);
            this->toolStrip1->TabIndex = 2;
            this->toolStrip1->Text = L"toolStrip1";
            this->toolStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &MyForm::toolStrip1_ItemClicked);
            // 
            // toolStripContainer1
            // 
            // 
            // toolStripContainer1.ContentPanel
            // 
            this->toolStripContainer1->ContentPanel->Size = System::Drawing::Size(150, 150);
            this->toolStripContainer1->ContentPanel->Load += gcnew System::EventHandler(this, &MyForm::toolStripContainer1_ContentPanel_Load);
            this->toolStripContainer1->Location = System::Drawing::Point(8, 35);
            this->toolStripContainer1->Name = L"toolStripContainer1";
            this->toolStripContainer1->Size = System::Drawing::Size(150, 175);
            this->toolStripContainer1->TabIndex = 3;
            this->toolStripContainer1->Text = L"toolStripContainer1";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
            this->ClientSize = System::Drawing::Size(800, 450);
            this->Controls->Add(this->toolStripContainer1);
            this->Controls->Add(this->toolStrip1);
            this->Controls->Add(this->richTextBox1);
            this->Controls->Add(this->menuStrip1);
            this->MainMenuStrip = this->menuStrip1;
            this->Name = L"MyForm";
            this->Text = L"Text Editor";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            this->menuStrip1->ResumeLayout(false);
            this->menuStrip1->PerformLayout();
            this->toolStripContainer1->ResumeLayout(false);
            this->toolStripContainer1->PerformLayout();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion
    private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void ñòâîğèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Ñòâîğåíî íîâèé ôàéë.");
    }
    private: System::Void â³äêğèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        openFileDialog1->ShowDialog();
    }
    private: System::Void çáåğåãòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Ôàéë çáåğåæåíî.");
    }
    private: System::Void çáåğåãòèßêToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        saveFileDialog1->ShowDialog();
    }
    private: System::Void ïàíåë³²íñòğóìåíò³âToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        toolStrip1->Visible = !toolStrip1->Visible;
    }
    private: System::Void êîï³şâàòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        richTextBox1->Copy();
    }
    private: System::Void âèğ³çàòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (richTextBox1->SelectionLength > 0) {
            richTextBox1->Cut();
        }
    }
    private: System::Void âñòàâèòèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (Clipboard::ContainsText()) {
            richTextBox1->Paste();
        }
    }
    private: System::Void øğèôòToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            System::Drawing::Font^ selectedFont = fontDialog1->Font;
            richTextBox1->SelectionFont = selectedFont;
        }
    }
    private: System::Void ôîíToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            richTextBox1->BackColor = colorDialog1->Color;
        }
    }
    private: System::Void äîâ³äêàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("Ñòâîğèâ: ²ñüêîâ ²ãîğ");
    }
    private: System::Void saveFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
    }
    private: System::Void fontDialog1_Apply(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void folderBrowserDialog1_HelpRequest(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void openFileDialog1_FileOk(System::Object^ sender, System::ComponentModel::CancelEventArgs^ e) {
    }
    private: System::Void richTextBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
    }
    private: System::Void toolStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
    }
    private: System::Void ğÿäîêÑòàíóToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
