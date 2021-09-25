#include<iostream>
using namespace std;

void removechar(char arr[])
{
    if(arr[0]=='\0')
    {
        return;
    }
    
    if(arr[0]!='c')
    {
        removechar(arr+1);
    }


   if(arr[0]=='c')
    {
        for(int i=0;arr[i]!='\0';i++)
        {
            arr[i]=arr[i+1];
        }
         removechar(arr);
    }

   
}


int main()
{
    char arr[]={"abccd"};
    removechar(arr);
    cout<<arr;
}