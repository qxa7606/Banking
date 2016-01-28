#include "Bank.h"
//#include <iostream>
//#include <string>

//using namespace std;

Bank::Bank(int yr, string clr, string brd)
{
	year=yr; color=clr ; brand=brd;
}

void Bank::setYear(int yr)
{
	year = yr;
}

void Bank::setColor(string clr)
{
	color = clr;
}
