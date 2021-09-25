#include<iostream>
using namespace std;


void removeconsecutive(char arr[])
{
    if(arr[0]=='\0')
    {
        return;
    }
    if(arr[0]!=arr[1])
    {
        removeconsecutive(arr+1);
    }
    if(arr[0]==arr[1])
    {
        for(int i=0;arr[i]!='\0';i++)
        {
            arr[i]=arr[i+1];
        }
        removeconsecutive(arr);
    }
}


int main()
{
    char arr[]={"abccbabbbba"};
    removeconsecutive(arr);
    cout<<arr;
}

