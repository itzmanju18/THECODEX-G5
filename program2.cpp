#include <iostream>
using namespace std;
int main()
{
 char op;
 float num1, num2;
 cout<<"Enter the arithmetic expression:: ";
 cin>>num1>>op>>num2;
 switch(op)
  {
 	 case '+':
 		       cout<<num1<<" + "<<num2<< " = " <<num1+num2;
               break;
     case '-':
    	       cout<<num1<<" - "<<num2<<" = "<<num1-num2;
               break;
     case '*':
               cout<<num1<<" * "<<num2<<" = "<<num1*num2;
               break;
     case '/':
               if(num2==0)
               cout<<"Divide by zero error!!";
          else
               cout<<num1<<" / "<<num2<<" = "<<num1/num2;
               break;
     default:
               cout<<"Invalid Operator!!";
               break;
  }
 return 0;
}
