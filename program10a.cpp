#include<iostream>
using namespace std;
void area(float r);
void area(float b, float h);
void area(int l, int b);

int main()
{
 int length,breadth;
 float base, height, radius;

 cout<<"Enter the radius of circle:: ";
 cin>>radius;
 area(radius);

 cout<<"\nEnter length of base and height of triangle:: ";
 cin>>base>>height;
 area(base, height);

 cout<<"\nEnter length and breadth of rectangle:: ";
 cin>>length>>breadth;
 area(length,breadth);
 return 0;
}

void area(float r)
{
 cout<<"Area of circle :: "<<(3.14*r*r)<<endl;
}

void area(float b, float h)
{
 cout<<"Area of triangle :: "<<(0.5*b*h)<<endl;
}

void area(int l, int b)
{
 cout<<"Area of rectangle :: "<<(l*b)<<endl;
}
