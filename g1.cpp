#include<iostream>
using namespace std;
int main()
{
  int a,emax=0,omax=0;
  cout<<"enter number";
  cin>>a;
  while(a!=0)
  {
      if(a%2==0)
  {
      if(a>emax)
      {
          emax=a;
      }
  }
  else
  {
      if(a>omax)
      {
          omax=a;
      }
  }
  cout<<"enter number";
    cin>>a;

  }
  cout<<"largest even number is:"<<emax<<"\nlargest odd number :"<<omax;

}
