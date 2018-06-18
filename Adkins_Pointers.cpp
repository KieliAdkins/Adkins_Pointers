/*
References
Kieli Adkins
CSC215
June 14, 2018
*/

// Including standard libraries
#include <iostream>
#include <string>

// Including std namespace
using namespace std;

// Declaring functions
void hacked(int* terroristScore, int* charityScore);
void numSequence( int* charityScore);
void wordSequence(int* charityScore);

// Declaring and initializing a pointer
int* terroristScore = 0;
int* charityScore = 0; 

// Assigning a score
int terrorist = 150000;
int charity = 50000;

/// Main function 
int main(int* terroristScore, int* charityScore)
{
	// Assigning pointer score
	terroristScore = &terrorist;
	charityScore = &charity;
	
	// Printing the information
	cout << "The Dark Eye Agency has struck again!\n"; 
	cout << "Their most recent acquisition of approximately $50,000 from True Ocean Charity have kickstarted the terrorist organizations activity.\n";
	cout << "Therefore you, a talented hacker, have been hired to steal the money from Dark Eye and move it back to True Ocean's account at Liberty Bank.\n";
	cout << "However, everytime that you incorrectly enter a number or word the True Ocean Charity loses $100.\n";
	cout << "The current balances in these accounts are:\n";
	cout << "True Ocean Charity: $" << charity << endl;
	cout << "Dark Eye Agency: $" << terrorist << endl; 

	// Pausing the program
	system("pause");

	// Calling the number hack sequence function
	numSequence(charityScore);

	// Calling the word hack sequence function
	wordSequence(charityScore);

	// Calling the hacked function
	hacked(terroristScore, charityScore);

	// Pausing the program
	system("pause");

	// Return to ensure program completion
	return 0; 
}

/// Number Hack Sequence Function
void numSequence(int* charityScore)
{
	// Defining the variables
	int guess;

	// Printing the information
	cout << "\nTo hack into the Dark Eye Agency's account please enter a number under 50.\n";
	cout << "Hint: The hack code is between the number 5 and 35.\n";
	cout << "<< ";

	// Capturing player's answer
	cin >> guess;

	// While loop regarding number guesses
	while (guess != 23)
	{
		// Printing the information
		cout << "\nWrong number, please re-enter your guess.\n";
		cout << "<< ";

		// Capturing the player's answer
		cin >> guess;

		// Removing funds
		charity -= 100; 
	}
 
	cout << "Your guess is correct!\n\n";

	// Return to ensure program completion
	return;
}

/// Word Hack Sequence Function
void wordSequence(int* charityScore)
{
	// Defining the variables
	string wordGuess;

	// Printing the information
	cout << "\nTo hack into the Dark Eye Agency's account please enter a secret code word.\n";
	cout << "Hint: The hack code is an ocean animal that is commonly known to eat jellyfish.\n";
	cout << "<< ";

	// Capturing player's answer
	cin >> wordGuess;

	// While loop regarding number guesses
	while (wordGuess != "turtle")
	{
		// Printing the information
		cout << "\nWrong word, please re-enter your guess.\n";
		cout << "<< ";

		// Capturing the player's answer
		cin >> wordGuess;

		// Removing funds
		charity -= 100;
	}

	cout << "Your guess is correct!\n\n";

	// Return to ensure program completion
	return;
}

/// Hacked Balance Function
void hacked(int* terroristScore, int* charityScore)
{
	// Switching the variables
	int temp = charity; 
	charity = terrorist; 
	terrorist = temp; 

	// Removing money from terrorist and into charity account
	charity = charity += terrorist; 
	terrorist = 0; 

	// Printing the information
	cout << "You have successfully hacked the terrorist's account.";
	cout << "The current balances in these accounts are:\n";
	cout << "True Ocean Charity: $" << charity << endl;
	cout << "Dark Eye Agency: $" << terrorist << endl;

	// Return to ensure program completion
	return;
}