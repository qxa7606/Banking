#include "Bank.h"
//#include <iostream>
//#include <string>

//using namespace std;

HQ::HQ(long int amm)
{
	hqMoney = amm;
}

bool HQ::addBranch(Branch br){
	
}

bool HQ::removeBranch(Branch br){
	
}

bool HQ::requestMoney(Branch br){
	
}

bool HQ::recieveMoney(Branch br){
	
}

Branch::Branch(long int ID, long int brMon){
	id = ID;
	brMoney = brMon;
}

bool Branch::addCustomer(Customer){

}

bool Branch::removeCustomer(Customer){

}

bool Branch::addEmployee(Customer){

}

bool Branch::removeEmployee(Customer){

}

Employee::Employee(long int id, Branch br, time_t, string first, string last, int sale,
					string position, string emial, string user, string pass, string gen, 
					string dob, int ss){
		
}

Employee::addCustomer(Customer cu){
	
}

Employee::removeCustomer(Customer cu){
	
}

Customer::Customer(long int ID, Branch br, int save, int check, string first, string last, 
			string email, string user, string pass, string gender, string dob, int ss){
		
}

bool Customer::withdrawChecking(int am){
	
}

bool Customer::depositChecking(int am){
	
}

bool Customer::withdrawSaving(int am){
	
}

bool Customer::withdrawSaving(int am){
	
}

int Customer::checkBalance(){
	
}

Transaction::Transaction(time_t ti, Employee empl, Customer cust, int am){
	
}


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
