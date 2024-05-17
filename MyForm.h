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
    private: System::Windows::Forms::ToolStripMenuItem^ ����ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ����볲����������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ���ToolStripMenuItem;
    private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
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
            this->����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->����볲����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->���ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
            this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
                this->����ToolStripMenuItem,
                    this->��������ToolStripMenuItem, this->������ToolStripMenuItem, this->������ToolStripMenuItem, this->������ToolStripMenuItem,
                    this->������ToolStripMenuItem
            });
            this->menuStrip1->Location = System::Drawing::Point(0, 0);
            this->menuStrip1->Name = L"menuStrip1";
            this->menuStrip1->Size = System::Drawing::Size(800, 24);
            this->menuStrip1->TabIndex = 0;
            this->menuStrip1->Text = L"menuStrip1";
            // 
            // ����ToolStripMenuItem
            // 
            this->����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
                this->��������ToolStripMenuItem,
                    this->�������ToolStripMenuItem, this->��������ToolStripMenuItem, this->����������ToolStripMenuItem
            });
            this->����ToolStripMenuItem->Name = L"����ToolStripMenuItem";
            this->����ToolStripMenuItem->Size = System::Drawing::Size(48, 20);
            this->����ToolStripMenuItem->Text = L"����";
            // 
            // ��������ToolStripMenuItem
            // 
            this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
            this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->��������ToolStripMenuItem->Text = L"��������";
            this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
            // 
            // �������ToolStripMenuItem
            // 
            this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
            this->�������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->�������ToolStripMenuItem->Text = L"³������";
            this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
            // 
            // ��������ToolStripMenuItem
            // 
            this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
            this->��������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->��������ToolStripMenuItem->Text = L"��������";
            this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
            // 
            // ����������ToolStripMenuItem
            // 
            this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
            this->����������ToolStripMenuItem->Size = System::Drawing::Size(139, 22);
            this->����������ToolStripMenuItem->Text = L"�������� ��";
            this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
            // 
            // ��������ToolStripMenuItem
            // 
            this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
            this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
            this->��������ToolStripMenuItem->Size = System::Drawing::Size(71, 20);
            this->��������ToolStripMenuItem->Text = L"��������";
            // 
            // �����ToolStripMenuItem
            // 
            this->�����ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
                this->����볲����������ToolStripMenuItem,
                    this->����������ToolStripMenuItem
            });
            this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
            this->�����ToolStripMenuItem->Size = System::Drawing::Size(112, 22);
            this->�����ToolStripMenuItem->Text = L"�����";
            // 
            // ����볲����������ToolStripMenuItem
            // 
            this->����볲����������ToolStripMenuItem->Name = L"����볲����������ToolStripMenuItem";
            this->����볲����������ToolStripMenuItem->Size = System::Drawing::Size(185, 22);
            this->����볲����������ToolStripMenuItem->Text = L"����� �����������";
            this->����볲����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����볲����������ToolStripMenuItem_Click);
            // 
            // ����������ToolStripMenuItem
            // 
            this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
            this->����������ToolStripMenuItem->Size = System::Drawing::Size(185, 22);
            this->����������ToolStripMenuItem->Text = L"����� �����";
            this->����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::����������ToolStripMenuItem_Click);
            // 
            // ������ToolStripMenuItem
            // 
            this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
                this->��������ToolStripMenuItem,
                    this->�������ToolStripMenuItem, this->��������ToolStripMenuItem
            });
            this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
            this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
            this->������ToolStripMenuItem->Text = L"������";
            // 
            // ��������ToolStripMenuItem
            // 
            this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
            this->��������ToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->��������ToolStripMenuItem->Text = L"��������";
            this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
            // 
            // �������ToolStripMenuItem
            // 
            this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
            this->�������ToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->�������ToolStripMenuItem->Text = L"�������";
            this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�������ToolStripMenuItem_Click);
            // 
            // ��������ToolStripMenuItem
            // 
            this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
            this->��������ToolStripMenuItem->Size = System::Drawing::Size(132, 22);
            this->��������ToolStripMenuItem->Text = L"��������";
            this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::��������ToolStripMenuItem_Click);
            // 
            // ������ToolStripMenuItem
            // 
            this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->�����ToolStripMenuItem });
            this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
            this->������ToolStripMenuItem->Size = System::Drawing::Size(62, 20);
            this->������ToolStripMenuItem->Text = L"������";
            // 
            // �����ToolStripMenuItem
            // 
            this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
            this->�����ToolStripMenuItem->Size = System::Drawing::Size(113, 22);
            this->�����ToolStripMenuItem->Text = L"�����";
            this->�����ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::�����ToolStripMenuItem_Click);
            // 
            // ������ToolStripMenuItem
            // 
            this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->���ToolStripMenuItem });
            this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
            this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
            this->������ToolStripMenuItem->Text = L"������";
            // 
            // ���ToolStripMenuItem
            // 
            this->���ToolStripMenuItem->Name = L"���ToolStripMenuItem";
            this->���ToolStripMenuItem->Size = System::Drawing::Size(97, 22);
            this->���ToolStripMenuItem->Text = L"���";
            this->���ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::���ToolStripMenuItem_Click);
            // 
            // ������ToolStripMenuItem
            // 
            this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
            this->������ToolStripMenuItem->Size = System::Drawing::Size(61, 20);
            this->������ToolStripMenuItem->Text = L"������";
            this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &MyForm::������ToolStripMenuItem_Click);
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
            this->richTextBox1->Text = L"������";
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
    private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("�������� ����� ����.");
    }
    private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        openFileDialog1->ShowDialog();
    }
    private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("���� ���������.");
    }
    private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        saveFileDialog1->ShowDialog();
    }
    private: System::Void ����볲����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        toolStrip1->Visible = !toolStrip1->Visible;
    }
    private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        richTextBox1->Copy();
    }
    private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (richTextBox1->SelectionLength > 0) {
            richTextBox1->Cut();
        }
    }
    private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (Clipboard::ContainsText()) {
            richTextBox1->Paste();
        }
    }
    private: System::Void �����ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (fontDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            System::Drawing::Font^ selectedFont = fontDialog1->Font;
            richTextBox1->SelectionFont = selectedFont;
        }
    }
    private: System::Void ���ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        if (colorDialog1->ShowDialog() == System::Windows::Forms::DialogResult::OK) {
            richTextBox1->BackColor = colorDialog1->Color;
        }
    }
    private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
        MessageBox::Show("�������: ������ ����");
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
    private: System::Void ����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
    }
};
}
