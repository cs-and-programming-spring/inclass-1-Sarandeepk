


/***********************************************
* Name: Sarandeep Kaur
* Email: kaurs4@students.rowan.edu
***********************************************
* Purpose:
*  This program computes  varies distance and basic formulas for a cirlce.
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;
	
	
	//Display purpose of the program
	cout << " ******************************************"<<endl;
	cout << " This program takes in radius and circumference to compute area of circle" <<endl;
	cout << " ******************************************\n\n";
	
	//Get user input
	cout << "Please input radius: ";
	cin >> radius;
	
	//Compute area to PI*radius*radius
	area = PI* radius *radius; 

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
	kilometers = meters *1000;
	centimeters = meters / 100;
	millimeters = meters / 1000;

	//Display the conversion
	cout << "The conversions are: " << kilometers << "km,  "<< centimeters << "cm, " << millimeters << "mm " << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");
	
	return 0;
}