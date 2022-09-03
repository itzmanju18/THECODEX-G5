#include<iostream>
using namespace std;

int main()
{
  float a,b;
  int ch;
  cout<<" ::AREA OF PLANES:: \n"<<endl;
  while(1)
  {
   cout<<"calculate Area of: \n";
   cout<<"1.CIRCLE \n2:TRIANGLE \n3:RECTANGLE \n ";
   cout<<"\n Enter your choice:: ";
   cin>>ch;
   switch(ch)
    {
     case 1: cout<< "Enter radius of CIRCLE::";
     cin>>a;
     cout<<"Area of the CIRCLE = "<<3.14*a*a<<endl;
     break;
     case 2: cout<<"Enter base and height of TRIANGLE::"<<endl;
     cin>>a>>b;
     cout<<"Area of the TRIANGLE = "<<0.5*a*b<<endl;
     break;
     case 3: cout<<"Enter length and breadth of RECTANLE::"<<endl;
     cin>>a>>b;
     cout<<"Area of the RECTANGLE = "<<a*b<<endl;
     break;
     default:exit(0);
		cout<<"Invalid choice";
    }
   }
   return 0;
}

