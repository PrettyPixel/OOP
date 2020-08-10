//Program to check for a palindrome number
#include<iostream>
using namespace std;
int main()
{
    int n,rev=0,r,num;
    cout<<"Enter the number to be checked :"<<endl;
    cin>>n;
    num=n;
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(rev==num)
    cout<<"Palindrome number "<<endl;
    else
    cout<<"Not a Palindrome number "<<endl;
    
}

