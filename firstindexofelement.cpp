#include<iostream>
#include<climits>
using namespace std;

int count;
int firstindex(int arr[],int n,int s,int i=0)
{
    if(i==n)
    {
        return INT_MIN;
    }
    if(arr[i]==s)
    {
        return i;
    }
   return firstindex(arr,n,s,i+1);
    
}



int main()
{
    int arr[5]={1,2,3,4,3};
    int b=firstindex(arr,5,3);
    cout<<b;
}