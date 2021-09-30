#include<iostream>
#include<climits>
using namespace std;

void selectionsort(int arr[],int n)
{
    if(n==0)
    {
        return ;
    }

    for(int i=0;i<n-2;i++)
    {
        int smallest=INT_MAX;
        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<smallest)
            {
                smallest=arr[j];
            }
        }
        if(arr[i]>smallest)
        {
            swap(arr[i],arr[smallest]);
        }
    }

}


int main()
{
    int arr[5]={5,8,2,1,3};
    selectionsort(arr,5);
    for(int i=0;i<5;i++)
    {
        cout<<arr[i]<<" ";
    }
}