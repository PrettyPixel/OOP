//program to check a palindrome string
#include<iostream>
using namespace std;
int main()
{
    string s,s1="";
    int flag=1;
    cout<<"Enter a String :"<<endl;
    getline(cin,s);
    for(int i=s.length()-1;i>=0;i--)
    s1=s1+s[i];
    for(int i=0;i<s.length();i++)
    {
        if(s[i]!=s1[i])
        {
            flag=0;
            break;
        }
    }
    if(flag==0)
    cout<<"Not Palindrome String"<<endl;
    else
    cout<<" Palindrome String"<<endl;
}
    


