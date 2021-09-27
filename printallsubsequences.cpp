#include<iostream>
using namespace std;


void printsubsequences(string s,string output)
{
    if(s.length()==0)
    {
        cout<<output<<endl;
        return;
    }
    printsubsequences(s.substr(1),output);
    printsubsequences(s.substr(1),output+s[0]);
}


int main()
{
    string s ="abc";
    string output;
    printsubsequences(s,output);

}