#include<iostream>
using namespace std;

void breakinto(string s)
{   int space=0;
    int counter=0;
    for(int i=0;i<s.size()-1;i++)
    {
        if(s.at(i)==' ')
        {
            space=i;
        }
        counter++;

        if(counter%140>0)
        {
            if(s[i]!=' ')
            {
                i=space;
            }
            s.append("")
        }
    }
}


int main()
{
    string s="Articles is a piece of writing and is produced either in a printed or electronic form, in newspaper, magazine, journal or website. It has a large readership in mind. It is based on surveys, research, facts and analysis etc. Articles may be short or slightly long may be upto 1500 words. It is written with a definite objective and informs the readers about some concept.";
    breakinto(s);

}