#include <iostream>
#include "Bank.h"
#include <string>

using namespace std;

int main()
{
	//Bank car(2012, "Green", "Chevy");
	Bank car;
	car.setColor("Red");
	int tm =  car.getYear();
	cout << tm <<"\t" << car.getColor() << endl;

	return 0;
}
