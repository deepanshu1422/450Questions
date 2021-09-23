#include<iostream>
#include<cmath>
using namespace std;

double sum=0;
double gsum(int a)
{
    if(a==0)
    {
        return 1;
    }
    
    return gsum(a-1)+1/pow(2,a);

}


int main()
{
    double b=gsum(3);
    cout<<b;
}