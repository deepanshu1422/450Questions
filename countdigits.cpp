#include<iostream>
using namespace std;


int countdigits(int a)
{
    if(a/10==0)
    {
        return 0; 
    }
    int b= 1+countdigits(a/10);
    return b;

}



int main()
{
    cout<<1+countdigits(12345);
}