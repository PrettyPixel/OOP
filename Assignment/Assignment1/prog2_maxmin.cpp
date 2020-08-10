//program to find 2nd maximum and 2nd minimum number from an integer array
#include<iostream>
using namespace std;
int main()
{
    int a[50],t=0,i,n,j;
    cout<<"Enter number of elements in the array :"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    cin>>a[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    cout<<"Second maximum number is :"<<a[1]<<endl;
    cout<<"Second minimum number is :"<<a[n-2];
}
    
