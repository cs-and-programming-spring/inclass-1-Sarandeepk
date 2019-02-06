
/***********************************************
* Name: Sarandeep Kaur
* Email: kaurs4@students.rowan.edu
***********************************************
* Purpose:
*  This program computes varies distance/temperatures/time, basic formulas for a cirlce, and displays characters.
***********************************************/

#include "stdafx.h"

#include <iostream>

using namespace std;


const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius and circumference to compute area of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to PI*radius*radius
	area = PI * radius *radius;

	//Compute circumference of circle
	circumference = 2 * PI *radius;

	//Display the area 
	cout << " The area is = " << area << "\n\n";


	//Display the circumference
	cout << " The circumference is = " << circumference << "\n\n";


	float miles, kilometers, meters, millimeters, centimeters;


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts kilometers to miles." << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input distance: ";
	cin >> kilometers;

	//Coversion from kilometers to miles
	miles = 1 * kilometers / 1.6;

	//Display the coversion
	cout << "The distance from kilometers to miles is: " << miles << "\n\n";


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts meters to varies distances ." << endl;
	cout << " ******************************************\n\n";

	//Get user input 
	cout << "Please input distance in meters: ";
	cin >> meters;

	//Coversion formulas
	kilometers = meters * 1000;
	centimeters = meters / 100;
	millimeters = meters / 1000;

	//Display the conversion
	cout << "The conversions are: " << kilometers << "km,  " << centimeters << "cm, " << millimeters << "mm " << "\n\n";


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program converts a temperature in Celsius to Fahrentheit." << endl;
	cout << " ******************************************\n\n";

	float celsius, fahrenheit;

	//Get user input
	cout << "Input your temperature in Celsius: " << endl;
	cin >> celsius;

	//Formula for conversion
	fahrenheit = (9 / 5) *celsius + 32;

	//Display the conversion
	cout << "Your temperature in Fahrenheit is: " << fahrenheit << "\n\n";


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program computes your given age to equivalent standards." << endl;
	cout << " ******************************************\n\n";

	const float days = 365.25;
	const float months = 12;
	const float hours = 24;
	const float mintues = 60;
	const float seconds = 60;

	int age;


	//Get user input
	cout << "How old are you?  " << endl;
	cin >> age;

	//Display to user 
	cout << "Okay, so you are... " << age * days << " days, " << age * months << " months, "
		<< age * hours << " hours, " << age * mintues << " minutes, and " << age * seconds
		<< " seconds old!! " << "\n\n";


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program displays my first intial." << endl;
	cout << " ******************************************\n\n";


	cout << "*   *" << endl;
	cout << "*  *" << endl;
	cout << "**" << endl;
	cout << "*  *" << endl;
	cout << "*    *" << endl;
	cout << "*      *" << endl;

	cout << "Program has ended" << endl;
	system("pause");

	return 0;
}

