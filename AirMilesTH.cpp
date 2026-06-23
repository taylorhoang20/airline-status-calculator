#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	int segments_flown, miles_flown;
	string P = "Platinum", G = "Gold", S = "Silver", M = "Member";

	cout << "Input number of segments flown: ";
	cin >> segments_flown;
	if (segments_flown < 0)
	{
		cout << "Invalid input. Please enter a valid number," << endl;
		cout << "Input number of segments flown: ";
		cin >> segments_flown;
	}
	cout << "Input number of miles flown: ";
	cin >> miles_flown;
	if (miles_flown < 0)
	{
		cout << "Invalid input. Please enter a valid number.";
		cout << "input number of miles flown: ";
		cin >> miles_flown;
	}
	cout << endl;
	if (segments_flown >= 120 || miles_flown >= 75000)
		cout << "Elite status: " << P;
	else if (segments_flown >= 80 && segments_flown <= 119 || miles_flown >= 50000 && miles_flown <= 74999)
		cout << "Elite status: " << G;
	else if (segments_flown >= 40 && segments_flown <= 79 || miles_flown >= 25000 && miles_flown <= 49999)
		cout << "Elite status: " << S;
	else if (segments_flown >= 0 && segments_flown <= 39 || miles_flown >= 0 && miles_flown <= 24999)
		cout << "Elite status: " << M;

	return 0;
}