#pragma once

#include <stack>
#include <windows.h>
#include <cmath>
#include <iostream>
#include <msclr\marshal_cppstd.h>

using std::string;
using std::stack;

namespace WinCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
    using namespace System::Windows::Forms::DataVisualization::Charting;

	/// <summary>
	/// Сводка для MyForm
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
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

    private: System::Windows::Forms::Button^ build_button;
    private: System::Windows::Forms::TextBox^ function_text;


    private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart;
    private: System::Windows::Forms::TextBox^ YmaxVal;
    private: System::Windows::Forms::TextBox^ YminVal;
    private: System::Windows::Forms::TextBox^ XmaxVal;
    private: System::Windows::Forms::TextBox^ XminVal;


    private: System::Windows::Forms::Label^ YmaxL;
    private: System::Windows::Forms::Label^ YminL;
    private: System::Windows::Forms::Label^ XmaxL;
    private: System::Windows::Forms::Label^ XminL;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
            System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
            System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
            System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
            System::Windows::Forms::DataVisualization::Charting::Title^ title1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
            System::Windows::Forms::DataVisualization::Charting::Title^ title2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Title());
            this->build_button = (gcnew System::Windows::Forms::Button());
            this->function_text = (gcnew System::Windows::Forms::TextBox());
            this->chart = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
            this->YmaxVal = (gcnew System::Windows::Forms::TextBox());
            this->YminVal = (gcnew System::Windows::Forms::TextBox());
            this->XmaxVal = (gcnew System::Windows::Forms::TextBox());
            this->XminVal = (gcnew System::Windows::Forms::TextBox());
            this->YmaxL = (gcnew System::Windows::Forms::Label());
            this->YminL = (gcnew System::Windows::Forms::Label());
            this->XmaxL = (gcnew System::Windows::Forms::Label());
            this->XminL = (gcnew System::Windows::Forms::Label());
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->BeginInit();
            this->SuspendLayout();
            // 
            // build_button
            // 
            this->build_button->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->build_button->Location = System::Drawing::Point(1240, 111);
            this->build_button->Name = L"build_button";
            this->build_button->Size = System::Drawing::Size(157, 30);
            this->build_button->TabIndex = 7;
            this->build_button->Text = L"Построить";
            this->build_button->UseVisualStyleBackColor = true;
            this->build_button->Click += gcnew System::EventHandler(this, &MyForm::button1_Click_1);
            // 
            // function_text
            // 
            this->function_text->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Right));
            this->function_text->Location = System::Drawing::Point(1217, 63);
            this->function_text->Name = L"function_text";
            this->function_text->Size = System::Drawing::Size(198, 20);
            this->function_text->TabIndex = 8;
            // 
            // chart
            // 
            this->chart->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
                | System::Windows::Forms::AnchorStyles::Left)
                | System::Windows::Forms::AnchorStyles::Right));
            chartArea1->Name = L"ChartArea1";
            this->chart->ChartAreas->Add(chartArea1);
            legend1->Name = L"Legend";
            this->chart->Legends->Add(legend1);
            this->chart->Location = System::Drawing::Point(-9, -1);
            this->chart->Name = L"chart";
            series1->BorderColor = System::Drawing::Color::White;
            series1->BorderWidth = 3;
            series1->ChartArea = L"ChartArea1";
            series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
            series1->Color = System::Drawing::Color::Blue;
            series1->CustomProperties = L"EmptyPointValue=Zero";
            series1->LabelBorderColor = System::Drawing::Color::White;
            series1->LabelForeColor = System::Drawing::Color::White;
            series1->Legend = L"Legend";
            series1->MarkerStep = 4;
            series1->Name = L"f1(x)=";
            series1->XValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
            series1->YValueType = System::Windows::Forms::DataVisualization::Charting::ChartValueType::Double;
            this->chart->Series->Add(series1);
            this->chart->Size = System::Drawing::Size(1185, 920);
            this->chart->TabIndex = 5;
            this->chart->Text = L"chart";
            title1->Alignment = System::Drawing::ContentAlignment::BottomCenter;
            title1->BorderWidth = 4;
            title1->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Bottom;
            title1->DockingOffset = -2;
            title1->Name = L"XVal";
            title1->Text = L"X";
            title1->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Frame;
            title2->Alignment = System::Drawing::ContentAlignment::BottomCenter;
            title2->BackColor = System::Drawing::Color::White;
            title2->BackSecondaryColor = System::Drawing::Color::White;
            title2->BorderColor = System::Drawing::Color::White;
            title2->BorderWidth = 3;
            title2->Docking = System::Windows::Forms::DataVisualization::Charting::Docking::Left;
            title2->DockingOffset = 3;
            title2->Name = L"FXVal";
            title2->Text = L"F(x)";
            title2->TextStyle = System::Windows::Forms::DataVisualization::Charting::TextStyle::Frame;
            this->chart->Titles->Add(title1);
            this->chart->Titles->Add(title2);
            this->chart->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::chart_MouseDown);
            this->chart->MouseHover += gcnew System::EventHandler(this, &MyForm::chart1_MouseHover);
            this->chart->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::chart_MouseMove);
            this->chart->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::chart_MouseUp);
            this->chart->MouseWheel += gcnew System::Windows::Forms::MouseEventHandler(this, &MyForm::chart1_MouseWheel);
            // 
            // YmaxVal
            // 
            this->YmaxVal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->YmaxVal->Location = System::Drawing::Point(1217, 207);
            this->YmaxVal->Name = L"YmaxVal";
            this->YmaxVal->Size = System::Drawing::Size(87, 20);
            this->YmaxVal->TabIndex = 9;
            // 
            // YminVal
            // 
            this->YminVal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->YminVal->Location = System::Drawing::Point(1217, 271);
            this->YminVal->Name = L"YminVal";
            this->YminVal->Size = System::Drawing::Size(87, 20);
            this->YminVal->TabIndex = 10;
            // 
            // XmaxVal
            // 
            this->XmaxVal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->XmaxVal->Location = System::Drawing::Point(1331, 207);
            this->XmaxVal->Name = L"XmaxVal";
            this->XmaxVal->Size = System::Drawing::Size(84, 20);
            this->XmaxVal->TabIndex = 11;
            // 
            // XminVal
            // 
            this->XminVal->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->XminVal->Location = System::Drawing::Point(1331, 271);
            this->XminVal->Name = L"XminVal";
            this->XminVal->Size = System::Drawing::Size(84, 20);
            this->XminVal->TabIndex = 12;
            // 
            // YmaxL
            // 
            this->YmaxL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->YmaxL->AutoSize = true;
            this->YmaxL->Location = System::Drawing::Point(1214, 191);
            this->YmaxL->Name = L"YmaxL";
            this->YmaxL->Size = System::Drawing::Size(35, 13);
            this->YmaxL->TabIndex = 13;
            this->YmaxL->Text = L"label1";
            // 
            // YminL
            // 
            this->YminL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->YminL->AutoSize = true;
            this->YminL->Location = System::Drawing::Point(1214, 255);
            this->YminL->Name = L"YminL";
            this->YminL->Size = System::Drawing::Size(35, 13);
            this->YminL->TabIndex = 14;
            this->YminL->Text = L"label2";
            // 
            // XmaxL
            // 
            this->XmaxL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->XmaxL->AutoSize = true;
            this->XmaxL->Location = System::Drawing::Point(1328, 191);
            this->XmaxL->Name = L"XmaxL";
            this->XmaxL->Size = System::Drawing::Size(35, 13);
            this->XmaxL->TabIndex = 15;
            this->XmaxL->Text = L"label3";
            // 
            // XminL
            // 
            this->XminL->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
            this->XminL->AutoSize = true;
            this->XminL->Location = System::Drawing::Point(1328, 255);
            this->XminL->Name = L"XminL";
            this->XminL->Size = System::Drawing::Size(35, 13);
            this->XminL->TabIndex = 16;
            this->XminL->Text = L"label4";
            // 
            // MyForm
            // 
            this->AutoScaleDimensions = System::Drawing::SizeF(96, 96);
            this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Dpi;
            this->ClientSize = System::Drawing::Size(1570, 931);
            this->Controls->Add(this->XminL);
            this->Controls->Add(this->XmaxL);
            this->Controls->Add(this->YminL);
            this->Controls->Add(this->YmaxL);
            this->Controls->Add(this->XminVal);
            this->Controls->Add(this->XmaxVal);
            this->Controls->Add(this->YminVal);
            this->Controls->Add(this->YmaxVal);
            this->Controls->Add(this->function_text);
            this->Controls->Add(this->build_button);
            this->Controls->Add(this->chart);
            this->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
            this->Name = L"MyForm";
            this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
            this->Text = L"Графики функций";
            this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
            (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart))->EndInit();
            this->ResumeLayout(false);
            this->PerformLayout();

        }
#pragma endregion

        bool err = 0;
        double l = -10, r = 10, step = 0.3, x, y;
        int points_cnt = 0;

        void fx(string& func, float x)
        {
            bool nested_func = 0;
            string str_xval = std::to_string(x);
            for (int i = 0; func[i] != '\n'; i++)
            {
                if (func[i] == 'a' || func[i] == 'b' || func[i] == 'c' || func[i] == 'd' || func[i] == 'e' || func[i] == 'f' || func[i] == 'g')
                {
                    string buf_str = "";
                    for (int k = 0; k < i; k++)
                    {
                        buf_str += func[k];
                    }
                    buf_str += '(';
                    buf_str += func[i];
                    buf_str += '(';
                    stack<char> brackets;
                    brackets.push('(');
                    brackets.push('(');
                    int k = i + 2;
                    while (brackets.size() != 1)
                    {
                        buf_str += func[k];
                        if (func[k] == '(')
                        {
                            brackets.push('(');
                        }
                        else if (func[k] == ')')
                            brackets.pop();
                        k++;
                    }
                    buf_str += ')';
                    k--;
                    for (k; func[k] != '\n'; k++)
                    {
                        buf_str += func[k+1];
                    }
                    func = buf_str;
                    i++;
                }
                if (func[i] == 'x')
                {
                    func[i] = ' ';
                    string buf_str = "";
                    int beg = i + 1;
                    for (int j = beg; func[j] != '\n'; j++)
                    {
                        buf_str += func[j];
                        func[j] = ' ';
                    }
                    func[func.size() - 1] = ' ';
                    func += '`' + str_xval + buf_str + '\n';
                }
            }
        }

        float act(char action, float a, float b)
        {
            switch (action)
            {
            case '-': return a - b;
            case '+': return a + b;
            case '*': return a * b;
            case '/': return a / b;
            case '^': return pow(a, b);
            }
        }

        void calc(stack<float>& nums, stack<char>& acts)
        {
            float tmp_a = nums.top();
            nums.pop();
            float tmp_b = nums.top();
            nums.pop();
            char tmp_sign = acts.top();
            float n = act(tmp_sign, tmp_a, tmp_b);
            if (n != INFINITY)
            {
                nums.push(n);
            }
            else nums.push(INFINITY);
            acts.pop();
        }

        string num_str_reverse(string& num_str, int n1, int n2)
        {
            if (n2 - n1 <= 0)
            {
                return num_str;
            }
            char tmp_c = num_str[n1];
            num_str[n1] = num_str[n2];
            num_str[n2] = tmp_c;
            return num_str_reverse(num_str, n1 + 1, n2 - 1);
        }

        void tokenize_func(string func, stack<float>& nums, stack<char>& acts)
        {
            string tmp = "";
            int i = func.size() - 1;
            for (i; i > 1; i--)
            {
                if (isdigit(func[i]) || func[i] == '.')
                {
                    tmp += func[i];
                }
                if (func[i - 1] != '`' && (func[i] == '+' || func[i] == '-' || func[i] == '*' || func[i] == '/' || func[i] == '^' || func[i] == '(' || func[i] == ')' || func[i] == 'a' || func[i] == 'b' || func[i] == 'c' || func[i] == 'd' || func[i] == 'e' || func[i] == 'f' || func[i] == 'g'))
                {
                    acts.push(func[i]);
                }
                if (func[i] == '`')
                {
                    if (func[i + 1] == '-') tmp += '-';
                    nums.push(std::stod(num_str_reverse(tmp, 0, tmp.size() - 1)));
                    tmp = "";
                }
            }
        }

        float parse_func(stack<float>& nums, stack<char>& acts)
        {
            float tmp_num = 0, a = 0, b = 0;
            bool lbracket = 0, tmpn = 0;
            char tmp_s = ' ', sign = ' ', t_ch = ' ', nested_func = ' ';
            int st_size = acts.size();
            for (int i = 0; i < st_size; i++)
            {
                if (nums.size() == 1 && !acts.empty() && (acts.top() == 'a' || acts.top() == 'b' || acts.top() == 'c' || acts.top() == 'd' || acts.top() == 'e' || acts.top() == 'f' || acts.top() == 'g')) { nested_func = acts.top(); }
                if (nums.size() == 1 && nested_func == ' ' && acts.size() <= 1) break;
                if (acts.size() == 1)
                {
                    calc(nums, acts);
                    if (nums.top() == INFINITY)
                        return INFINITY;
                    break;
                }
                if (!acts.empty() && acts.top() != '(' && acts.top() != ')' && acts.top() != 'a' && acts.top() != 'b' && acts.top() != 'c' && acts.top() != 'd' && acts.top() != 'e' && acts.top() != 'f' && acts.top() != 'g')
                {
                    tmp_num = nums.top();
                    tmpn = 1;
                    nums.pop();
                    tmp_s = acts.top();
                    acts.pop();
                }
                if (((tmp_s == '+' || tmp_s == '-') && (acts.top() == '*' || acts.top() == '/')) || ((tmp_s == '+' || tmp_s == '-' || tmp_s == '*' || tmp_s == '/') && (acts.top() == '^')))
                {
                    a = tmp_num;
                    sign = tmp_s;
                    t_ch = acts.top();
                    acts.pop();
                    if (!acts.empty() && acts.top() == '(')
                    {
                        lbracket = 1;
                        b = nums.top();
                        nums.pop();
                        goto lbr;
                    }
                    acts.push(t_ch);
                    t_ch = ' ';
                    calc(nums, acts);
                    if (nums.top() == INFINITY)
                        return INFINITY;
                    nums.push(a);
                    acts.push(sign);
                }
                else if (!acts.empty() && acts.top() != '(' && tmp_s != ' ' && acts.top() != 'a' && acts.top() != 'b' && acts.top() != 'c' && acts.top() != 'd' && acts.top() != 'e' && acts.top() != 'f' && acts.top() != 'g')
                {
                    nums.push(tmp_num);
                    acts.push(tmp_s);
                    calc(nums, acts);
                    if (nums.top() == INFINITY)
                        return INFINITY;
                    tmp_s = ' ';
                    tmpn = 0;
                }
                if (!acts.empty() && (acts.top() == 'a' || acts.top() == 'b' || acts.top() == 'c' || acts.top() == 'd' || acts.top() == 'e' || acts.top() == 'f' || acts.top() == 'g'))
                {
                    nested_func = acts.top();
                    acts.pop();
                }
                if (acts.top() == '(')
                {
                lbr:
                    acts.pop();
                    parse_func(nums, acts);
                    if (nested_func != ' ') {
                        if (nested_func == 'a') nums.top() = sinf(nums.top());
                        if (nested_func == 'b') nums.top() = abs(nums.top());
                        if (nested_func == 'c') nums.top() = cosf(nums.top());
                        if (nested_func == 'd') nums.top() = tanf(nums.top());
                        if (nested_func == 'e') nums.top() = -tanf(nums.top());//cosf(nums.top()) / sinf(nums.top());
                        if (nested_func == 'f') nums.top() = logf(nums.top());
                        if (nested_func == 'g') nums.top() = expf(nums.top());
                        nested_func = ' ';
                    }
                    if (lbracket)
                    {
                        nums.push(b);
                        lbracket = 0;
                    }
                    if (t_ch != ' ') acts.push(t_ch);
                    if (tmp_s != ' ') acts.push(tmp_s);
                    if (tmpn) nums.push(tmp_num);
                }
                if (!acts.empty() && acts.top() == ')')
                {
                    acts.pop();
                    break;
                }
            }
            return nums.top();
        }

        void err_check(int lbrackets_n, int rbrackets_n, int numn)
        {
            if (lbrackets_n != rbrackets_n || lbrackets_n >= 256 || numn == 0)
            {
                err = 1;
                return;
            }
        }

        void lexer(string& fun)
        {
            string func = "  ";
            char tmp_c = ' ', prevs = ' ';
            int lbrackets_n = 0, rbrackets_n = 0, numn = 0, cnt = 0;
            fun += '\n';
            while (fun[cnt] != '\n')
            {
                cnt++;
                prevs = tmp_c;
                tmp_c = fun[cnt];
                if (tmp_c == '`' || (int)tmp_c < -1 || (prevs == 'x' && tmp_c == 'x')) { err = 1; return; }
                if (isdigit(tmp_c) || tmp_c == 'x') numn++;
                if (isalpha(func[func.size() - 1]) && isalpha(func[func.size() - 2]) && isalpha(tmp_c))
                {
                    char c1 = func[func.size() - 2], c2 = func[func.size() - 1];
                    func[func.size() - 1] = ' ';
                    func[func.size() - 2] = ' ';
                    if (c1 == 'a' && c2 == 'b' && tmp_c == 's') func += " b";
                    if (c1 == 's' && c2 == 'i' && tmp_c == 'n') func += " a";
                    if (c1 == 'c' && c2 == 'o' && tmp_c == 's') func += " c";
                    if (c1 == 't' && c2 == 'a' && tmp_c == 'n') func += " d";
                    if (c1 == 'c' && c2 == 'o' && tmp_c == 't') func += " e";
                    if (c1 == 'l' && c2 == 'o' && tmp_c == 'g') func += " f";
                    if (c1 == 'e' && c2 == 'x' && tmp_c == 'p') func += " g";
                    tmp_c = ' ';
                    if (func[func.size() - 5] == '-' && !isdigit(func[func.size() - 6]) && func[func.size() - 6] != 'x' && func[func.size() - 6] != ')')
                    {
                        func[func.size() - 5] = '`';
                        func[func.size() - 4] = '-';
                        func[func.size() - 3] = '1';
                        func[func.size() - 2] = '*';
                    }
                }
                if (tmp_c == '(' || (tmp_c == 'x' && !isalpha(func[func.size() - 1])))
                {
                    lbrackets_n++;
                    if (func[func.size() - 1] == '-')
                    {
                        func += "`1*";
                    }
                    if (tmp_c == 'x')
                    {
                        rbrackets_n++;
                        func += "(x)";
                        continue;
                    }
                }
                if (tmp_c == ')') rbrackets_n++;
                if ((isdigit(tmp_c) || tmp_c == 'x') && !isalpha(func[func.size() - 1]) && !isdigit(func[func.size() - 1]) && func[func.size() - 1] != '.' && func[func.size() - 2] != '`')
                {
                    func += '`';
                }
                if (tmp_c != ' ') func += tmp_c;
            }
            err_check(lbrackets_n, rbrackets_n, numn);
            fun = func;
            //fun += '\n';
        }

        void scan(string& func)
        {
            int fsize = func.size();
            for (int i = 2; i < fsize; i++)
            {
                if (func[i - 1] != ' ' && func[i] != ' ' && func[i - 1] != '(' && func[i - 1] != ')' && !isdigit(func[i - 1]) && func[i - 1] != '`' && func[i] != '(' && func[i] != ')' && !isdigit(func[i]) && func[i] != '`' && func[i] != 'a' && func[i] != 'b' && func[i] != 'c' && func[i] != 'd' && func[i] != 'e' && func[i] != 'f' && func[i] != 'g')
                {
                    err = 1;
                    return;
                }
                if (func[i + 1] == '`' && func[i] == '-' && !isdigit(func[i - 1]) && func[i - 1] != ')')
                {
                    func[i + 1] = '-';
                    func[i] = '`';
                }
            }
        }

        bool is_down = 0;
        double mouse_xpos, dx;

        float fx_in_point(string func, float x)
        {
            stack<float> nums;
            stack<char> acts;
            fx(func, x);
            scan(func);
            tokenize_func(func, nums, acts);
            float n = parse_func(nums, acts);
            if (n == INFINITY)
                return INFINITY;
            return parse_func(nums, acts);
        }

        void draw_graph(double l, double r)
        {
            err = 0;
            string func = ' ' + msclr::interop::marshal_as<std::string>(function_text->Text);
            lexer(func);

            if (err)
            {
                MessageBox::Show("Неправильный ввод", "Ошибка");
                return;
            }
            
            x = l;
            while (x <= r)
            {
                y = fx_in_point(func, x);
                if (y == INFINITY) {
                    x += step;
                    continue;
                }
                if (err)
                {
                    MessageBox::Show("Неправильный ввод", "Ошибка");
                    return;
                }
                this->chart->Series[0]->Points->AddXY(x, y);
                x += step;
                points_cnt += 1;
            }
            this->chart->Series[0]->LegendText = L"f(x)=" + function_text->Text;
            DataPoint^ XYmax = this->chart->Series[0]->Points->FindMaxByValue();
            DataPoint^ XYmin = this->chart->Series[0]->Points->FindMinByValue();
            YmaxVal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(XYmax->YValues[0]));
            YminVal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(XYmin->YValues[0]));
            XmaxVal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(XYmax->XValue));
            XminVal->Text = msclr::interop::marshal_as<System::String^>(std::to_string(XYmin->XValue));
        }
        //    //sample 2+abs(-(cot(-(-cos(-x)))-(x^2))) //x/sin(tan(-x+abs(2*x))) 
        // //((1+(-1)^(abs(x)))/2)*(x-abs(x)/2)+((1-(-1)^(abs(x)))/2)*((abs(x)+1)/2)
        //    /*2 + abs(-(cot(-(-cos(-x))) - (x ^ 2)))
        //    2 + abs(-(cot(-(-cos(-x))) - (x ^ 2))) / (x ^ 2)
        //    2 + abs(-(cot(-(-cos(-x))) - (x ^ 2))) / (x)
        //    sin(tan(cos(abs(x))))
        //    x^(-sin(x))
        //    tan(log(x))^abs(x)
        //    cos(sin(-x))*log(x)
        //    cos(cos(-sin(tan(x))))*/
	private: Void MyForm_Load(Object^ sender, EventArgs^ e) {
            
			build_button->Text = "Построить";
            function_text->Text = "sin(x)*0.5*x";
            YmaxL->Text = "Ymax";
            YminL->Text = "Ymin";
            XmaxL->Text = "Xmax";
            XminL->Text = "Xmin";
            this->chart->Series[0]->Points->Clear();
            draw_graph(l, r);
	}

private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) {
    this->chart->Series[0]->Points->Clear();
    draw_graph(l, r);
}

private: System::Void chart1_MouseWheel(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    if (e->Delta < 0)
    {
        l -= (abs(l) + abs(r)) / 80;
        r += (abs(l) + abs(r)) / 80;
    }
    else if (e->Delta > 0)
    {
        l += (abs(l) + abs(r)) / 50;
        r -= (abs(l) + abs(r)) / 50;
    }
    this->chart->Series[0]->Points->Clear();
    draw_graph(l, r);
}
private: System::Void chart1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
    this->chart->Series[0]->ToolTip = "(#VALX; #VALY)";
}
private: System::Void chart_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    is_down = 1;
    mouse_xpos = this->chart->MousePosition.X;
}
private: System::Void chart_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    is_down = 0;
}
private: System::Void chart_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
    if (is_down)
    {
        dx = this->chart->MousePosition.X - mouse_xpos;
        double rl = r, ll = l;
        r -= dx / 1000;
        l -= dx / 1000;
        if (dx < 0)
        {
            draw_graph(rl, r);
            int i = 0;
            while (this->chart->Series[0]->Points[i]->XValue < l)
            {
                this->chart->Series[0]->Points->Remove(this->chart->Series[0]->Points[i]);
                i++;
            }
        }
        else if (dx > 0)
        {
            this->chart->Series[0]->Points->Clear();
            draw_graph(l, r);//l, ll
            /*int i = 0;
            while (this->chart->Series[0]->Points[i]->XValue >= r)
            {
                this->chart->Series[0]->Points->Remove(this->chart->Series[0]->Points[i]);
                i++;
            }*/
        }
    }
}
};
}
