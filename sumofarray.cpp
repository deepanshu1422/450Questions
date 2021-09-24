#include<iostream>
using namespace std;

int sum=0;
int sumofarray(int arr[],int n)
{
    if(n==0)
    {
        return 0;
    }
     sum=arr[0]+sumofarray(arr+1,n-1);
     return sum;
}


int main()
{
    int arr[5]={1,2,3,4,5};
    int b=sumofarray(arr,5);
    cout<<b;
}