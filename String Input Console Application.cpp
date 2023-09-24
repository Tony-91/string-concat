//============================================================================
// Name        : String.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

int main() {
	// use a for loop to repeat the process three times,
	// allowing the user to enter two strings for each iteration.
    for (int i = 1; i <= 3; i++) {
        std::string input1, input2;

        // Prompt the user for the first string input
        std::cout << "Enter the first string for input " << i << ": ";
        std::cin >> input1;

        // Prompt the user for the second string input
        std::cout << "Enter the second string for input " << i << ": ";
        std::cin >> input2;

        // Concatenate the strings
        // Concatenates the two strings with a space in between.
        std::string result = input1 + " " + input2;

        // Print the concatenated string
        std::cout << "Concatenated string for input " << i << ": " << result << std::endl;
    }

    return 0;
}

