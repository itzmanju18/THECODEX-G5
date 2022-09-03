#include <iostream>
using namespace std;
class Demo
{
	public:
		static int A;
};

int Demo :: A =10;

int main()
{
	cout<<"\nValue of A: "<<Demo::A;
	return 0;
}
