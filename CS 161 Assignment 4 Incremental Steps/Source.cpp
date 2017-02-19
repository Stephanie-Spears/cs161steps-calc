#include <iostream>
#include <string>
#include <sstream>
#include <istream>



using namespace std;

int main()

{

	//declare variables
	int Int1;
	int Int2;
	int Step;
	int Total = 0;
	int RunTotal = 0;
	int i = 0;


	cout << "Enter Beginning Integer: ";
	cin >> Int1;

	while (cin.fail() || Int1 < 0)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input, value must be an integer." << '\n';
		cout << "Enter Beginning Integer: ";
		cin >> Int1;
	}

	cin.clear();
	cin.ignore(1000, '\n');

	cout << "Enter Ending Integer: ";
	cin >> Int2;


	while (cin.fail() || Int2 < 0 || Int1 > Int2)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input, value must be an integer and higher than the beginning value." << '\n';
		cout << "Enter Ending Integer: ";
		cin >> Int2;
	}

	cin.clear();
	cin.ignore(1000, '\n');

	cout << "Enter Step Progression: ";
	cin >> Step;


	while (cin.fail() || Step <= 0)
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input, value must be a positive integer greater than zero." << '\n';
		cout << "Enter Step Progression: ";
		cin >> Step;
	}


	cout << '\n';

	for (i = Int1; i < Int2; i = i + Step)
	{
		cout << i << endl;

	}


	//teacher said that a FOR loop would have been better in this case. Below is old one.

	//cout << Int1 << '\n';

	//while (i < Int2 && Step > 0)
	//{
	//	Int1 = (Int1 + Step);
	//	Total = Int1 + Step;
	//	cout << Int1 << '\n';
	//	i++;
	//	if (Total > Int2)
	//		break;
	//}

	system("PAUSE");
}