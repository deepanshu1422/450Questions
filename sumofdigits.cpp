#include<iostream>
using namespace std;

int sumofdigits(int a)
{
    if(a/10==0)
    {
        return a;
    }

    int sum=a%10+sumofdigits(a/10);
    return sum;
}



int main()
{
    int b =sumofdigits(123);
    cout<<b;
}