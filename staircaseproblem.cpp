#include<iostream>
using namespace std;

int countways(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    if(n==-1)
    {
        return 0;
    }
    return countways(n-1)+countways(n-2)+countways(n-3);
}


int main()
{
    int n=4;
    int b = countways(n);
    cout<<b;
}