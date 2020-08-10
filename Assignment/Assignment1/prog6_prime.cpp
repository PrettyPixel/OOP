//Program to check whether a number is prime or not
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int n,count=0,i;
    cout<<"enter a number :"<<endl;
    cin>>n;
    for(i=2;i<sqrt(n);i++)
    {
      if(n%i==0)
      {
      count=1;
      break;
      }
    }
    if(count==0)
    cout<<"Prime Number"<<endl;
    else
    cout<<"Not A Prime Number"<<endl;

}