#include <iostream>
using namespace std;

int main()
{
 int a[100],n,sum=0;
 float avg;
 cout << "Enter size of array ::";
 cin>>n;
 cout<<"Enter array elements::";
 for(int i = 0; i < n; ++i)
 {
   cin>>a[i];
   sum= sum+a[i];
 }
 cout<<"Sum = "<<sum<<endl;
 avg=sum/n;
 cout<<"Average = "<<avg;
 return 0;
}
