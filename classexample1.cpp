#include <iostream>

using namespace std;

int displayMenu();
void displayGoodMorning(string msg);

int main()
{
	int menuSelection;
	do
	{
		menuSelection = displayMenu();
		switch (menuSelection)
		{
		case 1:
			displayGoodMorning("Good morning.");
			break;
		case 2:
			displayGoodMorning("Buongiorno.");
			break;
		case 3:
			displayGoodMorning("Buenos dias.");
			break;
		case 4:
			displayGoodMorning("Guten morgen.");
			break;
		case 5:
			displayGoodMorning("Bonjour.");
			break;
		case 6:
			displayGoodMorning("Goodbye!");
			break;
		}

	} while (menuSelection != 6);
    return 0;
}

int displayMenu()
{
	int answer;
	cout << endl;
	cout << "Menu Selection" << endl;
	cout << "1. English" << endl;
	cout << "2. Italian" << endl;
	cout << "3. Spanish" << endl;
	cout << "4. German" << endl;
	cout << "5. French" << endl;
	cout << "6. End the Program" << endl;
	cout << "Enter your selection [1 - 6]: ";
	while (!(cin >> answer) || !(answer >= 1 && answer <= 6))
	{
		cout << "Invalid selection, please select [1 - 6]: ";
		cin.clear();
		cin.ignore(100, '\n');
	}
	return answer;
}

void displayGoodMorning(string msg)
{
	cout << "\"" << msg << "\"" << endl;
}
