#include<iostream>
using namespace std;

void toh(char s,char h,char d ,int n)
{
    if(n==0)
    {
        return;
    }
    toh(s,d,h,n-1);
    cout<<"Moving"<<s<<"to"<<h<<endl;
    toh(h,d,s,n-1);
}

int main()
{
    int n=3;
    toh('A','C','B',n);
}