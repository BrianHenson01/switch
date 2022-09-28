// Your Name
// Date:
// Program Title:
// Program Description:

#include <iostream>
#include <string>


using namespace std;

// Named constants

int main()
{

	// Variable declaration
	int choice;

	//Program title and description for the user

	// User input
	cout << "Choose the corresponding letter for what task you want to complete " << endl;
	cout << "1 - Task 1" << endl;
	cout << "2 - Task 2" << endl;
	cout << "Enter the seleced letter here: " << endl;
	cin >> choice;

	// Calculations

	// Output to the screen
	switch (choice)
	{
	case '1':
		cout << "You chose 1" << endl;
		cout << "Good work" << endl;
		break;
	case '2':
		cout << "You chose 2" << endl;
		cout << "Good work" << endl;
		break;
	default:
		cout << "Invalid input, restart and try again." << endl;
	}

	return 0;
}