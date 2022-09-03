#include<iostream>
using namespace std;
class HelloWorld
{
 public:
 void show(int=1); // default values of parameter is set to 1
};

void HelloWorld::show(int p)
{
 for(int i=1; i<=p; i++)
 cout<<"Hello World"<<endl;
}
int main()
{
 HelloWorld obj1;
 cout<<"Without parameters::"<<endl;
 obj1.show();  // no parameter is passed. Hence default value of 1 is considered
 cout<<"Passing parameter '3' ::"<<endl;
 obj1.show(3); // the value passed overrides the default value. Hence p=3
 return 0;
}
