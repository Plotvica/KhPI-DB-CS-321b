#include "HangmanGame.h"
#include "Hangman Funcions.h"



// check guess main values 
char* code_word = new char[0];
string display_guess;
int opened = 0;
int mistakes = 0;

bool Won = false;
bool Lose = false;
// check guess function for buttons 
void check(char response) {
	
	bool goodGuess = false;

	for (int i = 0;i < strlen(code_word);i++) {
		if (response == code_word[i]) {
			display_guess[i] = code_word[i];
			opened++;
			goodGuess = true;	
		}
	}

	if (!goodGuess) {
		mistakes++;
		DrawingDeadMan(mistakes);
	}

	if (opened == strlen(code_word)) {
		Won = true;
		display_guess = code_word;
		MessageBox::Show("You`ve Won ;)", "Rules");
		
	}
	else if (mistakes == 7) {
		Lose = true;
		display_guess = code_word;
		MessageBox::Show("You`ve Lose :(", "Rules");	
		
	}
	
}

// main function for from
void main() {

	srand(time(NULL));
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Hangman::HangmanGame form;
	Application::Run(% form);
	
}







// ONE PLAYER MOD
System::Void Hangman::HangmanGame::OnePlayerMod_Click(System::Object^ sender, System::EventArgs^ e)
{
	Won = false;
	Lose = false;
	opened = 0;
	mistakes = 0;
	 
	OnButtonsKeyboard();

	LoadRandomWord(code_word);
	toupperHangman(code_word);

	
	
	display_guess = code_word;
		
	for (int i = 0; i < str_len(code_word); i++) {
		display_guess[i] = '#';
	}

	OutPutGuees -> Text = Convert_string_to_String(display_guess);

	
	
}

// TWO PLAYERs MOD

System::Void Hangman::HangmanGame::InputButton_Click(System::Object^ sender, System::EventArgs^ e)
{
	
	code_word = Convert_String_to_char(InputTextBox->Text);
	toupperHangman(code_word);

	display_guess = code_word;
	for (int i = 0; i < str_len(code_word); i++) {
		display_guess[i] = '#';
	}

	OutPutGuees->Text = Convert_string_to_String(display_guess);
	

	picture_of_hangman->Show();
	keyboardPanel->Show();
}


System::Void Hangman::HangmanGame::TwoPlayersMod_Click(System::Object^ sender, System::EventArgs^ e)
{
	picture_of_hangman->Hide();
	keyboardPanel->Hide();

	
	OnButtonsKeyboard();

	Won = false;
	Lose = false;
	opened = 0;
	mistakes = 0;




	
}



// KEYBORAD functions 
System::Void Hangman::HangmanGame::keyboardPanel_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e)
{
	Bitmap^ zero_mistake = gcnew Bitmap("sprites/0.bmp");
	Bitmap^ one_mistake = gcnew Bitmap("sprites/1.bmp");
	Bitmap^ two_mistakes = gcnew Bitmap("sprites/2.bmp");
	Bitmap^ three_mistakes = gcnew Bitmap("sprites/3.bmp");
	Bitmap^ four_mistakes = gcnew Bitmap("sprites/4.bmp");
	Bitmap^ five_mistakes = gcnew Bitmap("sprites/5.bmp");
	Bitmap^ six_mistakes = gcnew Bitmap("sprites/6.bmp");
	Bitmap^ seven_mistakes = gcnew Bitmap("sprites/7.bmp");
	

	if (mistakes == 0) {
		picture_of_hangman->Image = zero_mistake;
	}
	else if (mistakes == 1) {
		picture_of_hangman->Image = one_mistake;
	}
	else if (mistakes == 2) {
		picture_of_hangman->Image = two_mistakes;
	}
	else if (mistakes == 3) {
		picture_of_hangman->Image = three_mistakes;
	}
	else if (mistakes == 4) {
		picture_of_hangman->Image = four_mistakes;
	}
	else if (mistakes == 5) {
		picture_of_hangman->Image = five_mistakes;
	}
	else if (mistakes == 6) {
		picture_of_hangman->Image = six_mistakes;
	}
	else if (mistakes == 7) {
		picture_of_hangman->Image = seven_mistakes;
	}
	
	// shut down the keyboard
	if (Won == true || Lose == true) {
		keyboardPanel->Enabled = false;
	}

}

System::Void Hangman::HangmanGame::A_button_Click(System::Object^ sender, System::EventArgs^ e )
{
	check('A');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	A_button->Enabled = false;
	
}
System::Void Hangman::HangmanGame::B_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('B');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	B_button->Enabled = false;

}
System::Void Hangman::HangmanGame::C_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('C');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	C_button->Enabled = false;
}
System::Void Hangman::HangmanGame::D_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('D');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	D_button->Enabled = false;
}
System::Void Hangman::HangmanGame::E_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('E');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	E_button->Enabled = false;
}
System::Void Hangman::HangmanGame::F_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('F');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	F_button->Enabled = false;
}
System::Void Hangman::HangmanGame::G_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('G');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	G_button->Enabled = false;
}
System::Void Hangman::HangmanGame::H_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('H');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	H_button->Enabled = false;
}
System::Void Hangman::HangmanGame::I_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('I');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	I_button->Enabled = false;
}
System::Void Hangman::HangmanGame::J_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('J');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	J_button->Enabled = false;
}
System::Void Hangman::HangmanGame::K_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('K');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	K_button->Enabled = false;
}
System::Void Hangman::HangmanGame::L_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('L');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	L_button->Enabled = false;
}
System::Void Hangman::HangmanGame::M_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('M');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	M_button->Enabled = false;
}
System::Void Hangman::HangmanGame::N_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('N');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	N_button->Enabled = false;
}
System::Void Hangman::HangmanGame::O_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('O');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	O_button->Enabled = false;
}
System::Void Hangman::HangmanGame::P_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('P');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	P_button->Enabled = false;
}
System::Void Hangman::HangmanGame::Q_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('Q');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	Q_button->Enabled = false;
}
System::Void Hangman::HangmanGame::R_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('R');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	R_button->Enabled = false;
}
System::Void Hangman::HangmanGame::S_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('S');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	S_button->Enabled = false;
}
System::Void Hangman::HangmanGame::T_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('T');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	T_button->Enabled = false;
}
System::Void Hangman::HangmanGame::U_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('U');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	U_button->Enabled = false;
}
System::Void Hangman::HangmanGame::V_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('V');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	V_button->Enabled = false;
}
System::Void Hangman::HangmanGame::W_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('W');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	W_button->Enabled = false;
}
System::Void Hangman::HangmanGame::X_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('X');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	X_button->Enabled = false;
}
System::Void Hangman::HangmanGame::Y_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('Y');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	Y_button->Enabled = false;
}
System::Void Hangman::HangmanGame::Z_button_Click(System::Object^ sender, System::EventArgs^ e)
{
	check('Z');
	OutPutGuees->Text = Convert_string_to_String(display_guess);
	Z_button->Enabled = false;
}








// about game
System::Void Hangman::HangmanGame::aboutToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) 
{
	author();
}
// game rules 
System::Void Hangman::HangmanGame::Rules_Click(System::Object^ sender, System::EventArgs^ e) 
{
	rules();
}
// exit bar
System::Void Hangman::HangmanGame::exitToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	
	Application::Exit();
	delete[] code_word;

}