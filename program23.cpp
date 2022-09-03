#include <iostream>
using namespace std;
class Sum
{
	private:
	 int a,b;
	public:
	 Sum(int a1, int b1)
	  {
		 a = a1;
		 b = b1;
	  }
	 int add()
	  {
		 return a+b;
	  }
};

int main()
{
	Sum S1(10,15); //S1 is the object of class Sum
	cout<< "the obtained SUM is = "<<S1.add();
	return 0;
}
