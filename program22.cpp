#include <iostream>
using namespace std;
class demo
{
   private:
    int a, b ;
   public:
    demo()
    {
      a = 10;
      b = 20;
    }
    void display()
    {
      cout<<"a = "<< a <<endl;
      cout<<"b = "<< b <<endl;
    }
};
int main()
{
   demo obj;
   obj.display();
   return 0;
}

