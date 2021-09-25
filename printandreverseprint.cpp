#include<iostream>
using namespace std;


void printinput(char arr[])
{
    if(arr[0]=='\0')
    {
        return;
    }
    cout<<arr[0];
    printinput(arr+1);
}

void reverse(char arr[])
{
    if(arr[0]=='\0')
    {
        return;
    }
    reverse(arr+1);
    cout<<arr[0];
}




int main()
{
    char arr[]="abc";
    printinput(arr);
    reverse(arr);
}