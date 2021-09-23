#include<iostream>
using namespace std;

int multiply(int a,int b)
{
    if(a==0)
    {
        return 0; 
    }
    if(b==0)
    {
        return 0;    
    }

    int ans=a+multiply(a,b-1);
    return ans;
}


int main()
{
    cout<<multiply(2,3);
}