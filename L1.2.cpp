﻿// L1.4.cpp : Defines the entry point for the console application.
/*
This program converts currency

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

int main()
{
	constexpr double y_per_d = .0089;
	constexpr double e_per_d = 1.18;
	constexpr double p_per_d = 1.32;
	constexpr double c_per_d = 0.15;
	constexpr double k_per_d = 0.16;
	double amt = 1;
	char currency = ' ';

	cout << "Please enter an amount followed by a currency(y,e,p,c,k):\n";
	cin >> amt >> currency;

	switch (currency) {
	case 'y':
		cout << amt*y_per_d << "$ == " << amt << "yen\n";
		break;
	case 'e':
		cout << amt*e_per_d << "$ == " << amt << "euro(s)\n";
		break;
	case 'p':
		cout << amt*p_per_d << "$ == " << amt << "pound(s)\n";
		break;
	case 'c':
		cout << amt*c_per_d << "$ == " << amt << "yuan";
		break;
	case 'k':
		cout << amt*k_per_d << "$ == " << amt << "krones";
		break;
	default:
		cout << "Sorry, I don't recognize that currency.\n";
		break;
	}
	keep_window_open();
    return 0;
}

