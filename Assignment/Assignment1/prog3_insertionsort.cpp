//sort an array integers using insertion sort
#include<iostream>
using namespace std;
int main()
{
    int n,arr[50],temp,i,j;
    cout<<"Enter number of elements :"<<endl;
    cin>>n;
    cout<<"Enter elements in the array"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        temp=arr[i];
        j=i-1;
        while((temp<arr[j])&&(j<0))
        {
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=temp;
    }
    cout<<"Sorted Array :";
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}