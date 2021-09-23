#include<iostream>
using namespace std;

int count=0;
int countzeroes(int a){
    if(a/10==0)
    {
        return 0;
    }
    if(a%10==0)
    {
        count++;
    }
    countzeroes(a/10);
    return count;
}


int main()
{
   int b= countzeroes(100200029);
   cout<<b;
   return 0;
}