/*
 Class muppet for STL assignment.
 
 Author:        Daniel Birnbaum
 Last Modified:    May 18, 2020 (Daniel Birnbaum)
 */

#include <iostream>
#include <string>
#include "muppet.h"

using namespace std;

// write the muppet member functions here
muppet::muppet(string input)
{
	name = input;
	numofsales = 0;
	total_income = 0;
}

/*
void muppet::read()
{
	in_file >> name;

	in_file >> numofsales;

	int x = numofsales;
	while (x > 0) {
		double nextsale;
		in_file >> nextsale;
		totalincome += nextsale;
		x--;
	}
}
*/

void muppet::display()
{
	cout << "Salesperson name: " << name << endl;
	cout << "Number of sales: " << numofsales << endl;
	cout << "Total income: " << total_income << endl;
}


void muppet::addSale(double input)
{
	numofsales++;
	total_income += input;
}

string muppet::getName()
{
	return name;
}
int muppet::getNumSales()
{
	return numofsales;
}
double muppet::getSumOfSales()
{
	return total_income;
}