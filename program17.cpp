#include <iostream>
using namespace std;
class Test
{
   public:
      int a;
   mutable int b;
   Test(int x, int y)
   {
      a=x;
      b=y;
   }
   void seta(int x)
   {
      a = x;
   }
   void setb(int y)
   {
      b = y;
   }
   void disp()
   {
      cout<<endl<<"a: "<<a<<" b: "<<b<<endl;
   }
};

int main()
{
   const Test t(10,20);
   cout<<t.a<<" "<<t.b<<"\n";
   // t.a=30; //Error occurs because a can not be changed, because object is constant.
   //b still can be changed, because b is mutable.
   t.b=100;
   cout<<t.a<<" "<<t.b<<"\n";
   return 0;
}
