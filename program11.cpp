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
  int feet;
  float inches;
  Distance d;
  cout<<"How tall are you?? "<<endl;
  cout<<"Enter feet: ";
  cin>>feet;
  cout<<"Enter inches: ";
  cin>>inches;
  d.setFeet(feet);
  d.setInches(inches);
  cout<<"height = "<<d.getFeet()<<" feet "<<d.getInches()<<" inches "<<endl;
  return 0;
}

