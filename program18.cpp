#include<iostream>
using namespace std;

class Square
{
 int length;
 public:
 void getLength(float len)
 {
 length=len;
 }
 void perimeter()
 {
 cout<<"Perimeter = "<<(length*4)<<endl;
 }
 friend void no_of_tiles(Square&); // object of class Square has to be passed to this function
};

void no_of_tiles(Square& obj)
{
 int area;
 cout<<"Enter the area of the floor:: ";
 cin>>area;
 cout<<"Number of tiles required = "<<area/(obj.length*obj.length)<<endl;
}

int main()
{
 Square s;
 s.getLength(12);
 s.perimeter();
 no_of_tiles(s);
 return 0;
}

