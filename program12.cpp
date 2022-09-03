#include<iostream>
using namespace std;
class Distance
{
int iFeet;
float fInches;
public:
void setFeet(int);
int getFeet();
void setInches(float);
float getInches();
Distance add(Distance); // returns object of class Distance
};
void Distance::setFeet(int x)
{
iFeet=x;
}
int Distance::getFeet()
{
return iFeet;
}
void Distance::setInches(float y)
{
fInches=y;
}
float Distance::getInches()
{
return fInches;
}
Distance Distance::add(Distance d)
{
Distance sum;
sum.iFeet = this->iFeet + d.iFeet;
sum.fInches = this->fInches + d.fInches;
return sum;
}
int main()
{
Distance d1, d2, d3;
d1.setFeet(2);
d1.setInches(2.5);
d2.setFeet(3);
d2.setInches(1.5);
d3=d1.add(d2);
cout<<"Sum = "<<d3.getFeet()<<" feet "<<d3.getInches()<<" inches ";
return 0;
}
