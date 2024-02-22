//In this file you will find all of my work in regards to C++ that I have been doing since I have arrived at University.

#include <string>
#include <iostream>

using namespace std;

//Each Function name Matches up with each option on the Menu.

void WhichValueIsBigger() 
{
	float Value1;
	float Value2;

	system("cls");

	cout << "Please Enter the first Value" << endl;
	cin >> Value1;
	cout << "Please Enter the second Value" << endl;
	cin >> Value2;

	if (Value1 > Value2)
	{
		cout << "The first Value " << Value1 << " Is bigger " << endl;
	}
	else 
	{
		cout << "The second Value " << Value2 << " Is bigger " << endl;
	}

}

void IstheValueEvenorOdd() 
{
	int Value1;
	system("cls");

	cout << "Please enter a Value " << endl;
	cin >> Value1;

	if (Value1 % 2 == 0)
	{
		cout << Value1 << " is Even " << endl;
	}
	else
	{
		cout << Value1 << " is Odd " << endl;
	}


}

void IsthisaLeapYear() 
{

	int Year;
	system("cls");

	cout << "Please enter the Year " << endl;
	cin >> Year;

	if (((Year % 4 == 0) && (Year % 100 != 0)) || (Year % 400 == 0)) 
	{
		cout << Year << " Is a Leap Year " << endl;

	}
	else
	{
		cout << Year << " Is not a Leap Year " << endl;
	}

}

void ConversionofSecondsToHours()
{
	system("cls");
	int Seconds, Minutes, Hours;

	cout << "Please enter time in Seconds " << endl;
	cin >> Seconds;

	Minutes = Seconds / 60;
	Hours = Minutes / 60;

	cout << Seconds << " Seconds, is the Equivilent to " << int(Hours) << " Hours " << int(Minutes % 60) << " Minutes " << int(Seconds % 60) << " Seconds " << endl;


}

void WhatgradeDidYouAchive()
{ 
	system("cls");
	int Marks;

	cout << " Please enter your Module percentage " << endl;
	cin >> Marks;

		if (Marks >= 85)
		{
			cout << " Your grade is A* " << endl;
		}
		else if (Marks >= 70)
		{
			cout << " Your grade is A " << endl;
		}
		else if (Marks >= 60)
		{
			cout << " Your grade is B " << endl;
		}
		else if (Marks >= 50)
		{
			cout << " Your grade is C " << endl;
		}
		else if (Marks >= 40)
		{
			cout << " Your grade is D " << endl;
		}
		else if (Marks >= 30)
		{
			cout << " Your grade is E" << endl;
		}
		else if (Marks >= 0)
		{
			cout << " Your grade is F" << endl;
		}

}

void WorkingwithNumbers()
{
	system("cls");
	int first;
	int second;
	char choice;
	int sum;

	//Get input from user.
	cout << "Please enter the first number " << endl;
	cin >> first;

	cout << "Now enter the second number " << endl;
	cin >> second;

	//next give them the menu
	do
	{

		cout << "***************************************\n";

		cout << "Please pick an option from the menu " << endl;

		cout << "Add them (A) " << endl;

		cout << "Multiply them (B) " << endl;

		cout << "Divide them (C) " << endl;

		cout << "Exit (Q) " << endl;

		cout << "***************************************\n";
		cin >> choice;


		switch (toupper(choice))
		{
		case 'A':
			sum = first + second;
			cout << "The answer is: " << sum << endl;
			break;
			

		case 'B':
			sum = first * second;
			cout << "The answer is: " << sum << endl;
			break;



		case 'C':
			sum = first / second;
			cout << "The answer is: " << sum << endl;
			break;

		case 'Q':
			cout << "Goodbye" << endl;
			break;

		case 'D':
			cout << "Not a valid choice, choose again" << endl;
			cin >> choice;
			break;

		}



	} while (choice != 'q' && choice != 'Q');
	{
		system("cls");

	}
}



int main()
{


	char choice;

	do
	{
		cout << "***************************************\n";

		cout << "Please Select one option from the menu" << endl;

		cout << "Which Value is bigger? (A) " << endl;

		cout << "Is the value even or odd? (B) " << endl;

		cout << "Is the year a leap year? (C) " << endl;

		cout << "Conversion of seconds to hours (D) " << endl;

		cout << "What Grade did you Achieve? (E) " << endl;

		cout << "Working with Numbers (F) " << endl;

		cout << "Quit (Q)" << endl;

		cout << "***************************************\n";

		cin >> choice;
		switch (toupper(choice))
		{
		case 'A':
			WhichValueIsBigger();
			break;

		case 'B':
			IstheValueEvenorOdd();
			break;

		case 'C':
			IsthisaLeapYear();
			break;

		case 'D':
			ConversionofSecondsToHours();
			break;

		case 'E':
			WhatgradeDidYouAchive();
			break;

		case 'F':
			WorkingwithNumbers();
			break;

		case 'Q':
			break;

		}

	} while (choice != 'q' && choice != 'Q');
	{
		system("cls"); 
	}
	

	


}




