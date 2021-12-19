#include <iostream>
using namespace std;

int main()
{
    string s,s2;
    cin>>s;
    int check=0,lock=0;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='W' && s[i+1]=='U' && s[i+2]=='B')
        {
            i=i+2;
            check=1;
            continue;

        }
        else
        {
            if(check!=0)
            {
                check=0;
                s2+=' ';
            }
            s2+=s[i];
        }
    }

    for(int i=0; i<s2.size(); i++)
    {
        if(s2[0]==' ' && lock==0)
        {
            lock=1;
            continue;
        }


        else
            cout<<s2[i];

    }
    cout<<endl;



}
