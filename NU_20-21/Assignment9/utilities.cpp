/*
 This file contains functions used at the system and main level.
 
 Author:        Daniel Birnbaum
 Last Modified:    May 18, 2020 (Daniel Birnbaum)
 */

#include "utilities.h"

using namespace std;

// write your functions here
string FindMostSales(vector<muppet> most_sales_vector)
{
	int mostsales = 0;
	string result = "";
	for (int i = 0; i < most_sales_vector.size(); i++)
	{
		if (most_sales_vector[i].getNumSales() >= mostsales) 
		{
			mostsales = most_sales_vector[i].getNumSales();
			result = most_sales_vector[i].getName();
		}
	}
	return result;
}


string FindMostSumOfSales(vector<muppet> most_sales_vector)
{
	int mostsumofsales = 0;
	string result = "";
	for (int i = 0; i < most_sales_vector.size(); i++)
	{
		if (most_sales_vector[i].getSumOfSales() >= mostsumofsales)
		{
			mostsumofsales = most_sales_vector[i].getSumOfSales();
			result = most_sales_vector[i].getName();
		}
	}
	return result;
}
