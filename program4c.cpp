#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter a positive number: ";
    cin>>n;
    do{
       sum=sum+i;
       i++;
      }while(i<=n);
    cout<<"Sum= "<<sum;
    return 0;
}
