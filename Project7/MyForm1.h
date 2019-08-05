#pragma once
#include <vector>
#include <iostream>
using namespace std;

namespace Project7 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm1
	/// </summary>
	public ref class MyForm1 : public System::Windows::Forms::Form
	{
	public:
		MyForm1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			Reset();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	protected:

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  p1cows;
	private: System::Windows::Forms::Label^  label2;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label13;
	private: System::Windows::Forms::Label^  label14;
	private: System::Windows::Forms::Label^  label15;
	private: System::Windows::Forms::Label^  label16;
	private: System::Windows::Forms::Label^  p1ley;


	private: System::Windows::Forms::Label^  p1pasture;

	private: System::Windows::Forms::Label^  p1hay;

	private: System::Windows::Forms::Label^  p1roots;

	private: System::Windows::Forms::Label^  p1potatoes;

	private: System::Windows::Forms::Label^  p1oates;

	private: System::Windows::Forms::Label^  p1barley;

	private: System::Windows::Forms::Label^  p1wheat;

	private: System::Windows::Forms::Label^  p1sp;

	private: System::Windows::Forms::Label^  p1lambs;

	private: System::Windows::Forms::Label^  label3;

	private: System::Windows::Forms::Label^  p1ewes;
	private: System::Windows::Forms::Label^  p1bc;


	private: System::Windows::Forms::Label^  p1hc;

	private: System::Windows::Forms::Label^  p1horses;

	private: System::Windows::Forms::Label^  p1sows;
	private: System::Windows::Forms::Label^  label17;
	private: System::Windows::Forms::Label^  p1money;

	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  p3money;


	private: System::Windows::Forms::Label^  label20;
	private: System::Windows::Forms::Label^  p3ley;

	private: System::Windows::Forms::Label^  p3pasture;

	private: System::Windows::Forms::Label^  p3hay;

	private: System::Windows::Forms::Label^  p3roots;

	private: System::Windows::Forms::Label^  p3potatoes;

	private: System::Windows::Forms::Label^  p3oates;

	private: System::Windows::Forms::Label^  p3barley;

	private: System::Windows::Forms::Label^  p3wheat;

	private: System::Windows::Forms::Label^  p3sp;

	private: System::Windows::Forms::Label^  p3lambs;

	private: System::Windows::Forms::Label^  label31;
	private: System::Windows::Forms::Label^  p3ewes;
	private: System::Windows::Forms::Label^  p3bc;


	private: System::Windows::Forms::Label^  p3hc;

	private: System::Windows::Forms::Label^  p3horses;

	private: System::Windows::Forms::Label^  p3sows;

	private: System::Windows::Forms::Label^  label37;
	private: System::Windows::Forms::Label^  label38;
	private: System::Windows::Forms::Label^  label39;
	private: System::Windows::Forms::Label^  label40;
	private: System::Windows::Forms::Label^  label41;
	private: System::Windows::Forms::Label^  label42;
	private: System::Windows::Forms::Label^  label43;
	private: System::Windows::Forms::Label^  label44;
	private: System::Windows::Forms::Label^  label45;
	private: System::Windows::Forms::Label^  label46;
	private: System::Windows::Forms::Label^  label47;
	private: System::Windows::Forms::Label^  label48;
	private: System::Windows::Forms::Label^  label49;
	private: System::Windows::Forms::Label^  label50;
private: System::Windows::Forms::Label^  p3cows;

	private: System::Windows::Forms::Label^  label52;

	private: System::Windows::Forms::Panel^  panel3;
private: System::Windows::Forms::Label^  p5money;

	private: System::Windows::Forms::Label^  label54;
private: System::Windows::Forms::Label^  p5ley;

private: System::Windows::Forms::Label^  p5pasture;

private: System::Windows::Forms::Label^  p5hay;

private: System::Windows::Forms::Label^  p5roots;

private: System::Windows::Forms::Label^  p5potatoes;

private: System::Windows::Forms::Label^  p5oates;

private: System::Windows::Forms::Label^  p5barley;

private: System::Windows::Forms::Label^  p5wheat;

private: System::Windows::Forms::Label^  p5sp;

private: System::Windows::Forms::Label^  p5lambs;

	private: System::Windows::Forms::Label^  label65;
private: System::Windows::Forms::Label^  p5ewes;
private: System::Windows::Forms::Label^  p5bc;


private: System::Windows::Forms::Label^  p5hc;

private: System::Windows::Forms::Label^  p5horses;

private: System::Windows::Forms::Label^  p5sows;

	private: System::Windows::Forms::Label^  label71;
	private: System::Windows::Forms::Label^  label72;
	private: System::Windows::Forms::Label^  label73;
	private: System::Windows::Forms::Label^  label74;
	private: System::Windows::Forms::Label^  label75;
	private: System::Windows::Forms::Label^  label76;
	private: System::Windows::Forms::Label^  label77;
	private: System::Windows::Forms::Label^  label78;
	private: System::Windows::Forms::Label^  label79;
	private: System::Windows::Forms::Label^  label80;
	private: System::Windows::Forms::Label^  label81;
	private: System::Windows::Forms::Label^  label82;
	private: System::Windows::Forms::Label^  label83;
	private: System::Windows::Forms::Label^  label84;
private: System::Windows::Forms::Label^  p5cows;

	private: System::Windows::Forms::Label^  label86;

	private: System::Windows::Forms::Panel^  panel4;
private: System::Windows::Forms::Label^  p4money;

	private: System::Windows::Forms::Label^  label88;
private: System::Windows::Forms::Label^  p4ley;

private: System::Windows::Forms::Label^  p4pasture;

private: System::Windows::Forms::Label^  p4hay;

private: System::Windows::Forms::Label^  p4roots;

private: System::Windows::Forms::Label^  p4potatoes;

private: System::Windows::Forms::Label^  p4oates;

private: System::Windows::Forms::Label^  p4barley;

private: System::Windows::Forms::Label^  p4wheat;

private: System::Windows::Forms::Label^  p4sp;

private: System::Windows::Forms::Label^  p4lambs;

	private: System::Windows::Forms::Label^  label99;
private: System::Windows::Forms::Label^  p4ewes;
private: System::Windows::Forms::Label^  p4bc;


private: System::Windows::Forms::Label^  p4hc;

private: System::Windows::Forms::Label^  p4horses;

private: System::Windows::Forms::Label^  p4sows;

	private: System::Windows::Forms::Label^  label105;
	private: System::Windows::Forms::Label^  label106;
	private: System::Windows::Forms::Label^  label107;
	private: System::Windows::Forms::Label^  label108;
	private: System::Windows::Forms::Label^  label109;
	private: System::Windows::Forms::Label^  label110;
	private: System::Windows::Forms::Label^  label111;
	private: System::Windows::Forms::Label^  label112;
	private: System::Windows::Forms::Label^  label113;
	private: System::Windows::Forms::Label^  label114;
	private: System::Windows::Forms::Label^  label115;
	private: System::Windows::Forms::Label^  label116;
	private: System::Windows::Forms::Label^  label117;
	private: System::Windows::Forms::Label^  label118;
private: System::Windows::Forms::Label^  p4cows;

	private: System::Windows::Forms::Label^  label120;

	private: System::Windows::Forms::Panel^  panel5;
private: System::Windows::Forms::Label^  p2money;

	private: System::Windows::Forms::Label^  label123;
private: System::Windows::Forms::Label^  p2ley;

private: System::Windows::Forms::Label^  p2pasture;

private: System::Windows::Forms::Label^  p2hay;

private: System::Windows::Forms::Label^  p2roots;

private: System::Windows::Forms::Label^  p2potatoes;

private: System::Windows::Forms::Label^  p2oates;

private: System::Windows::Forms::Label^  p2barley;

private: System::Windows::Forms::Label^  p2wheat;

private: System::Windows::Forms::Label^  p2sp;

private: System::Windows::Forms::Label^  p2lambs;

	private: System::Windows::Forms::Label^  label134;
private: System::Windows::Forms::Label^  p2ewes;
private: System::Windows::Forms::Label^  p2bc;


private: System::Windows::Forms::Label^  p2hc;

private: System::Windows::Forms::Label^  p2horses;

private: System::Windows::Forms::Label^  p2sows;

	private: System::Windows::Forms::Label^  label140;
	private: System::Windows::Forms::Label^  label141;
	private: System::Windows::Forms::Label^  label142;
	private: System::Windows::Forms::Label^  label143;
	private: System::Windows::Forms::Label^  label144;
	private: System::Windows::Forms::Label^  label145;
	private: System::Windows::Forms::Label^  label146;
	private: System::Windows::Forms::Label^  label147;
	private: System::Windows::Forms::Label^  label148;
	private: System::Windows::Forms::Label^  label149;
	private: System::Windows::Forms::Label^  label150;
	private: System::Windows::Forms::Label^  label151;
	private: System::Windows::Forms::Label^  label152;
	private: System::Windows::Forms::Label^  label153;
private: System::Windows::Forms::Label^  p2cows;

	private: System::Windows::Forms::Label^  label155;

private: System::Windows::Forms::Label^  label121;
private: System::Windows::Forms::Button^  dicebtn;

private: System::Windows::Forms::Button^  nextbtn;

private: System::Windows::Forms::Button^  resetbtn;
private: System::Windows::Forms::ComboBox^  dicevalue;

private: System::Windows::Forms::Label^  label156;
private: System::Windows::Forms::Label^  label157;
private: System::Windows::Forms::Label^  cnum;
private: System::Windows::Forms::Label^  farming;

private: System::Windows::Forms::CheckBox^  op1;
private: System::Windows::Forms::CheckBox^  op2;
private: System::Windows::Forms::CheckBox^  op3;
private: System::Windows::Forms::CheckBox^  op4;
private: System::Windows::Forms::CheckBox^  op5;
private: System::Windows::Forms::CheckBox^  op6;






private: System::Windows::Forms::Label^  pcb;
private: System::Windows::Forms::ProgressBar^  pbar;
private: System::Windows::Forms::RichTextBox^  cardbox;
private: System::Windows::Forms::RichTextBox^  output;
private: System::Windows::Forms::ComboBox^  pbox1;

private: System::Windows::Forms::Label^  label18;
private: System::Windows::Forms::Label^  label19;
private: System::Windows::Forms::TextBox^  p1box;
private: System::Windows::Forms::TextBox^  p3box;
private: System::Windows::Forms::TextBox^  p5box;
private: System::Windows::Forms::TextBox^  p4box;
private: System::Windows::Forms::TextBox^  p2box;
private: System::Windows::Forms::Button^  nextcard;
private: System::Windows::Forms::NumericUpDown^  opt1;
private: System::Windows::Forms::NumericUpDown^  opt2;
private: System::Windows::Forms::NumericUpDown^  opt3;
private: System::Windows::Forms::NumericUpDown^  opt6;




private: System::Windows::Forms::NumericUpDown^  opt5;

private: System::Windows::Forms::NumericUpDown^  opt4;
private: System::Windows::Forms::TextBox^  ctitle;
private: System::Windows::Forms::Label^  label21;
private: System::Windows::Forms::Label^  clicks;
private: System::Windows::Forms::Label^  lcard;













	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm1::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->p1cows = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->p1ley = (gcnew System::Windows::Forms::Label());
			this->p1pasture = (gcnew System::Windows::Forms::Label());
			this->p1hay = (gcnew System::Windows::Forms::Label());
			this->p1roots = (gcnew System::Windows::Forms::Label());
			this->p1potatoes = (gcnew System::Windows::Forms::Label());
			this->p1oates = (gcnew System::Windows::Forms::Label());
			this->p1barley = (gcnew System::Windows::Forms::Label());
			this->p1wheat = (gcnew System::Windows::Forms::Label());
			this->p1sp = (gcnew System::Windows::Forms::Label());
			this->p1lambs = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->p1ewes = (gcnew System::Windows::Forms::Label());
			this->p1bc = (gcnew System::Windows::Forms::Label());
			this->p1hc = (gcnew System::Windows::Forms::Label());
			this->p1horses = (gcnew System::Windows::Forms::Label());
			this->p1sows = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->p1money = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->p1box = (gcnew System::Windows::Forms::TextBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->p3box = (gcnew System::Windows::Forms::TextBox());
			this->p3money = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->p3ley = (gcnew System::Windows::Forms::Label());
			this->p3pasture = (gcnew System::Windows::Forms::Label());
			this->p3hay = (gcnew System::Windows::Forms::Label());
			this->p3roots = (gcnew System::Windows::Forms::Label());
			this->p3potatoes = (gcnew System::Windows::Forms::Label());
			this->p3oates = (gcnew System::Windows::Forms::Label());
			this->p3barley = (gcnew System::Windows::Forms::Label());
			this->p3wheat = (gcnew System::Windows::Forms::Label());
			this->p3sp = (gcnew System::Windows::Forms::Label());
			this->p3lambs = (gcnew System::Windows::Forms::Label());
			this->label31 = (gcnew System::Windows::Forms::Label());
			this->p3ewes = (gcnew System::Windows::Forms::Label());
			this->p3bc = (gcnew System::Windows::Forms::Label());
			this->p3hc = (gcnew System::Windows::Forms::Label());
			this->p3horses = (gcnew System::Windows::Forms::Label());
			this->p3sows = (gcnew System::Windows::Forms::Label());
			this->label37 = (gcnew System::Windows::Forms::Label());
			this->label38 = (gcnew System::Windows::Forms::Label());
			this->label39 = (gcnew System::Windows::Forms::Label());
			this->label40 = (gcnew System::Windows::Forms::Label());
			this->label41 = (gcnew System::Windows::Forms::Label());
			this->label42 = (gcnew System::Windows::Forms::Label());
			this->label43 = (gcnew System::Windows::Forms::Label());
			this->label44 = (gcnew System::Windows::Forms::Label());
			this->label45 = (gcnew System::Windows::Forms::Label());
			this->label46 = (gcnew System::Windows::Forms::Label());
			this->label47 = (gcnew System::Windows::Forms::Label());
			this->label48 = (gcnew System::Windows::Forms::Label());
			this->label49 = (gcnew System::Windows::Forms::Label());
			this->label50 = (gcnew System::Windows::Forms::Label());
			this->p3cows = (gcnew System::Windows::Forms::Label());
			this->label52 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->p5box = (gcnew System::Windows::Forms::TextBox());
			this->p5money = (gcnew System::Windows::Forms::Label());
			this->label54 = (gcnew System::Windows::Forms::Label());
			this->p5ley = (gcnew System::Windows::Forms::Label());
			this->p5pasture = (gcnew System::Windows::Forms::Label());
			this->p5hay = (gcnew System::Windows::Forms::Label());
			this->p5roots = (gcnew System::Windows::Forms::Label());
			this->p5potatoes = (gcnew System::Windows::Forms::Label());
			this->p5oates = (gcnew System::Windows::Forms::Label());
			this->p5barley = (gcnew System::Windows::Forms::Label());
			this->p5wheat = (gcnew System::Windows::Forms::Label());
			this->p5sp = (gcnew System::Windows::Forms::Label());
			this->p5lambs = (gcnew System::Windows::Forms::Label());
			this->label65 = (gcnew System::Windows::Forms::Label());
			this->p5ewes = (gcnew System::Windows::Forms::Label());
			this->p5bc = (gcnew System::Windows::Forms::Label());
			this->p5hc = (gcnew System::Windows::Forms::Label());
			this->p5horses = (gcnew System::Windows::Forms::Label());
			this->p5sows = (gcnew System::Windows::Forms::Label());
			this->label71 = (gcnew System::Windows::Forms::Label());
			this->label72 = (gcnew System::Windows::Forms::Label());
			this->label73 = (gcnew System::Windows::Forms::Label());
			this->label74 = (gcnew System::Windows::Forms::Label());
			this->label75 = (gcnew System::Windows::Forms::Label());
			this->label76 = (gcnew System::Windows::Forms::Label());
			this->label77 = (gcnew System::Windows::Forms::Label());
			this->label78 = (gcnew System::Windows::Forms::Label());
			this->label79 = (gcnew System::Windows::Forms::Label());
			this->label80 = (gcnew System::Windows::Forms::Label());
			this->label81 = (gcnew System::Windows::Forms::Label());
			this->label82 = (gcnew System::Windows::Forms::Label());
			this->label83 = (gcnew System::Windows::Forms::Label());
			this->label84 = (gcnew System::Windows::Forms::Label());
			this->p5cows = (gcnew System::Windows::Forms::Label());
			this->label86 = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->p4box = (gcnew System::Windows::Forms::TextBox());
			this->p4money = (gcnew System::Windows::Forms::Label());
			this->label88 = (gcnew System::Windows::Forms::Label());
			this->p4ley = (gcnew System::Windows::Forms::Label());
			this->p4pasture = (gcnew System::Windows::Forms::Label());
			this->p4hay = (gcnew System::Windows::Forms::Label());
			this->p4roots = (gcnew System::Windows::Forms::Label());
			this->p4potatoes = (gcnew System::Windows::Forms::Label());
			this->p4oates = (gcnew System::Windows::Forms::Label());
			this->p4barley = (gcnew System::Windows::Forms::Label());
			this->p4wheat = (gcnew System::Windows::Forms::Label());
			this->p4sp = (gcnew System::Windows::Forms::Label());
			this->p4lambs = (gcnew System::Windows::Forms::Label());
			this->label99 = (gcnew System::Windows::Forms::Label());
			this->p4ewes = (gcnew System::Windows::Forms::Label());
			this->p4bc = (gcnew System::Windows::Forms::Label());
			this->p4hc = (gcnew System::Windows::Forms::Label());
			this->p4horses = (gcnew System::Windows::Forms::Label());
			this->p4sows = (gcnew System::Windows::Forms::Label());
			this->label105 = (gcnew System::Windows::Forms::Label());
			this->label106 = (gcnew System::Windows::Forms::Label());
			this->label107 = (gcnew System::Windows::Forms::Label());
			this->label108 = (gcnew System::Windows::Forms::Label());
			this->label109 = (gcnew System::Windows::Forms::Label());
			this->label110 = (gcnew System::Windows::Forms::Label());
			this->label111 = (gcnew System::Windows::Forms::Label());
			this->label112 = (gcnew System::Windows::Forms::Label());
			this->label113 = (gcnew System::Windows::Forms::Label());
			this->label114 = (gcnew System::Windows::Forms::Label());
			this->label115 = (gcnew System::Windows::Forms::Label());
			this->label116 = (gcnew System::Windows::Forms::Label());
			this->label117 = (gcnew System::Windows::Forms::Label());
			this->label118 = (gcnew System::Windows::Forms::Label());
			this->p4cows = (gcnew System::Windows::Forms::Label());
			this->label120 = (gcnew System::Windows::Forms::Label());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->p2box = (gcnew System::Windows::Forms::TextBox());
			this->p2money = (gcnew System::Windows::Forms::Label());
			this->label123 = (gcnew System::Windows::Forms::Label());
			this->p2ley = (gcnew System::Windows::Forms::Label());
			this->p2pasture = (gcnew System::Windows::Forms::Label());
			this->p2hay = (gcnew System::Windows::Forms::Label());
			this->p2roots = (gcnew System::Windows::Forms::Label());
			this->p2potatoes = (gcnew System::Windows::Forms::Label());
			this->p2oates = (gcnew System::Windows::Forms::Label());
			this->p2barley = (gcnew System::Windows::Forms::Label());
			this->p2wheat = (gcnew System::Windows::Forms::Label());
			this->p2sp = (gcnew System::Windows::Forms::Label());
			this->p2lambs = (gcnew System::Windows::Forms::Label());
			this->label134 = (gcnew System::Windows::Forms::Label());
			this->p2ewes = (gcnew System::Windows::Forms::Label());
			this->p2bc = (gcnew System::Windows::Forms::Label());
			this->p2hc = (gcnew System::Windows::Forms::Label());
			this->p2horses = (gcnew System::Windows::Forms::Label());
			this->p2sows = (gcnew System::Windows::Forms::Label());
			this->label140 = (gcnew System::Windows::Forms::Label());
			this->label141 = (gcnew System::Windows::Forms::Label());
			this->label142 = (gcnew System::Windows::Forms::Label());
			this->label143 = (gcnew System::Windows::Forms::Label());
			this->label144 = (gcnew System::Windows::Forms::Label());
			this->label145 = (gcnew System::Windows::Forms::Label());
			this->label146 = (gcnew System::Windows::Forms::Label());
			this->label147 = (gcnew System::Windows::Forms::Label());
			this->label148 = (gcnew System::Windows::Forms::Label());
			this->label149 = (gcnew System::Windows::Forms::Label());
			this->label150 = (gcnew System::Windows::Forms::Label());
			this->label151 = (gcnew System::Windows::Forms::Label());
			this->label152 = (gcnew System::Windows::Forms::Label());
			this->label153 = (gcnew System::Windows::Forms::Label());
			this->p2cows = (gcnew System::Windows::Forms::Label());
			this->label155 = (gcnew System::Windows::Forms::Label());
			this->label121 = (gcnew System::Windows::Forms::Label());
			this->dicebtn = (gcnew System::Windows::Forms::Button());
			this->nextbtn = (gcnew System::Windows::Forms::Button());
			this->resetbtn = (gcnew System::Windows::Forms::Button());
			this->dicevalue = (gcnew System::Windows::Forms::ComboBox());
			this->label156 = (gcnew System::Windows::Forms::Label());
			this->label157 = (gcnew System::Windows::Forms::Label());
			this->cnum = (gcnew System::Windows::Forms::Label());
			this->farming = (gcnew System::Windows::Forms::Label());
			this->op1 = (gcnew System::Windows::Forms::CheckBox());
			this->op2 = (gcnew System::Windows::Forms::CheckBox());
			this->op3 = (gcnew System::Windows::Forms::CheckBox());
			this->op4 = (gcnew System::Windows::Forms::CheckBox());
			this->op5 = (gcnew System::Windows::Forms::CheckBox());
			this->op6 = (gcnew System::Windows::Forms::CheckBox());
			this->pcb = (gcnew System::Windows::Forms::Label());
			this->pbar = (gcnew System::Windows::Forms::ProgressBar());
			this->cardbox = (gcnew System::Windows::Forms::RichTextBox());
			this->output = (gcnew System::Windows::Forms::RichTextBox());
			this->pbox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->nextcard = (gcnew System::Windows::Forms::Button());
			this->opt1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->opt2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->opt3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->opt6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->opt5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->opt4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->ctitle = (gcnew System::Windows::Forms::TextBox());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->clicks = (gcnew System::Windows::Forms::Label());
			this->lcard = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt4))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(180, 12);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(620, 100);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(44, 22);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(36, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Cows:";
			// 
			// p1cows
			// 
			this->p1cows->AutoSize = true;
			this->p1cows->Location = System::Drawing::Point(84, 24);
			this->p1cows->Name = L"p1cows";
			this->p1cows->Size = System::Drawing::Size(13, 13);
			this->p1cows->TabIndex = 3;
			this->p1cows->Text = L"0";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->ForeColor = System::Drawing::Color::Red;
			this->label2->Location = System::Drawing::Point(44, 35);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(36, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Ewes:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ForeColor = System::Drawing::Color::Red;
			this->label4->Location = System::Drawing::Point(37, 63);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(43, 13);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Horses:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(7, 76);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(73, 13);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Heifer Cavles:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->ForeColor = System::Drawing::Color::Blue;
			this->label6->Location = System::Drawing::Point(18, 89);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(62, 13);
			this->label6->TabIndex = 7;
			this->label6->Text = L"Bull Calves:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->ForeColor = System::Drawing::Color::Blue;
			this->label7->Location = System::Drawing::Point(37, 102);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(41, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Lambs:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->ForeColor = System::Drawing::Color::Blue;
			this->label8->Location = System::Drawing::Point(18, 115);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(58, 13);
			this->label8->TabIndex = 9;
			this->label8->Text = L"Store Pigs:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->ForeColor = System::Drawing::Color::Green;
			this->label9->Location = System::Drawing::Point(113, 24);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(42, 13);
			this->label9->TabIndex = 17;
			this->label9->Text = L"Wheat:";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->ForeColor = System::Drawing::Color::Green;
			this->label10->Location = System::Drawing::Point(116, 37);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(39, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Barley:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->ForeColor = System::Drawing::Color::Green;
			this->label11->Location = System::Drawing::Point(117, 50);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(38, 13);
			this->label11->TabIndex = 15;
			this->label11->Text = L"Oates:";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->ForeColor = System::Drawing::Color::Green;
			this->label12->Location = System::Drawing::Point(103, 63);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(52, 13);
			this->label12->TabIndex = 14;
			this->label12->Text = L"Potatoes:";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->ForeColor = System::Drawing::Color::Magenta;
			this->label13->Location = System::Drawing::Point(117, 76);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(38, 13);
			this->label13->TabIndex = 13;
			this->label13->Text = L"Roots:";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->ForeColor = System::Drawing::Color::Magenta;
			this->label14->Location = System::Drawing::Point(126, 89);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(29, 13);
			this->label14->TabIndex = 12;
			this->label14->Text = L"Hay:";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->ForeColor = System::Drawing::Color::Magenta;
			this->label15->Location = System::Drawing::Point(109, 102);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(46, 13);
			this->label15->TabIndex = 11;
			this->label15->Text = L"Pasture:";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->ForeColor = System::Drawing::Color::Magenta;
			this->label16->Location = System::Drawing::Point(128, 115);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(27, 13);
			this->label16->TabIndex = 10;
			this->label16->Text = L"Ley:";
			// 
			// p1ley
			// 
			this->p1ley->AutoSize = true;
			this->p1ley->Location = System::Drawing::Point(161, 115);
			this->p1ley->Name = L"p1ley";
			this->p1ley->Size = System::Drawing::Size(13, 13);
			this->p1ley->TabIndex = 33;
			this->p1ley->Text = L"0";
			// 
			// p1pasture
			// 
			this->p1pasture->AutoSize = true;
			this->p1pasture->Location = System::Drawing::Point(161, 102);
			this->p1pasture->Name = L"p1pasture";
			this->p1pasture->Size = System::Drawing::Size(13, 13);
			this->p1pasture->TabIndex = 32;
			this->p1pasture->Text = L"0";
			// 
			// p1hay
			// 
			this->p1hay->AutoSize = true;
			this->p1hay->Location = System::Drawing::Point(161, 89);
			this->p1hay->Name = L"p1hay";
			this->p1hay->Size = System::Drawing::Size(13, 13);
			this->p1hay->TabIndex = 31;
			this->p1hay->Text = L"0";
			// 
			// p1roots
			// 
			this->p1roots->AutoSize = true;
			this->p1roots->Location = System::Drawing::Point(161, 76);
			this->p1roots->Name = L"p1roots";
			this->p1roots->Size = System::Drawing::Size(13, 13);
			this->p1roots->TabIndex = 30;
			this->p1roots->Text = L"0";
			// 
			// p1potatoes
			// 
			this->p1potatoes->AutoSize = true;
			this->p1potatoes->Location = System::Drawing::Point(161, 63);
			this->p1potatoes->Name = L"p1potatoes";
			this->p1potatoes->Size = System::Drawing::Size(13, 13);
			this->p1potatoes->TabIndex = 29;
			this->p1potatoes->Text = L"0";
			// 
			// p1oates
			// 
			this->p1oates->AutoSize = true;
			this->p1oates->Location = System::Drawing::Point(161, 50);
			this->p1oates->Name = L"p1oates";
			this->p1oates->Size = System::Drawing::Size(13, 13);
			this->p1oates->TabIndex = 28;
			this->p1oates->Text = L"0";
			// 
			// p1barley
			// 
			this->p1barley->AutoSize = true;
			this->p1barley->Location = System::Drawing::Point(161, 37);
			this->p1barley->Name = L"p1barley";
			this->p1barley->Size = System::Drawing::Size(13, 13);
			this->p1barley->TabIndex = 27;
			this->p1barley->Text = L"0";
			// 
			// p1wheat
			// 
			this->p1wheat->AutoSize = true;
			this->p1wheat->Location = System::Drawing::Point(161, 24);
			this->p1wheat->Name = L"p1wheat";
			this->p1wheat->Size = System::Drawing::Size(13, 13);
			this->p1wheat->TabIndex = 26;
			this->p1wheat->Text = L"0";
			// 
			// p1sp
			// 
			this->p1sp->AutoSize = true;
			this->p1sp->Location = System::Drawing::Point(84, 115);
			this->p1sp->Name = L"p1sp";
			this->p1sp->Size = System::Drawing::Size(13, 13);
			this->p1sp->TabIndex = 25;
			this->p1sp->Text = L"0";
			// 
			// p1lambs
			// 
			this->p1lambs->AutoSize = true;
			this->p1lambs->Location = System::Drawing::Point(84, 102);
			this->p1lambs->Name = L"p1lambs";
			this->p1lambs->Size = System::Drawing::Size(13, 13);
			this->p1lambs->TabIndex = 24;
			this->p1lambs->Text = L"0";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->ForeColor = System::Drawing::Color::Red;
			this->label3->Location = System::Drawing::Point(44, 50);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(36, 13);
			this->label3->TabIndex = 23;
			this->label3->Text = L"Sows:";
			// 
			// p1ewes
			// 
			this->p1ewes->AutoSize = true;
			this->p1ewes->Location = System::Drawing::Point(84, 37);
			this->p1ewes->Name = L"p1ewes";
			this->p1ewes->Size = System::Drawing::Size(13, 13);
			this->p1ewes->TabIndex = 22;
			this->p1ewes->Text = L"0";
			// 
			// p1bc
			// 
			this->p1bc->AutoSize = true;
			this->p1bc->Location = System::Drawing::Point(84, 89);
			this->p1bc->Name = L"p1bc";
			this->p1bc->Size = System::Drawing::Size(13, 13);
			this->p1bc->TabIndex = 21;
			this->p1bc->Text = L"0";
			// 
			// p1hc
			// 
			this->p1hc->AutoSize = true;
			this->p1hc->Location = System::Drawing::Point(84, 76);
			this->p1hc->Name = L"p1hc";
			this->p1hc->Size = System::Drawing::Size(13, 13);
			this->p1hc->TabIndex = 20;
			this->p1hc->Text = L"0";
			// 
			// p1horses
			// 
			this->p1horses->AutoSize = true;
			this->p1horses->Location = System::Drawing::Point(84, 63);
			this->p1horses->Name = L"p1horses";
			this->p1horses->Size = System::Drawing::Size(13, 13);
			this->p1horses->TabIndex = 19;
			this->p1horses->Text = L"0";
			// 
			// p1sows
			// 
			this->p1sows->AutoSize = true;
			this->p1sows->Location = System::Drawing::Point(84, 50);
			this->p1sows->Name = L"p1sows";
			this->p1sows->Size = System::Drawing::Size(13, 13);
			this->p1sows->TabIndex = 18;
			this->p1sows->Text = L"0";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Location = System::Drawing::Point(103, 9);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(51, 13);
			this->label17->TabIndex = 34;
			this->label17->Text = L"Money: £";
			// 
			// p1money
			// 
			this->p1money->AutoSize = true;
			this->p1money->Location = System::Drawing::Point(160, 9);
			this->p1money->Name = L"p1money";
			this->p1money->Size = System::Drawing::Size(31, 13);
			this->p1money->TabIndex = 35;
			this->p1money->Text = L"1500";
			// 
			// panel1
			// 
			this->panel1->AutoSize = true;
			this->panel1->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel1->Controls->Add(this->p1box);
			this->panel1->Controls->Add(this->p1money);
			this->panel1->Controls->Add(this->label17);
			this->panel1->Controls->Add(this->p1ley);
			this->panel1->Controls->Add(this->p1pasture);
			this->panel1->Controls->Add(this->p1hay);
			this->panel1->Controls->Add(this->p1roots);
			this->panel1->Controls->Add(this->p1potatoes);
			this->panel1->Controls->Add(this->p1oates);
			this->panel1->Controls->Add(this->p1barley);
			this->panel1->Controls->Add(this->p1wheat);
			this->panel1->Controls->Add(this->p1sp);
			this->panel1->Controls->Add(this->p1lambs);
			this->panel1->Controls->Add(this->label3);
			this->panel1->Controls->Add(this->p1ewes);
			this->panel1->Controls->Add(this->p1bc);
			this->panel1->Controls->Add(this->p1hc);
			this->panel1->Controls->Add(this->p1horses);
			this->panel1->Controls->Add(this->p1sows);
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->label10);
			this->panel1->Controls->Add(this->label11);
			this->panel1->Controls->Add(this->label12);
			this->panel1->Controls->Add(this->label13);
			this->panel1->Controls->Add(this->label14);
			this->panel1->Controls->Add(this->label15);
			this->panel1->Controls->Add(this->label16);
			this->panel1->Controls->Add(this->label8);
			this->panel1->Controls->Add(this->label7);
			this->panel1->Controls->Add(this->label6);
			this->panel1->Controls->Add(this->label5);
			this->panel1->Controls->Add(this->label4);
			this->panel1->Controls->Add(this->label2);
			this->panel1->Controls->Add(this->p1cows);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Location = System::Drawing::Point(12, 118);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(196, 130);
			this->panel1->TabIndex = 36;
			// 
			// p1box
			// 
			this->p1box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p1box->Location = System::Drawing::Point(-1, -3);
			this->p1box->Name = L"p1box";
			this->p1box->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->p1box->Size = System::Drawing::Size(98, 26);
			this->p1box->TabIndex = 67;
			this->p1box->Text = L"Player 1";
			// 
			// panel2
			// 
			this->panel2->AutoSize = true;
			this->panel2->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel2->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel2->Controls->Add(this->p3box);
			this->panel2->Controls->Add(this->p3money);
			this->panel2->Controls->Add(this->label20);
			this->panel2->Controls->Add(this->p3ley);
			this->panel2->Controls->Add(this->p3pasture);
			this->panel2->Controls->Add(this->p3hay);
			this->panel2->Controls->Add(this->p3roots);
			this->panel2->Controls->Add(this->p3potatoes);
			this->panel2->Controls->Add(this->p3oates);
			this->panel2->Controls->Add(this->p3barley);
			this->panel2->Controls->Add(this->p3wheat);
			this->panel2->Controls->Add(this->p3sp);
			this->panel2->Controls->Add(this->p3lambs);
			this->panel2->Controls->Add(this->label31);
			this->panel2->Controls->Add(this->p3ewes);
			this->panel2->Controls->Add(this->p3bc);
			this->panel2->Controls->Add(this->p3hc);
			this->panel2->Controls->Add(this->p3horses);
			this->panel2->Controls->Add(this->p3sows);
			this->panel2->Controls->Add(this->label37);
			this->panel2->Controls->Add(this->label38);
			this->panel2->Controls->Add(this->label39);
			this->panel2->Controls->Add(this->label40);
			this->panel2->Controls->Add(this->label41);
			this->panel2->Controls->Add(this->label42);
			this->panel2->Controls->Add(this->label43);
			this->panel2->Controls->Add(this->label44);
			this->panel2->Controls->Add(this->label45);
			this->panel2->Controls->Add(this->label46);
			this->panel2->Controls->Add(this->label47);
			this->panel2->Controls->Add(this->label48);
			this->panel2->Controls->Add(this->label49);
			this->panel2->Controls->Add(this->label50);
			this->panel2->Controls->Add(this->p3cows);
			this->panel2->Controls->Add(this->label52);
			this->panel2->Location = System::Drawing::Point(12, 252);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(196, 130);
			this->panel2->TabIndex = 37;
			// 
			// p3box
			// 
			this->p3box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p3box->Location = System::Drawing::Point(-1, -3);
			this->p3box->Name = L"p3box";
			this->p3box->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->p3box->Size = System::Drawing::Size(98, 26);
			this->p3box->TabIndex = 68;
			this->p3box->Text = L"Player 3";
			// 
			// p3money
			// 
			this->p3money->AutoSize = true;
			this->p3money->Location = System::Drawing::Point(160, 9);
			this->p3money->Name = L"p3money";
			this->p3money->Size = System::Drawing::Size(31, 13);
			this->p3money->TabIndex = 35;
			this->p3money->Text = L"1500";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Location = System::Drawing::Point(103, 9);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(51, 13);
			this->label20->TabIndex = 34;
			this->label20->Text = L"Money: £";
			// 
			// p3ley
			// 
			this->p3ley->AutoSize = true;
			this->p3ley->Location = System::Drawing::Point(161, 115);
			this->p3ley->Name = L"p3ley";
			this->p3ley->Size = System::Drawing::Size(13, 13);
			this->p3ley->TabIndex = 33;
			this->p3ley->Text = L"0";
			// 
			// p3pasture
			// 
			this->p3pasture->AutoSize = true;
			this->p3pasture->Location = System::Drawing::Point(161, 102);
			this->p3pasture->Name = L"p3pasture";
			this->p3pasture->Size = System::Drawing::Size(13, 13);
			this->p3pasture->TabIndex = 32;
			this->p3pasture->Text = L"0";
			// 
			// p3hay
			// 
			this->p3hay->AutoSize = true;
			this->p3hay->Location = System::Drawing::Point(161, 89);
			this->p3hay->Name = L"p3hay";
			this->p3hay->Size = System::Drawing::Size(13, 13);
			this->p3hay->TabIndex = 31;
			this->p3hay->Text = L"0";
			// 
			// p3roots
			// 
			this->p3roots->AutoSize = true;
			this->p3roots->Location = System::Drawing::Point(161, 76);
			this->p3roots->Name = L"p3roots";
			this->p3roots->Size = System::Drawing::Size(13, 13);
			this->p3roots->TabIndex = 30;
			this->p3roots->Text = L"0";
			// 
			// p3potatoes
			// 
			this->p3potatoes->AutoSize = true;
			this->p3potatoes->Location = System::Drawing::Point(161, 63);
			this->p3potatoes->Name = L"p3potatoes";
			this->p3potatoes->Size = System::Drawing::Size(13, 13);
			this->p3potatoes->TabIndex = 29;
			this->p3potatoes->Text = L"0";
			// 
			// p3oates
			// 
			this->p3oates->AutoSize = true;
			this->p3oates->Location = System::Drawing::Point(161, 50);
			this->p3oates->Name = L"p3oates";
			this->p3oates->Size = System::Drawing::Size(13, 13);
			this->p3oates->TabIndex = 28;
			this->p3oates->Text = L"0";
			// 
			// p3barley
			// 
			this->p3barley->AutoSize = true;
			this->p3barley->Location = System::Drawing::Point(161, 37);
			this->p3barley->Name = L"p3barley";
			this->p3barley->Size = System::Drawing::Size(13, 13);
			this->p3barley->TabIndex = 27;
			this->p3barley->Text = L"0";
			// 
			// p3wheat
			// 
			this->p3wheat->AutoSize = true;
			this->p3wheat->Location = System::Drawing::Point(161, 24);
			this->p3wheat->Name = L"p3wheat";
			this->p3wheat->Size = System::Drawing::Size(13, 13);
			this->p3wheat->TabIndex = 26;
			this->p3wheat->Text = L"0";
			// 
			// p3sp
			// 
			this->p3sp->AutoSize = true;
			this->p3sp->Location = System::Drawing::Point(84, 115);
			this->p3sp->Name = L"p3sp";
			this->p3sp->Size = System::Drawing::Size(13, 13);
			this->p3sp->TabIndex = 25;
			this->p3sp->Text = L"0";
			// 
			// p3lambs
			// 
			this->p3lambs->AutoSize = true;
			this->p3lambs->Location = System::Drawing::Point(84, 102);
			this->p3lambs->Name = L"p3lambs";
			this->p3lambs->Size = System::Drawing::Size(13, 13);
			this->p3lambs->TabIndex = 24;
			this->p3lambs->Text = L"0";
			// 
			// label31
			// 
			this->label31->AutoSize = true;
			this->label31->ForeColor = System::Drawing::Color::Red;
			this->label31->Location = System::Drawing::Point(44, 50);
			this->label31->Name = L"label31";
			this->label31->Size = System::Drawing::Size(36, 13);
			this->label31->TabIndex = 23;
			this->label31->Text = L"Sows:";
			// 
			// p3ewes
			// 
			this->p3ewes->AutoSize = true;
			this->p3ewes->Location = System::Drawing::Point(84, 37);
			this->p3ewes->Name = L"p3ewes";
			this->p3ewes->Size = System::Drawing::Size(13, 13);
			this->p3ewes->TabIndex = 22;
			this->p3ewes->Text = L"0";
			// 
			// p3bc
			// 
			this->p3bc->AutoSize = true;
			this->p3bc->Location = System::Drawing::Point(84, 89);
			this->p3bc->Name = L"p3bc";
			this->p3bc->Size = System::Drawing::Size(13, 13);
			this->p3bc->TabIndex = 21;
			this->p3bc->Text = L"0";
			// 
			// p3hc
			// 
			this->p3hc->AutoSize = true;
			this->p3hc->Location = System::Drawing::Point(84, 76);
			this->p3hc->Name = L"p3hc";
			this->p3hc->Size = System::Drawing::Size(13, 13);
			this->p3hc->TabIndex = 20;
			this->p3hc->Text = L"0";
			// 
			// p3horses
			// 
			this->p3horses->AutoSize = true;
			this->p3horses->Location = System::Drawing::Point(84, 63);
			this->p3horses->Name = L"p3horses";
			this->p3horses->Size = System::Drawing::Size(13, 13);
			this->p3horses->TabIndex = 19;
			this->p3horses->Text = L"0";
			// 
			// p3sows
			// 
			this->p3sows->AutoSize = true;
			this->p3sows->Location = System::Drawing::Point(84, 50);
			this->p3sows->Name = L"p3sows";
			this->p3sows->Size = System::Drawing::Size(13, 13);
			this->p3sows->TabIndex = 18;
			this->p3sows->Text = L"0";
			// 
			// label37
			// 
			this->label37->AutoSize = true;
			this->label37->ForeColor = System::Drawing::Color::Green;
			this->label37->Location = System::Drawing::Point(113, 24);
			this->label37->Name = L"label37";
			this->label37->Size = System::Drawing::Size(42, 13);
			this->label37->TabIndex = 17;
			this->label37->Text = L"Wheat:";
			// 
			// label38
			// 
			this->label38->AutoSize = true;
			this->label38->ForeColor = System::Drawing::Color::Green;
			this->label38->Location = System::Drawing::Point(116, 37);
			this->label38->Name = L"label38";
			this->label38->Size = System::Drawing::Size(39, 13);
			this->label38->TabIndex = 16;
			this->label38->Text = L"Barley:";
			// 
			// label39
			// 
			this->label39->AutoSize = true;
			this->label39->ForeColor = System::Drawing::Color::Green;
			this->label39->Location = System::Drawing::Point(117, 50);
			this->label39->Name = L"label39";
			this->label39->Size = System::Drawing::Size(38, 13);
			this->label39->TabIndex = 15;
			this->label39->Text = L"Oates:";
			// 
			// label40
			// 
			this->label40->AutoSize = true;
			this->label40->ForeColor = System::Drawing::Color::Green;
			this->label40->Location = System::Drawing::Point(103, 63);
			this->label40->Name = L"label40";
			this->label40->Size = System::Drawing::Size(52, 13);
			this->label40->TabIndex = 14;
			this->label40->Text = L"Potatoes:";
			// 
			// label41
			// 
			this->label41->AutoSize = true;
			this->label41->ForeColor = System::Drawing::Color::Magenta;
			this->label41->Location = System::Drawing::Point(117, 76);
			this->label41->Name = L"label41";
			this->label41->Size = System::Drawing::Size(38, 13);
			this->label41->TabIndex = 13;
			this->label41->Text = L"Roots:";
			// 
			// label42
			// 
			this->label42->AutoSize = true;
			this->label42->ForeColor = System::Drawing::Color::Magenta;
			this->label42->Location = System::Drawing::Point(126, 89);
			this->label42->Name = L"label42";
			this->label42->Size = System::Drawing::Size(29, 13);
			this->label42->TabIndex = 12;
			this->label42->Text = L"Hay:";
			// 
			// label43
			// 
			this->label43->AutoSize = true;
			this->label43->ForeColor = System::Drawing::Color::Magenta;
			this->label43->Location = System::Drawing::Point(109, 102);
			this->label43->Name = L"label43";
			this->label43->Size = System::Drawing::Size(46, 13);
			this->label43->TabIndex = 11;
			this->label43->Text = L"Pasture:";
			// 
			// label44
			// 
			this->label44->AutoSize = true;
			this->label44->ForeColor = System::Drawing::Color::Magenta;
			this->label44->Location = System::Drawing::Point(128, 115);
			this->label44->Name = L"label44";
			this->label44->Size = System::Drawing::Size(27, 13);
			this->label44->TabIndex = 10;
			this->label44->Text = L"Ley:";
			// 
			// label45
			// 
			this->label45->AutoSize = true;
			this->label45->ForeColor = System::Drawing::Color::Blue;
			this->label45->Location = System::Drawing::Point(18, 115);
			this->label45->Name = L"label45";
			this->label45->Size = System::Drawing::Size(58, 13);
			this->label45->TabIndex = 9;
			this->label45->Text = L"Store Pigs:";
			// 
			// label46
			// 
			this->label46->AutoSize = true;
			this->label46->ForeColor = System::Drawing::Color::Blue;
			this->label46->Location = System::Drawing::Point(37, 102);
			this->label46->Name = L"label46";
			this->label46->Size = System::Drawing::Size(41, 13);
			this->label46->TabIndex = 8;
			this->label46->Text = L"Lambs:";
			// 
			// label47
			// 
			this->label47->AutoSize = true;
			this->label47->ForeColor = System::Drawing::Color::Blue;
			this->label47->Location = System::Drawing::Point(18, 89);
			this->label47->Name = L"label47";
			this->label47->Size = System::Drawing::Size(62, 13);
			this->label47->TabIndex = 7;
			this->label47->Text = L"Bull Calves:";
			// 
			// label48
			// 
			this->label48->AutoSize = true;
			this->label48->ForeColor = System::Drawing::Color::Blue;
			this->label48->Location = System::Drawing::Point(7, 76);
			this->label48->Name = L"label48";
			this->label48->Size = System::Drawing::Size(73, 13);
			this->label48->TabIndex = 6;
			this->label48->Text = L"Heifer Cavles:";
			// 
			// label49
			// 
			this->label49->AutoSize = true;
			this->label49->ForeColor = System::Drawing::Color::Red;
			this->label49->Location = System::Drawing::Point(37, 63);
			this->label49->Name = L"label49";
			this->label49->Size = System::Drawing::Size(43, 13);
			this->label49->TabIndex = 5;
			this->label49->Text = L"Horses:";
			// 
			// label50
			// 
			this->label50->AutoSize = true;
			this->label50->ForeColor = System::Drawing::Color::Red;
			this->label50->Location = System::Drawing::Point(44, 35);
			this->label50->Name = L"label50";
			this->label50->Size = System::Drawing::Size(36, 13);
			this->label50->TabIndex = 4;
			this->label50->Text = L"Ewes:";
			// 
			// p3cows
			// 
			this->p3cows->AutoSize = true;
			this->p3cows->Location = System::Drawing::Point(84, 24);
			this->p3cows->Name = L"p3cows";
			this->p3cows->Size = System::Drawing::Size(13, 13);
			this->p3cows->TabIndex = 3;
			this->p3cows->Text = L"0";
			// 
			// label52
			// 
			this->label52->AutoSize = true;
			this->label52->ForeColor = System::Drawing::Color::Red;
			this->label52->Location = System::Drawing::Point(44, 22);
			this->label52->Name = L"label52";
			this->label52->Size = System::Drawing::Size(36, 13);
			this->label52->TabIndex = 2;
			this->label52->Text = L"Cows:";
			// 
			// panel3
			// 
			this->panel3->AutoSize = true;
			this->panel3->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel3->Controls->Add(this->p5box);
			this->panel3->Controls->Add(this->p5money);
			this->panel3->Controls->Add(this->label54);
			this->panel3->Controls->Add(this->p5ley);
			this->panel3->Controls->Add(this->p5pasture);
			this->panel3->Controls->Add(this->p5hay);
			this->panel3->Controls->Add(this->p5roots);
			this->panel3->Controls->Add(this->p5potatoes);
			this->panel3->Controls->Add(this->p5oates);
			this->panel3->Controls->Add(this->p5barley);
			this->panel3->Controls->Add(this->p5wheat);
			this->panel3->Controls->Add(this->p5sp);
			this->panel3->Controls->Add(this->p5lambs);
			this->panel3->Controls->Add(this->label65);
			this->panel3->Controls->Add(this->p5ewes);
			this->panel3->Controls->Add(this->p5bc);
			this->panel3->Controls->Add(this->p5hc);
			this->panel3->Controls->Add(this->p5horses);
			this->panel3->Controls->Add(this->p5sows);
			this->panel3->Controls->Add(this->label71);
			this->panel3->Controls->Add(this->label72);
			this->panel3->Controls->Add(this->label73);
			this->panel3->Controls->Add(this->label74);
			this->panel3->Controls->Add(this->label75);
			this->panel3->Controls->Add(this->label76);
			this->panel3->Controls->Add(this->label77);
			this->panel3->Controls->Add(this->label78);
			this->panel3->Controls->Add(this->label79);
			this->panel3->Controls->Add(this->label80);
			this->panel3->Controls->Add(this->label81);
			this->panel3->Controls->Add(this->label82);
			this->panel3->Controls->Add(this->label83);
			this->panel3->Controls->Add(this->label84);
			this->panel3->Controls->Add(this->p5cows);
			this->panel3->Controls->Add(this->label86);
			this->panel3->Location = System::Drawing::Point(12, 386);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(196, 130);
			this->panel3->TabIndex = 38;
			// 
			// p5box
			// 
			this->p5box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p5box->Location = System::Drawing::Point(-1, -3);
			this->p5box->Name = L"p5box";
			this->p5box->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->p5box->Size = System::Drawing::Size(98, 26);
			this->p5box->TabIndex = 69;
			this->p5box->Text = L"Player 5";
			// 
			// p5money
			// 
			this->p5money->AutoSize = true;
			this->p5money->Location = System::Drawing::Point(160, 9);
			this->p5money->Name = L"p5money";
			this->p5money->Size = System::Drawing::Size(31, 13);
			this->p5money->TabIndex = 35;
			this->p5money->Text = L"1500";
			// 
			// label54
			// 
			this->label54->AutoSize = true;
			this->label54->Location = System::Drawing::Point(103, 9);
			this->label54->Name = L"label54";
			this->label54->Size = System::Drawing::Size(51, 13);
			this->label54->TabIndex = 34;
			this->label54->Text = L"Money: £";
			// 
			// p5ley
			// 
			this->p5ley->AutoSize = true;
			this->p5ley->Location = System::Drawing::Point(161, 115);
			this->p5ley->Name = L"p5ley";
			this->p5ley->Size = System::Drawing::Size(13, 13);
			this->p5ley->TabIndex = 33;
			this->p5ley->Text = L"0";
			// 
			// p5pasture
			// 
			this->p5pasture->AutoSize = true;
			this->p5pasture->Location = System::Drawing::Point(161, 102);
			this->p5pasture->Name = L"p5pasture";
			this->p5pasture->Size = System::Drawing::Size(13, 13);
			this->p5pasture->TabIndex = 32;
			this->p5pasture->Text = L"0";
			// 
			// p5hay
			// 
			this->p5hay->AutoSize = true;
			this->p5hay->Location = System::Drawing::Point(161, 89);
			this->p5hay->Name = L"p5hay";
			this->p5hay->Size = System::Drawing::Size(13, 13);
			this->p5hay->TabIndex = 31;
			this->p5hay->Text = L"0";
			// 
			// p5roots
			// 
			this->p5roots->AutoSize = true;
			this->p5roots->Location = System::Drawing::Point(161, 76);
			this->p5roots->Name = L"p5roots";
			this->p5roots->Size = System::Drawing::Size(13, 13);
			this->p5roots->TabIndex = 30;
			this->p5roots->Text = L"0";
			// 
			// p5potatoes
			// 
			this->p5potatoes->AutoSize = true;
			this->p5potatoes->Location = System::Drawing::Point(161, 63);
			this->p5potatoes->Name = L"p5potatoes";
			this->p5potatoes->Size = System::Drawing::Size(13, 13);
			this->p5potatoes->TabIndex = 29;
			this->p5potatoes->Text = L"0";
			// 
			// p5oates
			// 
			this->p5oates->AutoSize = true;
			this->p5oates->Location = System::Drawing::Point(161, 50);
			this->p5oates->Name = L"p5oates";
			this->p5oates->Size = System::Drawing::Size(13, 13);
			this->p5oates->TabIndex = 28;
			this->p5oates->Text = L"0";
			// 
			// p5barley
			// 
			this->p5barley->AutoSize = true;
			this->p5barley->Location = System::Drawing::Point(161, 37);
			this->p5barley->Name = L"p5barley";
			this->p5barley->Size = System::Drawing::Size(13, 13);
			this->p5barley->TabIndex = 27;
			this->p5barley->Text = L"0";
			// 
			// p5wheat
			// 
			this->p5wheat->AutoSize = true;
			this->p5wheat->Location = System::Drawing::Point(161, 24);
			this->p5wheat->Name = L"p5wheat";
			this->p5wheat->Size = System::Drawing::Size(13, 13);
			this->p5wheat->TabIndex = 26;
			this->p5wheat->Text = L"0";
			// 
			// p5sp
			// 
			this->p5sp->AutoSize = true;
			this->p5sp->Location = System::Drawing::Point(84, 115);
			this->p5sp->Name = L"p5sp";
			this->p5sp->Size = System::Drawing::Size(13, 13);
			this->p5sp->TabIndex = 25;
			this->p5sp->Text = L"0";
			// 
			// p5lambs
			// 
			this->p5lambs->AutoSize = true;
			this->p5lambs->Location = System::Drawing::Point(84, 102);
			this->p5lambs->Name = L"p5lambs";
			this->p5lambs->Size = System::Drawing::Size(13, 13);
			this->p5lambs->TabIndex = 24;
			this->p5lambs->Text = L"0";
			// 
			// label65
			// 
			this->label65->AutoSize = true;
			this->label65->ForeColor = System::Drawing::Color::Red;
			this->label65->Location = System::Drawing::Point(44, 50);
			this->label65->Name = L"label65";
			this->label65->Size = System::Drawing::Size(36, 13);
			this->label65->TabIndex = 23;
			this->label65->Text = L"Sows:";
			// 
			// p5ewes
			// 
			this->p5ewes->AutoSize = true;
			this->p5ewes->Location = System::Drawing::Point(84, 37);
			this->p5ewes->Name = L"p5ewes";
			this->p5ewes->Size = System::Drawing::Size(13, 13);
			this->p5ewes->TabIndex = 22;
			this->p5ewes->Text = L"0";
			// 
			// p5bc
			// 
			this->p5bc->AutoSize = true;
			this->p5bc->Location = System::Drawing::Point(84, 89);
			this->p5bc->Name = L"p5bc";
			this->p5bc->Size = System::Drawing::Size(13, 13);
			this->p5bc->TabIndex = 21;
			this->p5bc->Text = L"0";
			// 
			// p5hc
			// 
			this->p5hc->AutoSize = true;
			this->p5hc->Location = System::Drawing::Point(84, 76);
			this->p5hc->Name = L"p5hc";
			this->p5hc->Size = System::Drawing::Size(13, 13);
			this->p5hc->TabIndex = 20;
			this->p5hc->Text = L"0";
			// 
			// p5horses
			// 
			this->p5horses->AutoSize = true;
			this->p5horses->Location = System::Drawing::Point(84, 63);
			this->p5horses->Name = L"p5horses";
			this->p5horses->Size = System::Drawing::Size(13, 13);
			this->p5horses->TabIndex = 19;
			this->p5horses->Text = L"0";
			// 
			// p5sows
			// 
			this->p5sows->AutoSize = true;
			this->p5sows->Location = System::Drawing::Point(84, 50);
			this->p5sows->Name = L"p5sows";
			this->p5sows->Size = System::Drawing::Size(13, 13);
			this->p5sows->TabIndex = 18;
			this->p5sows->Text = L"0";
			// 
			// label71
			// 
			this->label71->AutoSize = true;
			this->label71->ForeColor = System::Drawing::Color::Green;
			this->label71->Location = System::Drawing::Point(113, 24);
			this->label71->Name = L"label71";
			this->label71->Size = System::Drawing::Size(42, 13);
			this->label71->TabIndex = 17;
			this->label71->Text = L"Wheat:";
			// 
			// label72
			// 
			this->label72->AutoSize = true;
			this->label72->ForeColor = System::Drawing::Color::Green;
			this->label72->Location = System::Drawing::Point(116, 37);
			this->label72->Name = L"label72";
			this->label72->Size = System::Drawing::Size(39, 13);
			this->label72->TabIndex = 16;
			this->label72->Text = L"Barley:";
			// 
			// label73
			// 
			this->label73->AutoSize = true;
			this->label73->ForeColor = System::Drawing::Color::Green;
			this->label73->Location = System::Drawing::Point(117, 50);
			this->label73->Name = L"label73";
			this->label73->Size = System::Drawing::Size(38, 13);
			this->label73->TabIndex = 15;
			this->label73->Text = L"Oates:";
			// 
			// label74
			// 
			this->label74->AutoSize = true;
			this->label74->ForeColor = System::Drawing::Color::Green;
			this->label74->Location = System::Drawing::Point(103, 63);
			this->label74->Name = L"label74";
			this->label74->Size = System::Drawing::Size(52, 13);
			this->label74->TabIndex = 14;
			this->label74->Text = L"Potatoes:";
			// 
			// label75
			// 
			this->label75->AutoSize = true;
			this->label75->ForeColor = System::Drawing::Color::Magenta;
			this->label75->Location = System::Drawing::Point(117, 76);
			this->label75->Name = L"label75";
			this->label75->Size = System::Drawing::Size(38, 13);
			this->label75->TabIndex = 13;
			this->label75->Text = L"Roots:";
			// 
			// label76
			// 
			this->label76->AutoSize = true;
			this->label76->ForeColor = System::Drawing::Color::Magenta;
			this->label76->Location = System::Drawing::Point(126, 89);
			this->label76->Name = L"label76";
			this->label76->Size = System::Drawing::Size(29, 13);
			this->label76->TabIndex = 12;
			this->label76->Text = L"Hay:";
			// 
			// label77
			// 
			this->label77->AutoSize = true;
			this->label77->ForeColor = System::Drawing::Color::Magenta;
			this->label77->Location = System::Drawing::Point(109, 102);
			this->label77->Name = L"label77";
			this->label77->Size = System::Drawing::Size(46, 13);
			this->label77->TabIndex = 11;
			this->label77->Text = L"Pasture:";
			// 
			// label78
			// 
			this->label78->AutoSize = true;
			this->label78->ForeColor = System::Drawing::Color::Magenta;
			this->label78->Location = System::Drawing::Point(128, 115);
			this->label78->Name = L"label78";
			this->label78->Size = System::Drawing::Size(27, 13);
			this->label78->TabIndex = 10;
			this->label78->Text = L"Ley:";
			// 
			// label79
			// 
			this->label79->AutoSize = true;
			this->label79->ForeColor = System::Drawing::Color::Blue;
			this->label79->Location = System::Drawing::Point(18, 115);
			this->label79->Name = L"label79";
			this->label79->Size = System::Drawing::Size(58, 13);
			this->label79->TabIndex = 9;
			this->label79->Text = L"Store Pigs:";
			// 
			// label80
			// 
			this->label80->AutoSize = true;
			this->label80->ForeColor = System::Drawing::Color::Blue;
			this->label80->Location = System::Drawing::Point(37, 102);
			this->label80->Name = L"label80";
			this->label80->Size = System::Drawing::Size(41, 13);
			this->label80->TabIndex = 8;
			this->label80->Text = L"Lambs:";
			// 
			// label81
			// 
			this->label81->AutoSize = true;
			this->label81->ForeColor = System::Drawing::Color::Blue;
			this->label81->Location = System::Drawing::Point(18, 89);
			this->label81->Name = L"label81";
			this->label81->Size = System::Drawing::Size(62, 13);
			this->label81->TabIndex = 7;
			this->label81->Text = L"Bull Calves:";
			// 
			// label82
			// 
			this->label82->AutoSize = true;
			this->label82->ForeColor = System::Drawing::Color::Blue;
			this->label82->Location = System::Drawing::Point(7, 76);
			this->label82->Name = L"label82";
			this->label82->Size = System::Drawing::Size(73, 13);
			this->label82->TabIndex = 6;
			this->label82->Text = L"Heifer Cavles:";
			// 
			// label83
			// 
			this->label83->AutoSize = true;
			this->label83->ForeColor = System::Drawing::Color::Red;
			this->label83->Location = System::Drawing::Point(37, 63);
			this->label83->Name = L"label83";
			this->label83->Size = System::Drawing::Size(43, 13);
			this->label83->TabIndex = 5;
			this->label83->Text = L"Horses:";
			// 
			// label84
			// 
			this->label84->AutoSize = true;
			this->label84->ForeColor = System::Drawing::Color::Red;
			this->label84->Location = System::Drawing::Point(44, 35);
			this->label84->Name = L"label84";
			this->label84->Size = System::Drawing::Size(36, 13);
			this->label84->TabIndex = 4;
			this->label84->Text = L"Ewes:";
			// 
			// p5cows
			// 
			this->p5cows->AutoSize = true;
			this->p5cows->Location = System::Drawing::Point(84, 24);
			this->p5cows->Name = L"p5cows";
			this->p5cows->Size = System::Drawing::Size(13, 13);
			this->p5cows->TabIndex = 3;
			this->p5cows->Text = L"0";
			// 
			// label86
			// 
			this->label86->AutoSize = true;
			this->label86->ForeColor = System::Drawing::Color::Red;
			this->label86->Location = System::Drawing::Point(44, 22);
			this->label86->Name = L"label86";
			this->label86->Size = System::Drawing::Size(36, 13);
			this->label86->TabIndex = 2;
			this->label86->Text = L"Cows:";
			// 
			// panel4
			// 
			this->panel4->AutoSize = true;
			this->panel4->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel4->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel4->Controls->Add(this->p4box);
			this->panel4->Controls->Add(this->p4money);
			this->panel4->Controls->Add(this->label88);
			this->panel4->Controls->Add(this->p4ley);
			this->panel4->Controls->Add(this->p4pasture);
			this->panel4->Controls->Add(this->p4hay);
			this->panel4->Controls->Add(this->p4roots);
			this->panel4->Controls->Add(this->p4potatoes);
			this->panel4->Controls->Add(this->p4oates);
			this->panel4->Controls->Add(this->p4barley);
			this->panel4->Controls->Add(this->p4wheat);
			this->panel4->Controls->Add(this->p4sp);
			this->panel4->Controls->Add(this->p4lambs);
			this->panel4->Controls->Add(this->label99);
			this->panel4->Controls->Add(this->p4ewes);
			this->panel4->Controls->Add(this->p4bc);
			this->panel4->Controls->Add(this->p4hc);
			this->panel4->Controls->Add(this->p4horses);
			this->panel4->Controls->Add(this->p4sows);
			this->panel4->Controls->Add(this->label105);
			this->panel4->Controls->Add(this->label106);
			this->panel4->Controls->Add(this->label107);
			this->panel4->Controls->Add(this->label108);
			this->panel4->Controls->Add(this->label109);
			this->panel4->Controls->Add(this->label110);
			this->panel4->Controls->Add(this->label111);
			this->panel4->Controls->Add(this->label112);
			this->panel4->Controls->Add(this->label113);
			this->panel4->Controls->Add(this->label114);
			this->panel4->Controls->Add(this->label115);
			this->panel4->Controls->Add(this->label116);
			this->panel4->Controls->Add(this->label117);
			this->panel4->Controls->Add(this->label118);
			this->panel4->Controls->Add(this->p4cows);
			this->panel4->Controls->Add(this->label120);
			this->panel4->Location = System::Drawing::Point(778, 252);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(196, 130);
			this->panel4->TabIndex = 40;
			// 
			// p4box
			// 
			this->p4box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p4box->Location = System::Drawing::Point(-1, -3);
			this->p4box->Name = L"p4box";
			this->p4box->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->p4box->Size = System::Drawing::Size(98, 26);
			this->p4box->TabIndex = 68;
			this->p4box->Text = L"Player 4";
			// 
			// p4money
			// 
			this->p4money->AutoSize = true;
			this->p4money->Location = System::Drawing::Point(160, 9);
			this->p4money->Name = L"p4money";
			this->p4money->Size = System::Drawing::Size(31, 13);
			this->p4money->TabIndex = 35;
			this->p4money->Text = L"1500";
			// 
			// label88
			// 
			this->label88->AutoSize = true;
			this->label88->Location = System::Drawing::Point(103, 9);
			this->label88->Name = L"label88";
			this->label88->Size = System::Drawing::Size(51, 13);
			this->label88->TabIndex = 34;
			this->label88->Text = L"Money: £";
			// 
			// p4ley
			// 
			this->p4ley->AutoSize = true;
			this->p4ley->Location = System::Drawing::Point(161, 115);
			this->p4ley->Name = L"p4ley";
			this->p4ley->Size = System::Drawing::Size(13, 13);
			this->p4ley->TabIndex = 33;
			this->p4ley->Text = L"0";
			// 
			// p4pasture
			// 
			this->p4pasture->AutoSize = true;
			this->p4pasture->Location = System::Drawing::Point(161, 102);
			this->p4pasture->Name = L"p4pasture";
			this->p4pasture->Size = System::Drawing::Size(13, 13);
			this->p4pasture->TabIndex = 32;
			this->p4pasture->Text = L"0";
			// 
			// p4hay
			// 
			this->p4hay->AutoSize = true;
			this->p4hay->Location = System::Drawing::Point(161, 89);
			this->p4hay->Name = L"p4hay";
			this->p4hay->Size = System::Drawing::Size(13, 13);
			this->p4hay->TabIndex = 31;
			this->p4hay->Text = L"0";
			// 
			// p4roots
			// 
			this->p4roots->AutoSize = true;
			this->p4roots->Location = System::Drawing::Point(161, 76);
			this->p4roots->Name = L"p4roots";
			this->p4roots->Size = System::Drawing::Size(13, 13);
			this->p4roots->TabIndex = 30;
			this->p4roots->Text = L"0";
			// 
			// p4potatoes
			// 
			this->p4potatoes->AutoSize = true;
			this->p4potatoes->Location = System::Drawing::Point(161, 63);
			this->p4potatoes->Name = L"p4potatoes";
			this->p4potatoes->Size = System::Drawing::Size(13, 13);
			this->p4potatoes->TabIndex = 29;
			this->p4potatoes->Text = L"0";
			// 
			// p4oates
			// 
			this->p4oates->AutoSize = true;
			this->p4oates->Location = System::Drawing::Point(161, 50);
			this->p4oates->Name = L"p4oates";
			this->p4oates->Size = System::Drawing::Size(13, 13);
			this->p4oates->TabIndex = 28;
			this->p4oates->Text = L"0";
			// 
			// p4barley
			// 
			this->p4barley->AutoSize = true;
			this->p4barley->Location = System::Drawing::Point(161, 37);
			this->p4barley->Name = L"p4barley";
			this->p4barley->Size = System::Drawing::Size(13, 13);
			this->p4barley->TabIndex = 27;
			this->p4barley->Text = L"0";
			// 
			// p4wheat
			// 
			this->p4wheat->AutoSize = true;
			this->p4wheat->Location = System::Drawing::Point(161, 24);
			this->p4wheat->Name = L"p4wheat";
			this->p4wheat->Size = System::Drawing::Size(13, 13);
			this->p4wheat->TabIndex = 26;
			this->p4wheat->Text = L"0";
			// 
			// p4sp
			// 
			this->p4sp->AutoSize = true;
			this->p4sp->Location = System::Drawing::Point(84, 115);
			this->p4sp->Name = L"p4sp";
			this->p4sp->Size = System::Drawing::Size(13, 13);
			this->p4sp->TabIndex = 25;
			this->p4sp->Text = L"0";
			// 
			// p4lambs
			// 
			this->p4lambs->AutoSize = true;
			this->p4lambs->Location = System::Drawing::Point(84, 102);
			this->p4lambs->Name = L"p4lambs";
			this->p4lambs->Size = System::Drawing::Size(13, 13);
			this->p4lambs->TabIndex = 24;
			this->p4lambs->Text = L"0";
			// 
			// label99
			// 
			this->label99->AutoSize = true;
			this->label99->ForeColor = System::Drawing::Color::Red;
			this->label99->Location = System::Drawing::Point(44, 50);
			this->label99->Name = L"label99";
			this->label99->Size = System::Drawing::Size(36, 13);
			this->label99->TabIndex = 23;
			this->label99->Text = L"Sows:";
			// 
			// p4ewes
			// 
			this->p4ewes->AutoSize = true;
			this->p4ewes->Location = System::Drawing::Point(84, 37);
			this->p4ewes->Name = L"p4ewes";
			this->p4ewes->Size = System::Drawing::Size(13, 13);
			this->p4ewes->TabIndex = 22;
			this->p4ewes->Text = L"0";
			// 
			// p4bc
			// 
			this->p4bc->AutoSize = true;
			this->p4bc->Location = System::Drawing::Point(84, 89);
			this->p4bc->Name = L"p4bc";
			this->p4bc->Size = System::Drawing::Size(13, 13);
			this->p4bc->TabIndex = 21;
			this->p4bc->Text = L"0";
			// 
			// p4hc
			// 
			this->p4hc->AutoSize = true;
			this->p4hc->Location = System::Drawing::Point(84, 76);
			this->p4hc->Name = L"p4hc";
			this->p4hc->Size = System::Drawing::Size(13, 13);
			this->p4hc->TabIndex = 20;
			this->p4hc->Text = L"0";
			// 
			// p4horses
			// 
			this->p4horses->AutoSize = true;
			this->p4horses->Location = System::Drawing::Point(84, 63);
			this->p4horses->Name = L"p4horses";
			this->p4horses->Size = System::Drawing::Size(13, 13);
			this->p4horses->TabIndex = 19;
			this->p4horses->Text = L"0";
			// 
			// p4sows
			// 
			this->p4sows->AutoSize = true;
			this->p4sows->Location = System::Drawing::Point(84, 50);
			this->p4sows->Name = L"p4sows";
			this->p4sows->Size = System::Drawing::Size(13, 13);
			this->p4sows->TabIndex = 18;
			this->p4sows->Text = L"0";
			// 
			// label105
			// 
			this->label105->AutoSize = true;
			this->label105->ForeColor = System::Drawing::Color::Green;
			this->label105->Location = System::Drawing::Point(113, 24);
			this->label105->Name = L"label105";
			this->label105->Size = System::Drawing::Size(42, 13);
			this->label105->TabIndex = 17;
			this->label105->Text = L"Wheat:";
			// 
			// label106
			// 
			this->label106->AutoSize = true;
			this->label106->ForeColor = System::Drawing::Color::Green;
			this->label106->Location = System::Drawing::Point(116, 37);
			this->label106->Name = L"label106";
			this->label106->Size = System::Drawing::Size(39, 13);
			this->label106->TabIndex = 16;
			this->label106->Text = L"Barley:";
			// 
			// label107
			// 
			this->label107->AutoSize = true;
			this->label107->ForeColor = System::Drawing::Color::Green;
			this->label107->Location = System::Drawing::Point(117, 50);
			this->label107->Name = L"label107";
			this->label107->Size = System::Drawing::Size(38, 13);
			this->label107->TabIndex = 15;
			this->label107->Text = L"Oates:";
			// 
			// label108
			// 
			this->label108->AutoSize = true;
			this->label108->ForeColor = System::Drawing::Color::Green;
			this->label108->Location = System::Drawing::Point(103, 63);
			this->label108->Name = L"label108";
			this->label108->Size = System::Drawing::Size(52, 13);
			this->label108->TabIndex = 14;
			this->label108->Text = L"Potatoes:";
			// 
			// label109
			// 
			this->label109->AutoSize = true;
			this->label109->ForeColor = System::Drawing::Color::Magenta;
			this->label109->Location = System::Drawing::Point(117, 76);
			this->label109->Name = L"label109";
			this->label109->Size = System::Drawing::Size(38, 13);
			this->label109->TabIndex = 13;
			this->label109->Text = L"Roots:";
			// 
			// label110
			// 
			this->label110->AutoSize = true;
			this->label110->ForeColor = System::Drawing::Color::Magenta;
			this->label110->Location = System::Drawing::Point(126, 89);
			this->label110->Name = L"label110";
			this->label110->Size = System::Drawing::Size(29, 13);
			this->label110->TabIndex = 12;
			this->label110->Text = L"Hay:";
			// 
			// label111
			// 
			this->label111->AutoSize = true;
			this->label111->ForeColor = System::Drawing::Color::Magenta;
			this->label111->Location = System::Drawing::Point(109, 102);
			this->label111->Name = L"label111";
			this->label111->Size = System::Drawing::Size(46, 13);
			this->label111->TabIndex = 11;
			this->label111->Text = L"Pasture:";
			// 
			// label112
			// 
			this->label112->AutoSize = true;
			this->label112->ForeColor = System::Drawing::Color::Magenta;
			this->label112->Location = System::Drawing::Point(128, 115);
			this->label112->Name = L"label112";
			this->label112->Size = System::Drawing::Size(27, 13);
			this->label112->TabIndex = 10;
			this->label112->Text = L"Ley:";
			// 
			// label113
			// 
			this->label113->AutoSize = true;
			this->label113->ForeColor = System::Drawing::Color::Blue;
			this->label113->Location = System::Drawing::Point(18, 115);
			this->label113->Name = L"label113";
			this->label113->Size = System::Drawing::Size(58, 13);
			this->label113->TabIndex = 9;
			this->label113->Text = L"Store Pigs:";
			// 
			// label114
			// 
			this->label114->AutoSize = true;
			this->label114->ForeColor = System::Drawing::Color::Blue;
			this->label114->Location = System::Drawing::Point(37, 102);
			this->label114->Name = L"label114";
			this->label114->Size = System::Drawing::Size(41, 13);
			this->label114->TabIndex = 8;
			this->label114->Text = L"Lambs:";
			// 
			// label115
			// 
			this->label115->AutoSize = true;
			this->label115->ForeColor = System::Drawing::Color::Blue;
			this->label115->Location = System::Drawing::Point(18, 89);
			this->label115->Name = L"label115";
			this->label115->Size = System::Drawing::Size(62, 13);
			this->label115->TabIndex = 7;
			this->label115->Text = L"Bull Calves:";
			// 
			// label116
			// 
			this->label116->AutoSize = true;
			this->label116->ForeColor = System::Drawing::Color::Blue;
			this->label116->Location = System::Drawing::Point(7, 76);
			this->label116->Name = L"label116";
			this->label116->Size = System::Drawing::Size(73, 13);
			this->label116->TabIndex = 6;
			this->label116->Text = L"Heifer Cavles:";
			// 
			// label117
			// 
			this->label117->AutoSize = true;
			this->label117->ForeColor = System::Drawing::Color::Red;
			this->label117->Location = System::Drawing::Point(37, 63);
			this->label117->Name = L"label117";
			this->label117->Size = System::Drawing::Size(43, 13);
			this->label117->TabIndex = 5;
			this->label117->Text = L"Horses:";
			// 
			// label118
			// 
			this->label118->AutoSize = true;
			this->label118->ForeColor = System::Drawing::Color::Red;
			this->label118->Location = System::Drawing::Point(44, 35);
			this->label118->Name = L"label118";
			this->label118->Size = System::Drawing::Size(36, 13);
			this->label118->TabIndex = 4;
			this->label118->Text = L"Ewes:";
			// 
			// p4cows
			// 
			this->p4cows->AutoSize = true;
			this->p4cows->Location = System::Drawing::Point(84, 24);
			this->p4cows->Name = L"p4cows";
			this->p4cows->Size = System::Drawing::Size(13, 13);
			this->p4cows->TabIndex = 3;
			this->p4cows->Text = L"0";
			// 
			// label120
			// 
			this->label120->AutoSize = true;
			this->label120->ForeColor = System::Drawing::Color::Red;
			this->label120->Location = System::Drawing::Point(44, 22);
			this->label120->Name = L"label120";
			this->label120->Size = System::Drawing::Size(36, 13);
			this->label120->TabIndex = 2;
			this->label120->Text = L"Cows:";
			// 
			// panel5
			// 
			this->panel5->AutoSize = true;
			this->panel5->AutoSizeMode = System::Windows::Forms::AutoSizeMode::GrowAndShrink;
			this->panel5->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->panel5->Controls->Add(this->p2box);
			this->panel5->Controls->Add(this->p2money);
			this->panel5->Controls->Add(this->label123);
			this->panel5->Controls->Add(this->p2ley);
			this->panel5->Controls->Add(this->p2pasture);
			this->panel5->Controls->Add(this->p2hay);
			this->panel5->Controls->Add(this->p2roots);
			this->panel5->Controls->Add(this->p2potatoes);
			this->panel5->Controls->Add(this->p2oates);
			this->panel5->Controls->Add(this->p2barley);
			this->panel5->Controls->Add(this->p2wheat);
			this->panel5->Controls->Add(this->p2sp);
			this->panel5->Controls->Add(this->p2lambs);
			this->panel5->Controls->Add(this->label134);
			this->panel5->Controls->Add(this->p2ewes);
			this->panel5->Controls->Add(this->p2bc);
			this->panel5->Controls->Add(this->p2hc);
			this->panel5->Controls->Add(this->p2horses);
			this->panel5->Controls->Add(this->p2sows);
			this->panel5->Controls->Add(this->label140);
			this->panel5->Controls->Add(this->label141);
			this->panel5->Controls->Add(this->label142);
			this->panel5->Controls->Add(this->label143);
			this->panel5->Controls->Add(this->label144);
			this->panel5->Controls->Add(this->label145);
			this->panel5->Controls->Add(this->label146);
			this->panel5->Controls->Add(this->label147);
			this->panel5->Controls->Add(this->label148);
			this->panel5->Controls->Add(this->label149);
			this->panel5->Controls->Add(this->label150);
			this->panel5->Controls->Add(this->label151);
			this->panel5->Controls->Add(this->label152);
			this->panel5->Controls->Add(this->label153);
			this->panel5->Controls->Add(this->p2cows);
			this->panel5->Controls->Add(this->label155);
			this->panel5->Location = System::Drawing::Point(778, 118);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(196, 130);
			this->panel5->TabIndex = 39;
			// 
			// p2box
			// 
			this->p2box->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->p2box->Location = System::Drawing::Point(-1, -3);
			this->p2box->Name = L"p2box";
			this->p2box->RightToLeft = System::Windows::Forms::RightToLeft::Yes;
			this->p2box->Size = System::Drawing::Size(98, 26);
			this->p2box->TabIndex = 68;
			this->p2box->Text = L"Player 2";
			// 
			// p2money
			// 
			this->p2money->AutoSize = true;
			this->p2money->Location = System::Drawing::Point(160, 9);
			this->p2money->Name = L"p2money";
			this->p2money->Size = System::Drawing::Size(31, 13);
			this->p2money->TabIndex = 35;
			this->p2money->Text = L"1500";
			// 
			// label123
			// 
			this->label123->AutoSize = true;
			this->label123->Location = System::Drawing::Point(103, 9);
			this->label123->Name = L"label123";
			this->label123->Size = System::Drawing::Size(51, 13);
			this->label123->TabIndex = 34;
			this->label123->Text = L"Money: £";
			// 
			// p2ley
			// 
			this->p2ley->AutoSize = true;
			this->p2ley->Location = System::Drawing::Point(161, 115);
			this->p2ley->Name = L"p2ley";
			this->p2ley->Size = System::Drawing::Size(13, 13);
			this->p2ley->TabIndex = 33;
			this->p2ley->Text = L"0";
			// 
			// p2pasture
			// 
			this->p2pasture->AutoSize = true;
			this->p2pasture->Location = System::Drawing::Point(161, 102);
			this->p2pasture->Name = L"p2pasture";
			this->p2pasture->Size = System::Drawing::Size(13, 13);
			this->p2pasture->TabIndex = 32;
			this->p2pasture->Text = L"0";
			// 
			// p2hay
			// 
			this->p2hay->AutoSize = true;
			this->p2hay->Location = System::Drawing::Point(161, 89);
			this->p2hay->Name = L"p2hay";
			this->p2hay->Size = System::Drawing::Size(13, 13);
			this->p2hay->TabIndex = 31;
			this->p2hay->Text = L"0";
			// 
			// p2roots
			// 
			this->p2roots->AutoSize = true;
			this->p2roots->Location = System::Drawing::Point(161, 76);
			this->p2roots->Name = L"p2roots";
			this->p2roots->Size = System::Drawing::Size(13, 13);
			this->p2roots->TabIndex = 30;
			this->p2roots->Text = L"0";
			// 
			// p2potatoes
			// 
			this->p2potatoes->AutoSize = true;
			this->p2potatoes->Location = System::Drawing::Point(161, 63);
			this->p2potatoes->Name = L"p2potatoes";
			this->p2potatoes->Size = System::Drawing::Size(13, 13);
			this->p2potatoes->TabIndex = 29;
			this->p2potatoes->Text = L"0";
			// 
			// p2oates
			// 
			this->p2oates->AutoSize = true;
			this->p2oates->Location = System::Drawing::Point(161, 50);
			this->p2oates->Name = L"p2oates";
			this->p2oates->Size = System::Drawing::Size(13, 13);
			this->p2oates->TabIndex = 28;
			this->p2oates->Text = L"0";
			// 
			// p2barley
			// 
			this->p2barley->AutoSize = true;
			this->p2barley->Location = System::Drawing::Point(161, 37);
			this->p2barley->Name = L"p2barley";
			this->p2barley->Size = System::Drawing::Size(13, 13);
			this->p2barley->TabIndex = 27;
			this->p2barley->Text = L"0";
			// 
			// p2wheat
			// 
			this->p2wheat->AutoSize = true;
			this->p2wheat->Location = System::Drawing::Point(161, 24);
			this->p2wheat->Name = L"p2wheat";
			this->p2wheat->Size = System::Drawing::Size(13, 13);
			this->p2wheat->TabIndex = 26;
			this->p2wheat->Text = L"0";
			// 
			// p2sp
			// 
			this->p2sp->AutoSize = true;
			this->p2sp->Location = System::Drawing::Point(84, 115);
			this->p2sp->Name = L"p2sp";
			this->p2sp->Size = System::Drawing::Size(13, 13);
			this->p2sp->TabIndex = 25;
			this->p2sp->Text = L"0";
			// 
			// p2lambs
			// 
			this->p2lambs->AutoSize = true;
			this->p2lambs->Location = System::Drawing::Point(84, 102);
			this->p2lambs->Name = L"p2lambs";
			this->p2lambs->Size = System::Drawing::Size(13, 13);
			this->p2lambs->TabIndex = 24;
			this->p2lambs->Text = L"0";
			// 
			// label134
			// 
			this->label134->AutoSize = true;
			this->label134->ForeColor = System::Drawing::Color::Red;
			this->label134->Location = System::Drawing::Point(44, 50);
			this->label134->Name = L"label134";
			this->label134->Size = System::Drawing::Size(36, 13);
			this->label134->TabIndex = 23;
			this->label134->Text = L"Sows:";
			// 
			// p2ewes
			// 
			this->p2ewes->AutoSize = true;
			this->p2ewes->Location = System::Drawing::Point(84, 37);
			this->p2ewes->Name = L"p2ewes";
			this->p2ewes->Size = System::Drawing::Size(13, 13);
			this->p2ewes->TabIndex = 22;
			this->p2ewes->Text = L"0";
			// 
			// p2bc
			// 
			this->p2bc->AutoSize = true;
			this->p2bc->Location = System::Drawing::Point(84, 89);
			this->p2bc->Name = L"p2bc";
			this->p2bc->Size = System::Drawing::Size(13, 13);
			this->p2bc->TabIndex = 21;
			this->p2bc->Text = L"0";
			// 
			// p2hc
			// 
			this->p2hc->AutoSize = true;
			this->p2hc->Location = System::Drawing::Point(84, 76);
			this->p2hc->Name = L"p2hc";
			this->p2hc->Size = System::Drawing::Size(13, 13);
			this->p2hc->TabIndex = 20;
			this->p2hc->Text = L"0";
			// 
			// p2horses
			// 
			this->p2horses->AutoSize = true;
			this->p2horses->Location = System::Drawing::Point(84, 63);
			this->p2horses->Name = L"p2horses";
			this->p2horses->Size = System::Drawing::Size(13, 13);
			this->p2horses->TabIndex = 19;
			this->p2horses->Text = L"0";
			// 
			// p2sows
			// 
			this->p2sows->AutoSize = true;
			this->p2sows->Location = System::Drawing::Point(84, 50);
			this->p2sows->Name = L"p2sows";
			this->p2sows->Size = System::Drawing::Size(13, 13);
			this->p2sows->TabIndex = 18;
			this->p2sows->Text = L"0";
			// 
			// label140
			// 
			this->label140->AutoSize = true;
			this->label140->ForeColor = System::Drawing::Color::Green;
			this->label140->Location = System::Drawing::Point(113, 24);
			this->label140->Name = L"label140";
			this->label140->Size = System::Drawing::Size(42, 13);
			this->label140->TabIndex = 17;
			this->label140->Text = L"Wheat:";
			// 
			// label141
			// 
			this->label141->AutoSize = true;
			this->label141->ForeColor = System::Drawing::Color::Green;
			this->label141->Location = System::Drawing::Point(116, 37);
			this->label141->Name = L"label141";
			this->label141->Size = System::Drawing::Size(39, 13);
			this->label141->TabIndex = 16;
			this->label141->Text = L"Barley:";
			// 
			// label142
			// 
			this->label142->AutoSize = true;
			this->label142->ForeColor = System::Drawing::Color::Green;
			this->label142->Location = System::Drawing::Point(117, 50);
			this->label142->Name = L"label142";
			this->label142->Size = System::Drawing::Size(38, 13);
			this->label142->TabIndex = 15;
			this->label142->Text = L"Oates:";
			// 
			// label143
			// 
			this->label143->AutoSize = true;
			this->label143->ForeColor = System::Drawing::Color::Green;
			this->label143->Location = System::Drawing::Point(103, 63);
			this->label143->Name = L"label143";
			this->label143->Size = System::Drawing::Size(52, 13);
			this->label143->TabIndex = 14;
			this->label143->Text = L"Potatoes:";
			// 
			// label144
			// 
			this->label144->AutoSize = true;
			this->label144->ForeColor = System::Drawing::Color::Magenta;
			this->label144->Location = System::Drawing::Point(117, 76);
			this->label144->Name = L"label144";
			this->label144->Size = System::Drawing::Size(38, 13);
			this->label144->TabIndex = 13;
			this->label144->Text = L"Roots:";
			// 
			// label145
			// 
			this->label145->AutoSize = true;
			this->label145->ForeColor = System::Drawing::Color::Magenta;
			this->label145->Location = System::Drawing::Point(126, 89);
			this->label145->Name = L"label145";
			this->label145->Size = System::Drawing::Size(29, 13);
			this->label145->TabIndex = 12;
			this->label145->Text = L"Hay:";
			// 
			// label146
			// 
			this->label146->AutoSize = true;
			this->label146->ForeColor = System::Drawing::Color::Magenta;
			this->label146->Location = System::Drawing::Point(109, 102);
			this->label146->Name = L"label146";
			this->label146->Size = System::Drawing::Size(46, 13);
			this->label146->TabIndex = 11;
			this->label146->Text = L"Pasture:";
			// 
			// label147
			// 
			this->label147->AutoSize = true;
			this->label147->ForeColor = System::Drawing::Color::Magenta;
			this->label147->Location = System::Drawing::Point(128, 115);
			this->label147->Name = L"label147";
			this->label147->Size = System::Drawing::Size(27, 13);
			this->label147->TabIndex = 10;
			this->label147->Text = L"Ley:";
			// 
			// label148
			// 
			this->label148->AutoSize = true;
			this->label148->ForeColor = System::Drawing::Color::Blue;
			this->label148->Location = System::Drawing::Point(18, 115);
			this->label148->Name = L"label148";
			this->label148->Size = System::Drawing::Size(58, 13);
			this->label148->TabIndex = 9;
			this->label148->Text = L"Store Pigs:";
			// 
			// label149
			// 
			this->label149->AutoSize = true;
			this->label149->ForeColor = System::Drawing::Color::Blue;
			this->label149->Location = System::Drawing::Point(37, 102);
			this->label149->Name = L"label149";
			this->label149->Size = System::Drawing::Size(41, 13);
			this->label149->TabIndex = 8;
			this->label149->Text = L"Lambs:";
			// 
			// label150
			// 
			this->label150->AutoSize = true;
			this->label150->ForeColor = System::Drawing::Color::Blue;
			this->label150->Location = System::Drawing::Point(18, 89);
			this->label150->Name = L"label150";
			this->label150->Size = System::Drawing::Size(62, 13);
			this->label150->TabIndex = 7;
			this->label150->Text = L"Bull Calves:";
			// 
			// label151
			// 
			this->label151->AutoSize = true;
			this->label151->ForeColor = System::Drawing::Color::Blue;
			this->label151->Location = System::Drawing::Point(7, 76);
			this->label151->Name = L"label151";
			this->label151->Size = System::Drawing::Size(73, 13);
			this->label151->TabIndex = 6;
			this->label151->Text = L"Heifer Cavles:";
			// 
			// label152
			// 
			this->label152->AutoSize = true;
			this->label152->ForeColor = System::Drawing::Color::Red;
			this->label152->Location = System::Drawing::Point(37, 63);
			this->label152->Name = L"label152";
			this->label152->Size = System::Drawing::Size(43, 13);
			this->label152->TabIndex = 5;
			this->label152->Text = L"Horses:";
			// 
			// label153
			// 
			this->label153->AutoSize = true;
			this->label153->ForeColor = System::Drawing::Color::Red;
			this->label153->Location = System::Drawing::Point(44, 35);
			this->label153->Name = L"label153";
			this->label153->Size = System::Drawing::Size(36, 13);
			this->label153->TabIndex = 4;
			this->label153->Text = L"Ewes:";
			// 
			// p2cows
			// 
			this->p2cows->AutoSize = true;
			this->p2cows->Location = System::Drawing::Point(84, 24);
			this->p2cows->Name = L"p2cows";
			this->p2cows->Size = System::Drawing::Size(13, 13);
			this->p2cows->TabIndex = 3;
			this->p2cows->Text = L"0";
			// 
			// label155
			// 
			this->label155->AutoSize = true;
			this->label155->ForeColor = System::Drawing::Color::Red;
			this->label155->Location = System::Drawing::Point(44, 22);
			this->label155->Name = L"label155";
			this->label155->Size = System::Drawing::Size(36, 13);
			this->label155->TabIndex = 2;
			this->label155->Text = L"Cows:";
			// 
			// label121
			// 
			this->label121->AutoSize = true;
			this->label121->Location = System::Drawing::Point(881, 428);
			this->label121->Name = L"label121";
			this->label121->Size = System::Drawing::Size(13, 13);
			this->label121->TabIndex = 41;
			this->label121->Text = L"0";
			// 
			// dicebtn
			// 
			this->dicebtn->Location = System::Drawing::Point(778, 423);
			this->dicebtn->Name = L"dicebtn";
			this->dicebtn->Size = System::Drawing::Size(75, 23);
			this->dicebtn->TabIndex = 42;
			this->dicebtn->Text = L"Roll Dice";
			this->dicebtn->UseVisualStyleBackColor = true;
			// 
			// nextbtn
			// 
			this->nextbtn->Location = System::Drawing::Point(816, 491);
			this->nextbtn->Name = L"nextbtn";
			this->nextbtn->Size = System::Drawing::Size(75, 23);
			this->nextbtn->TabIndex = 43;
			this->nextbtn->Text = L"Advance";
			this->nextbtn->UseVisualStyleBackColor = true;
			this->nextbtn->Click += gcnew System::EventHandler(this, &MyForm1::nextbtn_Click);
			// 
			// resetbtn
			// 
			this->resetbtn->Location = System::Drawing::Point(897, 491);
			this->resetbtn->Name = L"resetbtn";
			this->resetbtn->Size = System::Drawing::Size(75, 23);
			this->resetbtn->TabIndex = 44;
			this->resetbtn->Text = L"Reset";
			this->resetbtn->UseVisualStyleBackColor = true;
			// 
			// dicevalue
			// 
			this->dicevalue->FormattingEnabled = true;
			this->dicevalue->Items->AddRange(gcnew cli::array< System::Object^  >(6) { L"1", L"2", L"3", L"4", L"5", L"6" });
			this->dicevalue->Location = System::Drawing::Point(865, 459);
			this->dicevalue->Name = L"dicevalue";
			this->dicevalue->Size = System::Drawing::Size(45, 21);
			this->dicevalue->TabIndex = 45;
			this->dicevalue->Text = L"1";
			// 
			// label156
			// 
			this->label156->AutoSize = true;
			this->label156->Location = System::Drawing::Point(805, 462);
			this->label156->Name = L"label156";
			this->label156->Size = System::Drawing::Size(48, 13);
			this->label156->TabIndex = 46;
			this->label156->Text = L"Dice roll:";
			// 
			// label157
			// 
			this->label157->AutoSize = true;
			this->label157->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label157->Location = System::Drawing::Point(861, 395);
			this->label157->Name = L"label157";
			this->label157->Size = System::Drawing::Size(41, 20);
			this->label157->TabIndex = 47;
			this->label157->Text = L"Dice";
			// 
			// cnum
			// 
			this->cnum->AutoSize = true;
			this->cnum->ForeColor = System::Drawing::Color::Red;
			this->cnum->Location = System::Drawing::Point(214, 121);
			this->cnum->Name = L"cnum";
			this->cnum->Size = System::Drawing::Size(44, 13);
			this->cnum->TabIndex = 48;
			this->cnum->Text = L"Number";
			// 
			// farming
			// 
			this->farming->AutoSize = true;
			this->farming->ForeColor = System::Drawing::Color::Black;
			this->farming->Location = System::Drawing::Point(716, 121);
			this->farming->Name = L"farming";
			this->farming->Size = System::Drawing::Size(56, 13);
			this->farming->TabIndex = 49;
			this->farming->Text = L"FARMING";
			// 
			// op1
			// 
			this->op1->AutoSize = true;
			this->op1->Location = System::Drawing::Point(262, 449);
			this->op1->Name = L"op1";
			this->op1->Size = System::Drawing::Size(80, 17);
			this->op1->TabIndex = 51;
			this->op1->Text = L"checkBox1";
			this->op1->UseVisualStyleBackColor = true;
			// 
			// op2
			// 
			this->op2->AutoSize = true;
			this->op2->Location = System::Drawing::Point(262, 472);
			this->op2->Name = L"op2";
			this->op2->Size = System::Drawing::Size(80, 17);
			this->op2->TabIndex = 52;
			this->op2->Text = L"checkBox2";
			this->op2->UseVisualStyleBackColor = true;
			// 
			// op3
			// 
			this->op3->AutoSize = true;
			this->op3->Location = System::Drawing::Point(262, 495);
			this->op3->Name = L"op3";
			this->op3->Size = System::Drawing::Size(80, 17);
			this->op3->TabIndex = 53;
			this->op3->Text = L"checkBox3";
			this->op3->UseVisualStyleBackColor = true;
			// 
			// op4
			// 
			this->op4->AutoSize = true;
			this->op4->Location = System::Drawing::Point(524, 452);
			this->op4->Name = L"op4";
			this->op4->Size = System::Drawing::Size(80, 17);
			this->op4->TabIndex = 54;
			this->op4->Text = L"checkBox4";
			this->op4->UseVisualStyleBackColor = true;
			// 
			// op5
			// 
			this->op5->AutoSize = true;
			this->op5->Location = System::Drawing::Point(524, 475);
			this->op5->Name = L"op5";
			this->op5->Size = System::Drawing::Size(80, 17);
			this->op5->TabIndex = 55;
			this->op5->Text = L"checkBox5";
			this->op5->UseVisualStyleBackColor = true;
			// 
			// op6
			// 
			this->op6->AutoSize = true;
			this->op6->Location = System::Drawing::Point(524, 498);
			this->op6->Name = L"op6";
			this->op6->Size = System::Drawing::Size(80, 17);
			this->op6->TabIndex = 56;
			this->op6->Text = L"checkBox6";
			this->op6->UseVisualStyleBackColor = true;
			// 
			// pcb
			// 
			this->pcb->AutoSize = true;
			this->pcb->Location = System::Drawing::Point(214, 428);
			this->pcb->Name = L"pcb";
			this->pcb->Size = System::Drawing::Size(75, 13);
			this->pcb->TabIndex = 57;
			this->pcb->Text = L"Player Options";
			// 
			// pbar
			// 
			this->pbar->Location = System::Drawing::Point(808, 12);
			this->pbar->Maximum = 60;
			this->pbar->Name = L"pbar";
			this->pbar->Size = System::Drawing::Size(166, 23);
			this->pbar->Step = 1;
			this->pbar->TabIndex = 61;
			// 
			// cardbox
			// 
			this->cardbox->ForeColor = System::Drawing::Color::Red;
			this->cardbox->Location = System::Drawing::Point(217, 166);
			this->cardbox->Name = L"cardbox";
			this->cardbox->ReadOnly = true;
			this->cardbox->Size = System::Drawing::Size(555, 163);
			this->cardbox->TabIndex = 62;
			this->cardbox->Text = resources->GetString(L"cardbox.Text");
			// 
			// output
			// 
			this->output->Location = System::Drawing::Point(217, 335);
			this->output->Name = L"output";
			this->output->ReadOnly = true;
			this->output->Size = System::Drawing::Size(555, 87);
			this->output->TabIndex = 63;
			this->output->Text = L"Output\nOutput2";
			// 
			// pbox1
			// 
			this->pbox1->FormattingEnabled = true;
			this->pbox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"2", L"3", L"4", L"5" });
			this->pbox1->Location = System::Drawing::Point(66, 38);
			this->pbox1->Name = L"pbox1";
			this->pbox1->Size = System::Drawing::Size(44, 21);
			this->pbox1->TabIndex = 64;
			this->pbox1->Text = L"2";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Location = System::Drawing::Point(871, 38);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(48, 13);
			this->label18->TabIndex = 65;
			this->label18->Text = L"Progress";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Location = System::Drawing::Point(46, 12);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(93, 13);
			this->label19->TabIndex = 66;
			this->label19->Text = L"Number of Players";
			// 
			// nextcard
			// 
			this->nextcard->Location = System::Drawing::Point(735, 491);
			this->nextcard->Name = L"nextcard";
			this->nextcard->Size = System::Drawing::Size(75, 23);
			this->nextcard->TabIndex = 67;
			this->nextcard->Text = L"Next Card";
			this->nextcard->UseVisualStyleBackColor = true;
			this->nextcard->Click += gcnew System::EventHandler(this, &MyForm1::nextcard_Click);
			// 
			// opt1
			// 
			this->opt1->Location = System::Drawing::Point(217, 444);
			this->opt1->Name = L"opt1";
			this->opt1->Size = System::Drawing::Size(39, 20);
			this->opt1->TabIndex = 68;
			// 
			// opt2
			// 
			this->opt2->Location = System::Drawing::Point(217, 469);
			this->opt2->Name = L"opt2";
			this->opt2->Size = System::Drawing::Size(39, 20);
			this->opt2->TabIndex = 69;
			// 
			// opt3
			// 
			this->opt3->Location = System::Drawing::Point(217, 494);
			this->opt3->Name = L"opt3";
			this->opt3->Size = System::Drawing::Size(39, 20);
			this->opt3->TabIndex = 70;
			// 
			// opt6
			// 
			this->opt6->Location = System::Drawing::Point(479, 496);
			this->opt6->Name = L"opt6";
			this->opt6->Size = System::Drawing::Size(39, 20);
			this->opt6->TabIndex = 73;
			// 
			// opt5
			// 
			this->opt5->Location = System::Drawing::Point(479, 471);
			this->opt5->Name = L"opt5";
			this->opt5->Size = System::Drawing::Size(39, 20);
			this->opt5->TabIndex = 72;
			// 
			// opt4
			// 
			this->opt4->Location = System::Drawing::Point(479, 446);
			this->opt4->Name = L"opt4";
			this->opt4->Size = System::Drawing::Size(39, 20);
			this->opt4->TabIndex = 71;
			// 
			// ctitle
			// 
			this->ctitle->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ctitle->Location = System::Drawing::Point(217, 137);
			this->ctitle->Name = L"ctitle";
			this->ctitle->ReadOnly = true;
			this->ctitle->Size = System::Drawing::Size(555, 26);
			this->ctitle->TabIndex = 74;
			this->ctitle->Text = L"Title";
			this->ctitle->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Location = System::Drawing::Point(835, 83);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(35, 13);
			this->label21->TabIndex = 75;
			this->label21->Text = L"Clicks";
			// 
			// clicks
			// 
			this->clicks->AutoSize = true;
			this->clicks->Location = System::Drawing::Point(882, 83);
			this->clicks->Name = L"clicks";
			this->clicks->Size = System::Drawing::Size(41, 13);
			this->clicks->TabIndex = 76;
			this->clicks->Text = L"label22";
			// 
			// lcard
			// 
			this->lcard->AutoSize = true;
			this->lcard->Location = System::Drawing::Point(881, 61);
			this->lcard->Name = L"lcard";
			this->lcard->Size = System::Drawing::Size(41, 13);
			this->lcard->TabIndex = 77;
			this->lcard->Text = L"label22";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(984, 525);
			this->Controls->Add(this->lcard);
			this->Controls->Add(this->clicks);
			this->Controls->Add(this->label21);
			this->Controls->Add(this->ctitle);
			this->Controls->Add(this->opt6);
			this->Controls->Add(this->opt5);
			this->Controls->Add(this->opt4);
			this->Controls->Add(this->opt3);
			this->Controls->Add(this->opt2);
			this->Controls->Add(this->opt1);
			this->Controls->Add(this->nextcard);
			this->Controls->Add(this->label19);
			this->Controls->Add(this->label18);
			this->Controls->Add(this->pbox1);
			this->Controls->Add(this->output);
			this->Controls->Add(this->cardbox);
			this->Controls->Add(this->pbar);
			this->Controls->Add(this->pcb);
			this->Controls->Add(this->op6);
			this->Controls->Add(this->op5);
			this->Controls->Add(this->op4);
			this->Controls->Add(this->op3);
			this->Controls->Add(this->op2);
			this->Controls->Add(this->op1);
			this->Controls->Add(this->farming);
			this->Controls->Add(this->cnum);
			this->Controls->Add(this->label157);
			this->Controls->Add(this->label156);
			this->Controls->Add(this->dicevalue);
			this->Controls->Add(this->resetbtn);
			this->Controls->Add(this->nextbtn);
			this->Controls->Add(this->dicebtn);
			this->Controls->Add(this->label121);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			this->panel4->ResumeLayout(false);
			this->panel4->PerformLayout();
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->opt4))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
//	private: System::Void label3_Click(System::Object^  sender, System::EventArgs^  e) {
//	}
//private: System::Void richTextBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) { 
//} del these lines

		//intial values
		int card = 0;
		int click = 0;
		int pnum = 0;
		int vp1c = 60, vp1e = 50, vp1s = 16, vp1h = 2, vp1hc = 0, vp1bc = 0, vp1l = 0, vp1sp = 0;
		int cp1w = 0, cp1b = 0, cp1o = 0, cp1p = 0, cp1r = 1, cp1h = 4, cp1pa = 5, cp1l=0 , vp1m = 1500, p1ingame=0;
		int vp2c = 60, vp2e = 50, vp2s = 16, vp2h = 2, vp2hc = 0, vp2bc = 0, vp2l = 0, vp2sp = 0;
		int cp2w = 0, cp2b = 0, cp2o = 0, cp2p = 0, cp2r = 1, cp2h = 4, cp2pa = 5, cp2l=0 , vp2m = 1500, p2ingame = 0;
		int vp3c = 60, vp3e = 50, vp3s = 16, vp3h = 2, vp3hc = 0, vp3bc = 0, vp3l = 0, vp3sp = 0;
		int cp3w = 0, cp3b = 0, cp3o = 0, cp3p = 0, cp3r = 1, cp3h = 4, cp3pa = 5, cp3l = 0 , vp3m = 1500, p3ingame = 0;
		int vp4c = 60, vp4e = 50, vp4s = 16, vp4h = 2, vp4hc = 0, vp4bc = 0, vp4l = 0, vp4sp = 0;
		int cp4w = 0, cp4b = 0, cp4o = 0, cp4p = 0, cp4r = 1, cp4h = 4, cp4pa = 5, cp4l = 0 , vp4m = 1500, p4ingame = 0;
		int vp5c = 60, vp5e = 50, vp5s = 16, vp5h = 2, vp5hc = 0, vp5bc = 0, vp5l = 0, vp5sp = 0;
		int cp5w = 0, cp5b = 0, cp5o = 0, cp5p = 0, cp5r = 1, cp5h = 4, cp5pa = 5, cp5l = 0 , vp5m = 1500, p5ingame = 0;
		//int p1[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };
		//vector <int> p1(int);//,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };
		//int p2[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };

public: System::Void MyForm1_Load(System::Object^  sender, System::EventArgs^  e) {//main program
	int p1[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };
	}
private:System::Void Reset() 
	{
	//resetting the game code
	this->resetbtn->Enabled = false;
	this->dicebtn->Enabled = false;
	this->nextbtn->Enabled = true;
	this->nextcard->Enabled = false;
	this->p1box->Enabled = false;
	this->p2box->Enabled = false;
	this->p3box->Enabled = false;
	this->p4box->Enabled = false;
	this->p5box->Enabled = false;
	this->op1->Enabled = false;
	this->op2->Enabled = false;
	this->op3->Enabled = false;
	this->op4->Enabled = false;
	this->op5->Enabled = false;
	this->op6->Enabled = false;
	this->opt1->Enabled = false;
	this->opt2->Enabled = false;
	this->opt3->Enabled = false;
	this->opt4->Enabled = false;
	this->opt5->Enabled = false;
	this->opt6->Enabled = false;
	this->dicevalue->Enabled = false;
	this->pbox1->Enabled = true;
	this->click = 0;
	this->card = 0;

	this->cardbox->ForeColor = System::Drawing::Color::Black;
	this->cardbox->Text = L"Welcome to Farming. For this game you need at least 2 players, 1 dice and a calculator (or human equivalent).\nBasic rules: each card will be resolved as a whole action, not serval actions. Players may therefore not be in debt after any card, but may during a card. When resolving a card if an action cannot be done, it will be completed as well as possible. All players are subjected to stock limits of: 75 cows, 60 ewes, 20 sow and 4 horses to keep within ECC regulation. If any player goes above this limit they will be notified and stock reversed to the limit.";
	this->output->Text = L"Please select the number of players in the top-left drop down menu and click advance to continue.";
	}

private: System::Void nextbtn_Click(System::Object^  sender, System::EventArgs^  e) {
	//code for each time the advance button is pressed
	click += 1;
	this->clicks->Text = Convert::ToString(click);
	Game();
		}

private: System::Void nextcard_Click(System::Object^  sender, System::EventArgs^  e) {
	this->nextcard->Enabled = false;
	card += 1;
	this->click = 0;
	this->clicks->Text = Convert::ToString(click);
	this->lcard->Text = Convert::ToString(card);
	Game();
}

public: System::Void Card0() {
	//players numbers
	if (this->card == 0) {
		this->nextbtn->Enabled = true;
		if (this->click == 1) {
			this->pbox1->Enabled = false;
			this->output->Text = "The number of players is: " + Convert::ToString(this->pbox1->Text) + "\nPlease enter the player names into the boxes and click the Advanace button, followed by the Next button.";
			this->pnum = Convert::ToInt16(this->pbox1->Text);
			this->p1box->Enabled = true;
			this->p2box->Enabled = true;
			this->p3box->Enabled = true;
			this->p4box->Enabled = true;
			this->p5box->Enabled = true;
		}//1
		if (this->click==2) {
			//int p1[18] = {60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1};
			//int p2[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };
			p1ingame = 1, p2ingame = 1;
			if (pnum > 2) {
				p3ingame = 1;//int p3[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };
			}
			if (pnum > 3) {
				p3ingame = 1, p4ingame = 1;//int p4[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 }; 
			}
			if (pnum > 4) {
				p3ingame = 1, p4ingame = 1, p5ingame = 1;//int p5[18] = { 60,50,16,2,0,0,0,0,0,0,0,0,1,4,5,1500,1 };
			}
			this->p1box->Enabled = false;
			this->p2box->Enabled = false;
			this->p3box->Enabled = false;
			this->p4box->Enabled = false;
			this->p5box->Enabled = false;
			this->nextcard->Enabled = true;
			this->nextbtn->Enabled = false;
			this->click = 0;
		}//2
	}//card 0
	}
public:System::Void Card1() {
	if (this->card == 1) {
		this->cnum->ForeColor = System::Drawing::Color::Black;
		this->cnum->Text = "1";
		this->ctitle->Text = "STARTING STOCK AND CASH AND CROPPING RETURN";
		this->cardbox->Text = "Each farmer receives 60 cows, 50 ewes, 16 sows and 2 horses, and £1,500 in money, and the remainder of stock and cash is put in the auction and the bank.\nEach farmer receives a card representing 100 acres of roots, hay and pasture, and in turn chooses their crops for the remaining 10 fields of 10 acres each that they are farming, and obtains cards for them from the Auction Ring.";
		this->output->Text = "Players in turn please pick the amount of wheat, barley, oates, potatoes and ley using the options below and click Advance. Note that any unallocated crops will be made ley.";
		this->opt1->Enabled = true;
		this->opt2->Enabled = true;
		this->opt3->Enabled = true;
		this->opt4->Enabled = true;
		this->opt5->Enabled = true;
		this->op1->Enabled = true;
		this->op2->Enabled = true;
		this->op3->Enabled = true;
		this->op4->Enabled = true;
		this->op5->Enabled = true;
		this->op1->Text = "Wheat";
		this->op2->Text = "Barley";
		this->op3->Text = "Oates";
		this->op4->Text = "Potatoes";
		this->op5->Text = "Ley";
		this->nextbtn->Enabled = true;
		this->pcb->Text = this->p1box->Text;
		//move back and can't use while loops
		if (click == 1) {
			int a = Convert::ToInt16(this->opt1->Value);
			int b = Convert::ToInt16(this->opt2->Value);
			int c = Convert::ToInt16(this->opt3->Value);
			int d = Convert::ToInt16(this->opt4->Value);
			int e = Convert::ToInt16(this->opt5->Value);
			int f = a + b + c + d;
			this->output->Text = "You have selected: " + a + ", 10 acers of wheat, " + b + ", 10 acers of barley, " + c + ", 10 acres of oates, " + d + ", 10 acres of potatoes and " + e + ", 10 acres of ley.";
			if (f > 10) {
				this->output->Text = "You have selected more than 10, 10 acres fields. Please adjust your values";
				click -= 1;
			}
			else {
				this->cp1w = a, this->cp1b = b, this->cp1o = c, this->cp1p = d, this->cp1l = (10 - f);
				this->p1cows->Text = "60";
				this->p1ewes->Text = "50";
				this->p1sows->Text = "16";
				this->p1horses->Text = "2";
				this->p1wheat->Text = Convert::ToString(this->opt1->Value);
				this->p1barley->Text = Convert::ToString(this->opt2->Value);
				this->p1oates->Text = Convert::ToString(this->opt3->Value);
				this->p1potatoes->Text = Convert::ToString(this->opt4->Value);
				this->p1roots->Text = "1";
				this->p1hay->Text = "4";
				this->p1pasture->Text = "5";
				this->p1ley->Text = Convert::ToString(10 - f);
				this->pcb->Text = this->p2box->Text;
			}
		}//1
		if (click == 2) {
			int a = Convert::ToInt16(this->opt1->Value);
			int b = Convert::ToInt16(this->opt2->Value);
			int c = Convert::ToInt16(this->opt3->Value);
			int d = Convert::ToInt16(this->opt4->Value);
			int e = Convert::ToInt16(this->opt5->Value);
			int f = a + b + c + d;
			this->output->Text = "You have selected: " + a + ", 10 acers of wheat, " + b + ", 10 acers of barley, " + c + ", 10 acres of oates, " + d + ", 10 acres of potatoes and " + e + ", 10 acres of ley.";
			if (f > 10) {
				this->output->Text = "You have selected more than 10, 10 acres fields. Please adjust your values";
				click -= 1;
			}
			else {
				this->cp2w = a, this->cp2b = b, this->cp2o = c, this->cp2p = d, this->cp2l = (10 - f);
				this->p2cows->Text = "60";
				this->p2ewes->Text = "50";
				this->p2sows->Text = "16";
				this->p2horses->Text = "2";
				this->p2wheat->Text = Convert::ToString(this->opt1->Value);
				this->p2barley->Text = Convert::ToString(this->opt2->Value);
				this->p2oates->Text = Convert::ToString(this->opt3->Value);
				this->p2potatoes->Text = Convert::ToString(this->opt4->Value);
				this->p2roots->Text = "1";
				this->p2hay->Text = "4";
				this->p2pasture->Text = "5";
				this->p2ley->Text = Convert::ToString(10 - f);
				if (pnum > 2) { this->pcb->Text = this->p3box->Text; }
				else {
					this->opt1->Enabled = false;
					this->opt2->Enabled = false;
					this->opt3->Enabled = false;
					this->opt4->Enabled = false;
					this->opt5->Enabled = false;
					this->op1->Enabled = false;
					this->op2->Enabled = false;
					this->op3->Enabled = false;
					this->op4->Enabled = false;
					this->op5->Enabled = false;
					this->nextbtn->Enabled = false;
					this->nextcard->Enabled=true;
				}
			}
		}//2
		if (click == 3) {
			int a = Convert::ToInt16(this->opt1->Value);
			int b = Convert::ToInt16(this->opt2->Value);
			int c = Convert::ToInt16(this->opt3->Value);
			int d = Convert::ToInt16(this->opt4->Value);
			int e = Convert::ToInt16(this->opt5->Value);
			int f = a + b + c + d;
			this->output->Text = "You have selected: " + a + ", 10 acers of wheat, " + b + ", 10 acers of barley, " + c + ", 10 acres of oates, " + d + ", 10 acres of potatoes and " + e + ", 10 acres of ley.";
			if (f > 10) {
				this->output->Text = "You have selected more than 10, 10 acres fields. Please adjust your values";
				click -= 1;
			}
			else {
				this->cp3w = a, this->cp3b = b, this->cp3o = c, this->cp3p = d, this->cp3l = (10 - f);
				this->p3cows->Text = "60";
				this->p3ewes->Text = "50";
				this->p3sows->Text = "16";
				this->p3horses->Text = "2";
				this->p3wheat->Text = Convert::ToString(this->opt1->Value);
				this->p3barley->Text = Convert::ToString(this->opt2->Value);
				this->p3oates->Text = Convert::ToString(this->opt3->Value);
				this->p3potatoes->Text = Convert::ToString(this->opt4->Value);
				this->p3roots->Text = "1";
				this->p3hay->Text = "4";
				this->p3pasture->Text = "5";
				this->p3ley->Text = Convert::ToString(10 - f);
				if (pnum > 3) { this->pcb->Text = this->p4box->Text; }
				else {
					this->opt1->Enabled = false;
					this->opt2->Enabled = false;
					this->opt3->Enabled = false;
					this->opt4->Enabled = false;
					this->opt5->Enabled = false;
					this->op1->Enabled = false;
					this->op2->Enabled = false;
					this->op3->Enabled = false;
					this->op4->Enabled = false;
					this->op5->Enabled = false;
					this->nextbtn->Enabled = false;
					this->nextcard->Enabled = true;
				}
			}
		}//3
		if (click == 4) {
			int a = Convert::ToInt16(this->opt1->Value);
			int b = Convert::ToInt16(this->opt2->Value);
			int c = Convert::ToInt16(this->opt3->Value);
			int d = Convert::ToInt16(this->opt4->Value);
			int e = Convert::ToInt16(this->opt5->Value);
			int f = a + b + c + d;
			this->output->Text = "You have selected: " + a + ", 10 acers of wheat, " + b + ", 10 acers of barley, " + c + ", 10 acres of oates, " + d + ", 10 acres of potatoes and " + e + ", 10 acres of ley.";
			if (f > 10) {
				this->output->Text = "You have selected more than 10, 10 acres fields. Please adjust your values";
				click -= 1;
			}
			else {
				this->cp4w = a, this->cp4b = b, this->cp4o = c, this->cp4p = d, this->cp4l = (10 - f);
				this->p4cows->Text = "60";
				this->p4ewes->Text = "50";
				this->p4sows->Text = "16";
				this->p4horses->Text = "2";
				this->p4wheat->Text = Convert::ToString(this->opt1->Value);
				this->p4barley->Text = Convert::ToString(this->opt2->Value);
				this->p4oates->Text = Convert::ToString(this->opt3->Value);
				this->p4potatoes->Text = Convert::ToString(this->opt4->Value);
				this->p4roots->Text = "1";
				this->p4hay->Text = "4";
				this->p4pasture->Text = "5";
				this->p4ley->Text = Convert::ToString(10 - f);
				if (pnum > 4) { this->pcb->Text = this->p5box->Text; }
				else {
					this->opt1->Enabled = false;
					this->opt2->Enabled = false;
					this->opt3->Enabled = false;
					this->opt4->Enabled = false;
					this->opt5->Enabled = false;
					this->op1->Enabled = false;
					this->op2->Enabled = false;
					this->op3->Enabled = false;
					this->op4->Enabled = false;
					this->op5->Enabled = false;
					this->nextbtn->Enabled = false;
					this->nextcard->Enabled = true;
				}
			}
		}//4
		if (click == 5) {
			int a = Convert::ToInt16(this->opt1->Value);
			int b = Convert::ToInt16(this->opt2->Value);
			int c = Convert::ToInt16(this->opt3->Value);
			int d = Convert::ToInt16(this->opt4->Value);
			int e = Convert::ToInt16(this->opt5->Value);
			int f = a + b + c + d;
			this->output->Text = "You have selected: " + a + ", 10 acers of wheat, " + b + ", 10 acers of barley, " + c + ", 10 acres of oates, " + d + ", 10 acres of potatoes and " + e + ", 10 acres of ley.";
			if (f > 10) {
				this->output->Text = "You have selected more than 10, 10 acres fields. Please adjust your values";
				click -= 1;
			}
			else {
				this->cp5w = a, this->cp5b = b, this->cp5o = c, this->cp5p = d, this->cp5l = (10 - f);
				this->p5cows->Text = "60";
				this->p5ewes->Text = "50";
				this->p5sows->Text = "16";
				this->p5horses->Text = "2";
				this->p5wheat->Text = Convert::ToString(this->opt1->Value);
				this->p5barley->Text = Convert::ToString(this->opt2->Value);
				this->p5oates->Text = Convert::ToString(this->opt3->Value);
				this->p5potatoes->Text = Convert::ToString(this->opt4->Value);
				this->p5roots->Text = "1";
				this->p5hay->Text = "4";
				this->p5pasture->Text = "5";
				this->p5ley->Text = Convert::ToString(10 - f);
				
				this->opt1->Enabled = false;
				this->opt2->Enabled = false;
				this->opt3->Enabled = false;
				this->opt4->Enabled = false;
				this->opt5->Enabled = false;
				this->op1->Enabled = false;
				this->op2->Enabled = false;
				this->op3->Enabled = false;
				this->op4->Enabled = false;
				this->op5->Enabled = false;
				this->nextbtn->Enabled = false;
				this->nextcard->Enabled = true;
			}
		}//5
	}//if
}
public:System::Void Card2() {
	if (this->card == 2) {
		this->cnum->ForeColor = System::Drawing::Color::Black;
		this->cnum->Text = "1";
		this->ctitle->Text = "SEEDS AND FARMYARD MANURE";
		this->cardbox->Text = "Seeds. Purchase seeds for your clover leys on 30 acres for £100, which you pay to the bank. Purchase your seed potatoes at a cost of £15 for each acres which you are planting, and pay the money to the bank.\nFarmyard Manure. You require £10 worth of \"F.Y.M.\" for each acre of root and potatoes that you are growing this year. Purchase this from the outgoing farmer, and pay the money to the bank.";
		this->output->Text = "Click Advance to begin";
		this->nextbtn->Enabled = true;
		if (this->click == 1) {
			int i = 1;
			int aa[5]{ cp1l,cp2l,cp3l,cp4l,cp5l };
			int bb[5]{ cp1p,cp2p,cp3p,cp4p,cp5p };
			//string s[5]{ " "," "," "," ", " " };
			int m[5]{0,0,0,0,0}
			while (i <= pnum,i++) {
				float ss = 100 / 3.0*aa[i];
				int ss2 = 150 * bb[i];
				int fym = 100 * (bb[i] + 1);
				m[i] = ss + ss2 + fmy;
			}
			//do calcualtions and assign
		}
		//if for each click to see what happen to each player
		}//if
}

public:System::Void Game() {
	Card0();
	Card1();
	Card2();
}
public:System::Void Debt() {

}
public:System::Void Assign() {
	this->p1cows->Text = Convert::ToString(vp1c);
	this->p1ewes->Text = Convert::ToString(vp1e);
	this->p1sows->Text = Convert::ToString(vp1s);
	this->p1horses->Text = Convert::ToString(vp1h);
	this->p1money->Text = Convert::ToString(vp1m);

	this->p2cows->Text = Convert::ToString(vp2c);
	this->p2ewes->Text = Convert::ToString(vp2e);
	this->p2sows->Text = Convert::ToString(vp2s);
	this->p2horses->Text = Convert::ToString(vp2h);
	this->p2money->Text = Convert::ToString(vp2m);

	if (pnum > 2) {
		this->p3cows->Text = Convert::ToString(vp3c);
		this->p3ewes->Text = Convert::ToString(vp3e);
		this->p3sows->Text = Convert::ToString(vp3s);
		this->p3horses->Text = Convert::ToString(vp3h);
		this->p3money->Text = Convert::ToString(vp3m);
	}
	if (pnum > 3) {
		this->p4cows->Text = Convert::ToString(vp4c);
		this->p4ewes->Text = Convert::ToString(vp4e);
		this->p4sows->Text = Convert::ToString(vp4s);
		this->p4horses->Text = Convert::ToString(vp4h);
		this->p4money->Text = Convert::ToString(vp4m);
	}
	if (pnum > 4) {
		this->p5cows->Text = Convert::ToString(vp5c);
		this->p5ewes->Text = Convert::ToString(vp5e);
		this->p5sows->Text = Convert::ToString(vp5s);
		this->p5horses->Text = Convert::ToString(vp5h);
		this->p5money->Text = Convert::ToString(vp5m);
	}
}

}
};
}
