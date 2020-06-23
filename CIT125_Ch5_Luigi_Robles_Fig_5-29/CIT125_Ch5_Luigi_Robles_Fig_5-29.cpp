// CIT125_Ch5_Luigi_Robles_Fig_5-29.cpp : This file contains the 'main' function. Program execution begins and ends there.
// CIT125 Luigi Robles
// Ch.5 Pg.142 Figure 5-29
// 6-22-2020 Summer Term

#include <iostream> // preprocessing directive
using namespace std;
#include <iomanip> // directive to use setprecisoin manipulator

int main()
{
	// Declaring and defaulting variables
	const double DISCOUNT_RATE = 0.1; // named constant for Discount Rate
	const double SHIP_CHG1 = 0.99;	// named constant for Shipping charge 1
	const double SHIP_CHG2 = 4.99; // named constant for Shipping charge 2
	double amtOwed = 0.0; 
	char member = ' ';

	// enter input items
	// input part of IPO
	cout << "Amount owed before any discount and shipping: ";
	cin >> amtOwed;
	cout << "Premier Club member (Y/N)? ";
	cin >> member;

	// subtract discount, if appropriate 
	if (toupper(member) == 'Y')
		amtOwed -= amtOwed * DISCOUNT_RATE;
	//end if

	// add shipping 
	if (amtOwed >= 100.0)
		amtOwed += SHIP_CHG1;
	else
	amtOwed += SHIP_CHG2;
	//end if

	// display finaly amount owed
	cout << fixed << setprecision(2);
	cout << "Amount owed after any discount and shipping: "
	<< amtOwed << endl;

	return 0;
	// end of main function

}

