#include<iostream>
using namespace std;


int length(char input[])
{
    if (input[0]=='\0')
    {
        return 0;
    }else{
        return 1+length(input+1);
    }
}


int stringtointeger(char s[],int n)
{
    if(n==0)
    {
        return 0;
    }
       int smallans=stringtointeger(s,n-1);
       int lastdigit=s[n-1]-'0';
       int ans=smallans*10+lastdigit;
       return ans; 
}


int main()
{
    char s[]="102345";
    int n=length(s);
    int a= stringtointeger(s,n);
    cout<<a;
}