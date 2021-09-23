#include<iostream>
using namespace std;

bool issorted(int arr[] , int n)
{
    if(n==0 || n==1)
    {
        return true;
    }
    if(arr[0]>arr[1])
    {
        return false;
    }


    return issorted(arr,n-1);
}


int main()
{
    int arr[5]={0,1,2,3,4};
    bool b = issorted(arr,5);
    cout<<b;
}