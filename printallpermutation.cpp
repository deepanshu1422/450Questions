#include<iostream>
using namespace std;

void printpermu(char a[],int i)
{
    if(a[i]=='\0')
    {   
        cout<<a<<endl;
        return;
    }
    for(int j=i;a[j]!='\0';j++)
    {   
        swap(a[i],a[j]);
        printpermu(a,i+1);
        swap(a[i],a[j]);
    }
    
}

int main()
{
    char a[] ="ABC";
    int i=0;
    printpermu(a,i);
}