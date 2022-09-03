#include <iostream>
using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Enter a positive number: ";
    cin>>n;
    while(i<=n)
    {
     sum=sum+i;
     i++;
    }
    cout<<"Sum= "<<sum;
    return 0;
}
