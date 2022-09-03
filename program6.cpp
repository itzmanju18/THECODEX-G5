#include<iostream>
using namespace std;

int main()
{
  int m,n,a[10][10],i,j,high;
  cout<<"Enter no. of rows and columns:\n";
  cin>>m>>n;
  cout<<"Enter matrix:\n";
  for(i=0;i<m;++i)
  {
    for(j=0;j<n;++j)
     cin>>a[i][j];
  }
  for(i=0;i<m;++i)
  {
    for(j=0;j<n;++j)
     {
      if(a[i][j]>high)
      high=a[i][j];
     }
  }
 cout<<"biggest Element is: "<<high;
 return 0;
}
