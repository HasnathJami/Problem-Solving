#include <bits/stdc++.h>
using namespace std;

int main()
{
    int c=0;
    string str;
    cin>>str;



    for(int i=0; i<str.size(); i++)
    {
        if(isupper(str[i]))
        {
            c++;
        }

    }

    if(c==str.size())
    {
        for(int i=0; i<str.size(); i++)
        {
            str[i]=tolower(str[i]);
        }

        //  str[0]=toupper(str[0]);
    }

    else if (str[0] == tolower(str[0]) && c==str.size()-1) //islower(str[0]) can be written instead of str[0] == tolower(str[0])

    {
        for(int i=1; i<str.size(); i++)
        {
            str[i]=tolower(str[i]);
        }

        str[0]=toupper(str[0]);

    }



    cout<<str<<endl;
}
