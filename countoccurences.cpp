#include<iostream>
using namespace std;

int count=0;
int findocourences(int arr[],int n,int s,int i)
{
    if(i==n)
    {
        return 0;
    }
    if(arr[i]==s)
    {
        count++;
    }
    findocourences(arr,n,s,i+1);
    return count;
}



int main()
{
    int arr[10]={1,2,2,4,5,6,7,8,2,2};
    int b= findocourences(arr,10,2,0);
    cout<<b;
}