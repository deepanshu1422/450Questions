#include<iostream>
using namespace std;

int length(char arr[])
{
    if(arr[0]=='\0')
    {
        return 0;
    }
    return 1+length(arr+1);
}



int main()
{
    char arr[]={"abc"};
    cout<<length(arr);
}