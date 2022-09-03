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
 Distance * dPtr;
 dPtr=&d;
 dPtr->setFeet(3);
 dPtr->setInches(2.5);
 cout<<dPtr->getFeet()<<" feet "<<dPtr->getInches()<<" inches ";
 return 0;
}

