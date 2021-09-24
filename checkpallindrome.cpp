#include<iostream>
using namespace std;

bool checkpallindrome(int arr[],int s,int e)
{
    if(s>e)
    {
        return true;
    }
    if(arr[s]==arr[e])
    {
        return checkpallindrome(arr,s+1,e-1);
    }else{
    return false;
    }
}


int main()
{
    int arr[5]={1,1,1,1,1};
    int s=0;
    cout<<checkpallindrome(arr,0,4);
}