// Trifecta.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
#include "function.cpp"
using namespace std;
int main()
{

	bool carType;
	int doors;
	int option;
	string color;
	cout << "Welcome to the Vehicle Object Creator.\n";
	cout << "Do you drive a car or truck? 1 for car 2 for truck\n";
	cin >> option;
	if (option == 1) {
		carType = true;
	}
	else {
		carType = false;
	}
	cout << "How many doors does it have?\n";
	cin >> doors;
	cout << "What color is your Vehicle? black/blue/red/silver?\n";
	cin >> color;
	createinitobj(carType, color, doors);
	GetDetails();
	return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
