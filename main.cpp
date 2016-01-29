#include <iostream>
#include "Bank.h"
#include <string>
#include <time.h>

using namespace std;

int main()
{
	//Bank car(2012, "Green", "Chevy");
	Bank car;
	car.setColor("Red");
	int tm =  car.getYear();
	//cout << tm <<"\t" << car.getColor() << endl;
	char date[9];
	_strdate(date);
	cout << date << endl;

	return 0;
}
