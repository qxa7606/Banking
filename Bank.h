#include <string>
#include <unordered_map>

using namespace std;

class HQ
{
	private:
		long int hqmMoney;
		unordered_map<long int, Branch> branches;

		bool sendMoney(int);
	public:
		HQ(long int);
		bool addBranch(Branch);
		bool removeBranch(Branch);
		bool requestMoney(int);
		bool recieveMoney(int);

};

class Branch
{
	private:
		long int id;
		long int brMoney;
		bool sendMoney(int);
	public:
		Branch(long int, long int);
		bool addCustomer(Customer);
		bool removeCustomer(Customer);
		bool addEmployee(Employee);
		bool removeEmployee(Employee);
		long int getID();
};

class Employee
{
	private:
		long int id;
		Branch br;
		string firstName;
		string lastName;
		int salary;
		final string position;
		string email;
		string username;
		string password;
		string gender;
		string DOB;
		int ssn;
	public:
		bool addCustomer(Customer);
		bool removeCustomer(Customer);
		
};

class Customer
{
	private:
		long int id;
		string firstName;
		string lastName;
		string email;
		string username;
		string password;
		string gender;
		string DOB;
		int ssn;
	public:
		bool withdrawMoney(int);
		bool depositMoney(int);
		int checkBalance();	
};

class Transaction
{
	private:
		string date;	


};


class Bank
{
	private:
		int year;
		string color;
		string brand;
	private:
		Bank(int year=2012, string color="Green", string brand="Chevy");
		int getYear(){return year;}
		string getColor(){return color;}
		string getBrand(){return brand;}
		void setYear(int);
		void setColor(string);
};
