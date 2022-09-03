#include <iostream>
using namespace std;
class Employee
{
 char name[20], empID[10];
 float salary, netSal;
 public:
  void readDetails();
  void netSalary();
  void printDetails();
};
void Employee::readDetails()
{
	cout<<"\nEnter name of the Employee: " ;
	cin>>name;
	cout<<"Enter Employee ID: ";
	cin>>empID;
	cout<<"Enter basic salary per month: ";
	cin>>salary;
}
void Employee::netSalary()
{
		float tax=0.0;
		if(salary<=25000)
			tax=0.05*salary;
		else if(salary<=80000)
			tax=0.07*salary;
		else
			tax=0.09*salary;
		netSal=(salary-tax);
}
void Employee::printDetails()
{
	cout << "\nEmployee details:\n";
	cout << "\nName: "<< name << "\nEmployee ID: " << empID << "\nBasic Salary " << salary << "\nNet Salary: " << netSal<<endl;;
}
int main()
{
	Employee emp[30];
	int n;
	cout << "Enter number of Employees: ";
	cin >> n;
	for(int i=0; i< n; i++)
	{
		cout << "\nEnter details of Employee " << i+1 << endl;
		emp[i].readDetails();
		emp[i].netSalary();
	}
	cout<<"-----------------------------------------------------------------"<<endl;
	for(int i=0; i< n; i++)
	{
		cout << "Details of Employee " << i+1 << endl;
		emp[i].printDetails();
	}
	return 0;
}
