/*
Elena Chen Period 3
Project: Take in Data
Cout and Cin data from users
*/
//Libraries
#include <iostream>
#include <conio.h>
//namespcaes
using namespace std;
//functions
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << '\n';
}
//main
void main() {
	//variables
	int gradelevel; // what grade level are you in? answer w/ a number
	int grade; // what grade do you gave in english? answer w/ a number
	char teacher; // what's you english teacher's lastname initial? answer with a capital leter
	bool favor; // do you like english? 1=yes 0=no
	double price; // how much does a bottle of water cost? 
	//user queries
	cout << "what grade level are you in? answer w/ a number";
	cin >> gradelevel;
	cout << "what grade do you gave in english? answer w/ a number";
	cin >> grade;
	cout << "what's you english teacher's lastname initial? answer with a capital leter";
	cin >> teacher;
	cout << "do you like english? 1=yes 0=no";
	cin >> favor;
	cout << "what is the price of your water bottle?";
	cin >> price;
	//print out data
	cout << "your are in grade " << gradelevel;
	cout << "you have a " << grade << "in english";
	cout << "your teacher's last name starts with " << teacher;
	cout << "your favor towards enlish is " << favor;
	cout << "the price of your water bottle is" << price;
	pause();
}