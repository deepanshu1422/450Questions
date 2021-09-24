#include<iostream>
using namespace std;
#include<vector>

int count=0;

void countindex(int arr[],int n,int s,int i)
{
    if(i==n)
    {
        return ;
    }
    if(arr[i]==s)
    {
        cout<<i;
    }

    countindex(arr,n,s,i+1);
    return ;

}


int main()
{
    int arr[10]={1,2,3,4,5,6,2,8,2,2};
    countindex(arr,10,2,0);
    
}