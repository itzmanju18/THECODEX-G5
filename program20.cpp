#include <iostream>
using namespace std;

class A
{
 static int val;  // declare a static data member
 public:
  static int func ()  // create static member function
  {
   return val;
  }
};

int A :: val = 5;

int main ()
{
 cout << " The value of the val is: " << A::func()<<endl;
 return 0;
}
