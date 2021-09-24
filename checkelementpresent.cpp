#include<iostream>
using namespace std;


bool checkelement(int arr[],int n,int e)
{
    if(n==0)
    {
        return false;
    }
    if(arr[0]==e)
    {
        return true;
    }
    return checkelement(arr+1,n-1,e);
}


int main()
{
    int arr[5]={1,2,3,4,5};
    bool b = checkelement(arr,5,2);
    cout<<b;
}