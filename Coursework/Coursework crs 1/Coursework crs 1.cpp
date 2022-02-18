#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include "windows.h";

using namespace std;



void DrawingDeadMan(int incorrect_answer) {

    if (incorrect_answer == 1) {
        cout << "|==" << endl;
        cout << "| |" << endl;
    }
    else if (incorrect_answer == 2) {
        cout << "|==" << endl;
        cout << "| |" << endl;
        cout << "| ()" << endl;

    }
    else if (incorrect_answer == 3) {
        cout << "|==" << endl;
        cout << "| |" << endl;
        cout << "| ()" << endl;
        cout << "|  |" << endl;
    }
    else if (incorrect_answer == 4) {
        cout << "|==" << endl;
        cout << "| |" << endl;
        cout << "| ()" << endl;
        cout << "| \|" << endl;
    }
    else if (incorrect_answer == 5) {
        cout << "|==" << endl;
        cout << "| |" << endl;
        cout << "| ()" << endl;
        cout << "| \|/" << endl;
    }
    else if (incorrect_answer == 6) {
        cout << "|==" << endl;
        cout << "| |" << endl;
        cout << "| ()" << endl;
        cout << "| \|/" << endl;
        cout << "| /" << endl;
    }
    else if (incorrect_answer == 7) {
        cout << "|==" << endl;
        cout << "| |" << endl;
        cout << "| ()" << endl;
        cout << "| \|/" << endl;
        cout << "| //" << endl;
     
    }
}

string LoadRandomWord(string path)
{
    int lineCount = 0;
    string word;
    vector<string> v;
    ifstream reader(path);
    if (reader.is_open()){

        while (getline(reader, word))
            v.push_back(word);

        int randomLine = rand() % v.size();

        word = v.at(randomLine);
        reader.close();
    }
    return word;

}



void rules(){

    cout << " Просто загули і все :) \n";

}


void author(){

    cout << " Plotva\n";

}



void play_game(int mode) {

    string code_word;
    string display_guess;
    if (mode == 1) 
        code_word = LoadRandomWord("words.txt");
    else  
        cin >> code_word;
    display_guess = code_word;
   // cout << code_word << endl;
    for (int i = 0; i < code_word.length(); i++) {
        display_guess[i] = '#';
    }
     cout << display_guess << endl;

    int opened = 0;
    int mistakes = 0;

    while (opened < code_word.length() and mistakes < 7){

        cout << "Miss: " << mistakes << " : ";
        cout << "Enter a letter in word ";
        cout << display_guess << " : ";
        char response;
        cin >> response;



        bool goodGuess = false;
        bool duplicate = false;

        for (int i = 0;i < code_word.length();i++)

            if (response == code_word[i])

                if (display_guess[i] == code_word[i]) {
                    cout << response << " is already in the word.\n";
                    duplicate = true;
                    break;
                }

                else {
                    display_guess[i] = code_word[i];
                    opened++;
                    goodGuess = true;
                }

        if (duplicate)
            continue;
        if (!goodGuess){
            mistakes++;
            DrawingDeadMan(mistakes);
            cout << response << " is not in the word.\n";
        }

    }
    cout << "Yes, the word was " << code_word << "." << endl;

}

    



int main()
{
    srand(time(NULL));
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int menu_button;
    while (true) {

        cout << "1 – Гра для одного гравця, 2 - Гра для двох, 3 - Правила гри, 4 – Автор, 0 - Вийти ";
        cin >> menu_button;

        if (menu_button == 1) {
            play_game(1);
        }
        else if (menu_button == 2) {
            play_game(2);
        }
        else if (menu_button == 3) {
            rules();
        }
        else if (menu_button == 4) {
            author();
        }
        else if (menu_button == 0) {
            exit(0);
        }

    }
}


