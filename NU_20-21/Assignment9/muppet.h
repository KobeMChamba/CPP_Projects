/*
 Class muppet for STL assignment.
 
 Author:        Daniel Birnbaum
 Last Modified:    May 18, 2020 (Daniel Birnbaum)
 */

#include <string>

using namespace std;

// write the muppet class definition here
class muppet
{
public: 
	muppet(string input); //arg = name of muppet 
	void display();
	void addSale(double input);
	string getName();
	int getNumSales();
	double getSumOfSales();
private:
	string name;
	int numofsales;
	//double sales[numofsales];
	//int cont;
	double total_income;
};