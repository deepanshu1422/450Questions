#include<iostream>
using namespace std;


void printnos(int a)
{
    if(a==0)
    {
        return ;
    }
    
   
    printnos(a-1);
    cout<<a;
}


int main()
{
    printnos(10);
}