#include<iostream>
using namespace std;
int add(int, int);
int add(int, int, int);

int add(int a, int b)
 {
   return (a+b);
 }
 int add(int a, int b, int c)
 {
   return (a+b+c);
 }

int main()
{
  int sum,sum1;
  sum = add(20,30);
  sum1 = add(30,40,50);
  cout<<"Sum of 20 and 30 = "<<sum<<endl;
  cout<<"Sum of 30,40 and 50 = "<<sum1<<endl;
  return 0;
 }


