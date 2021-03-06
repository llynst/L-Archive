// L1.5.cpp : Defines the entry point for the console application.
/*
This program produces a simple form letter based on user input (whatever that means)
èl Bulshevand
11/17/17
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;
inline void keep_window_open() { char ch; cin >> ch; }

bool gender_function(char friend_gender)		//function that takes in the parameter of user input's gender, and checks if it is one of the accepted inputs 
{

	int gender_counter = 0;
	bool match = false;

	char gen_ray[] = { 'm', 'M', 'f', 'F', 'o', 'O', '0' };  //array of all accepted responses

	do
	{
		char x = gen_ray[gender_counter];		//assigning current position in counter to a variable

		if (x == friend_gender)					//testing variable for compatibility with input
			match = true;
		else
			gender_counter++;					//runs again if incorrect input
	} while (gender_counter < 7 && match != true);

	if (match == false)			//if counter reaches limit, the input was not correct. returns false
		return false;
	else
		return true;
}

bool check_age(int age) {		//calls age entered by user
	if (age > 130 || age < 0)
		return false;			//returns false if age is too high or too low
	else
		return true;
}

int main()
{

	string first_name, friend_name;		//initialization
	char friend_gender = 4;
	int age;

	cout << "Please enter the first name of the person you want to write to (followed by 'enter'):\n";		//prompts user to enter name of leter recipient
	cin >> first_name;																						//inputs as value
	cout << "Please enter the name of a mutual friend (followed by 'enter'):\n";
	cin >> friend_name;
	cout << "Please enter the gender of the friend.  Male, female, or other(m,f,o) (followed by enter):\n";
	cin >> friend_gender;

	while (gender_function(friend_gender) == false) {		//while loop that tests to make sure that the friend's gender is a "valid" gender, calling gender_function(xD)
		cout << "oops you fucked up a bit there friendo.\n"
			<< "Try Again?\n";
		cin >> friend_gender;
		gender_function(friend_gender);						//runs again before looping to check if it is still false
	}


	cout << "Please enter the age of recipient (followed by 'enter'):\n";
	cin >> age;

	while ((check_age(age)) == false) {								//while loop to check age input isn't too high or low, using function
		cout << "Wowee that doesn't seem correct, try again?\n";
		cin >> age;
	}


	cout << "Dear " << first_name << ",\n"									//outputs message with the name
		<< "	What is up with it? My fellow human.  How are the wife and kids and the kids' wives and kids?  Can't wait to hear about it all when I see you again.\n"
		<< "It's been a long day, without you my friend.  But i'll tell you all about it when I see you again, when I see you again.  Yeah. Uh. *Wiz Khalifa starts rapping*\n"
		<< "Never forget:  Forgo the call of ego transcend the perception of the observer.  Simply live; improving oneself.\n"
		<< "Have you seen " << friend_name << " lately?  My fellow human lookin hella swole I tell you what...lookin hella sexy\n";

	if (friend_gender == ('m') || friend_gender == ('M'))		//outputs line with different pronouns, according to gender
		cout << "Speaking of " << friend_name << ", if you see him pelase ask him to call me.  We need to crack open some cold ones with the rest of the boys.\n";

	if (friend_gender == ('f') || friend_gender == ('F'))
		cout << "Speaking of " << friend_name << ", if you see her pelase ask her to call me.  I need to tell her that I love her very much.\n";

	if (friend_gender == ('o') || friend_gender == ('O') || friend_gender == ('0'))
		cout << "Speaking of " << friend_name << ", if you see them pelase ask them to call me.  I need to tell them that they are valid and great.\n";

	cout << "I hear you just had a birthday and are " << age << " years old now.  Shit's crazy right?  People be living and dying constantly, relentlessly.";

	if (age <= 12)
		cout << " Next year you will be " << age + 1 << "!\n";
	if (age == 17)
		cout << " Next year you will be able to vote.\n";
	if (age >= 70)
		cout << " I hope you are enjoying retirement.\n";

	cout << "\nYours sincerly,\n"
		<< "\n"
		<< "èl\n\n\n";



	void keep_window_open();
	return 0;
}