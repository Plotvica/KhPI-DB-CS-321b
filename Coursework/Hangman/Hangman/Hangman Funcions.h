#pragma once
#include <iostream>
#include <algorithm>
#include <string>
#include <fstream>
#include <vector>
#include "windows.h";
using namespace System::Windows::Forms;
using namespace System;
using namespace std;


void DrawingDeadMan(int incorrect_answer); // Draw function
string LoadRandomWord(); // Get lib word function
void rules(); // rules menu
void author(); // rights


// Convert functions 
std::string& Convert_String_to_string(String^ s, std::string& os); //convert System::string^ TO std::string

String^ Convert_string_to_String(std::string& os, String^ s); //convert std::string TO System::string^

std::string& Convert_String_to_string(String^ s); //convert System::string^ TO std::string

String^ Convert_string_to_String(std::string& os); //convert std::string TO System::string^

System::String^ Convert_char_to_String(char* ch); //convert char* TO System::string^

char* Convert_String_to_char(System::String^ string); //convert System::string^ TO char*