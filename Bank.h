#include <string>
#include <map>
//#include <ctime>

using namespace std;

class HQ
{
	private:
		long int hqMoney;
		map<long int, Branch> branches;

		bool sendMoney(int);
	public:
		HQ(long int);
		int gethqMoney(){return hqMoney;}
		map<long int, Branch> getBranches(){return branches;}
		
		bool addBranch(Branch);
		bool removeBranch(Branch);
		bool requestMoney(int);
		bool recieveMoney(int);

};

class Branch
{
	private:
		map<long int, Customer> customers;
		map<long int, Employee> employees;
		long int id;
		long int brMoney;
		bool sendMoney(int);
	public:
		Branch(long int, long int);
		long int getId(){return id;}
		int getBrMoney(){return brMoney;}
		bool getSendMoney(){return sendMoney;}

		bool addCustomer(Customer);
		bool removeCustomer(Customer);
		bool addEmployee(Employee);
		bool removeEmployee(Employee);
};

class Employee
{
	private:
		long int id;
		Branch branch;
		time_t employeeSince;
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
		Employee(long int, Branch, time_t, string, string, int, 
			string, string, string, string, string, string, int);	
		long int getId(){return id;}
		Branch getBranch(){return branch;}
		time_t getEmployeeSince(){return employeeSince;}
		string getFirstName(){return firstname;}
		string getLastName(){return lastname;}
		int getSalary(){return salary;}
		string getPosition(){return position;}
		string getEmail(){return email;}
		string getUsername(){return username;}
		string getPassword(){return password;}
		string getGender(){return gender;}
		string getDOB(){return DOB;}
		int getSsn(){return ssn;}

		bool addCustomer(Customer);
		bool removeCustomer(Customer);
		
};

class Customer
{
	private:
		long int id;
		Branch branch;
		int saving, checking;
		string firstName;
		string lastName;
		string email;
		string username;
		string password;
		string gender;
		string DOB;
		int ssn;
	public:
		Customer(long int, Branch, int, int, string, string, string, string, string, 
				string, string, int);
		long int getId(){return id;}
		Branch getBranch(){return branch;}
		string getfirstName(){return firstName;}
		string getlastName(){return lastName;}
		string getEmail(){return email;}
		string getUsername(){return username;}
		string getPassword(){return password;}
		string getGender(){return gender;}
		string DOB(){return DOB;}
		int getSsn(){return ssn;}
		int getSavings(){return saving;}
		int getCheckings(){return checking;}
		int getBalance(){return (saving+checking);}

		bool withdrawChecking(int);
		bool depositChecking(int);
		bool withdrawSaving(int);
		bool withdrawSaving(int);
		int checkBalance();	
};

class Transaction
{
	private:
		time_t date;
		Employee doneBy;
		Customer cust;
		int moneyInvolved;
	public:
		Transaction(time_t, Employee, Customer, int);
		time_t getDate(){return date;}
		Employee getEmployee(){return doneBy;}
		Customer getCust(){return cust;}
		int getMoney(){return moneyInvolved;}
};



