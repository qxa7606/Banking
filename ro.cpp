#include <iostream>
#include <string>
//#include <ctime>

using namespace std;

int main()
{
//clock_t start = clock();
//tm* my_time;

//get current time in format of time_t
time_t t = time(NULL);
//my_time = localtime(&t);
//cout << "Year " << 1900 + my_time->tm_year << endl;
//cout << "Month " << my_time->tm_mon << endl;

//show the value stored in t
cout << "Value of t " << t << endl;

//convert time_t to char*
char* charTime = ctime(&t);

//display current time
cout << "Now is " << charTime << endl;


	return 0;
}
