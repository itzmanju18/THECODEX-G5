#include <iostream>
using namespace std;
class Student
{
	char name[20], usn[10];
	float marks, perc;
	public:
	 void readDetails();
	 void printDetails();
	 void calcPercentage();
};

void Student::readDetails()
{
	cout<<"\nEnter name of student: " ;
	cin>>name;
	cout<<"Enter USN: ";
	cin>>usn;
	cout<<"Enter total marks out of 600: ";
	cin>>marks;
}
 void Student::calcPercentage()
 {
  perc=(marks/600)*100;
 }

 void Student::printDetails()
 {
  cout << "Student details:\n";
  cout << "Name: "<< name << "\nUSN: " << usn << "\nMarks: " << marks << "\nPercentage: " << perc<<endl;;
 }

int main()
{
 Student s[30];
 int n;
 cout << "Enter total number of students: ";
 cin >> n;
 for(int i=0; i< n; i++)
  {
    cout << "\nEnter details of student "<< i+1 <<endl;
    s[i].readDetails();
    s[i].calcPercentage();
  }
 	cout<<"-----------------------------------------------------------------"<<endl;
 	for(int i=0; i< n; i++)
 	{
 		cout << "\nDetails of student: " <<i+1<<endl;
 		s[i].printDetails();
 	}
 	return 0;
}

