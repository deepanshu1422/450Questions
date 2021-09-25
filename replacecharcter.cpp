#include<iostream>
using namespace std;


void replace (char arr[],char n)
{
    if(arr[0]=='\0')
    {
        return;
    }
    if(arr[0]==n)
    {
        arr[0]='a';
    }
    replace(arr+1,n);
}



int main()
{   
    char n='c';
    char arr[]={"abcd"};
    replace(arr,n);
    cout<<arr;
}