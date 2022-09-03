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

int main()
{
 Distance d;
 d.setFeet(256);
 d.setInches(2.2);
 cout<<"Before manipulation:"<<endl;
 cout<<d.getFeet()<<" "<<d.getInches()<<endl;
 char * p = (char *)&d;
 *p=1; // the MSB of the value stored in iFeet is forcibly set to 1. Hence 256 is now 257
 cout<<"After manipulation:"<<endl;
 cout<<d.getFeet()<<" "<<d.getInches()<<endl;
 return 0;
}
