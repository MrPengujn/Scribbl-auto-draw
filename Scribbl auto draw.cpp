#include <iostream>
#include <Windows.h>
#include <string>
#include "Bridge.h"

void findMatch(std::string tempWord) {

	if (tempWord == "cat") {
		cat();
		return;
	}
	std::cout << "No scripts for \"" << tempWord << "\"." << std::endl;
}

int main()
{
	MessageBoxA(NULL, "VERSION 0.0.1\n\nType the word in the console.", "Scribbl script by Itsuki", MB_OK);
	while (TRUE) {
		std::string tempWord;
		std::cout << "Please enter the word (lower case only) : " << std::endl;
		std::cin >> tempWord;
		findMatch(tempWord);
	}
}