#include<iostream>
using namespace std;

int lastindex(int arr[],int n,int e,int i)
{
    if(i==-1)
    {
        return -1;
    }
    if(arr[n-1]==e)
    {
        return n-1;
    }
    return lastindex(arr,n-1,e,i-1);
}

int main()
{
    int arr[5]={1,2,3,3,3};
    int i=5;
    int b=lastindex(arr,5,3,i);
    cout<<b;
}