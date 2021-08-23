#include <bits/stdc++.h>
using namespace std;

int main()

{
    string s1;
    cin>>s1;
    int uC=0,lC=0;

    for(int i=0; i<s1.length(); i++)
    {
        if(s1[i]>='A' && s1[i]<='Z')
            uC++;

        else if(s1[i]>='a' && s1[i]<='z')
            lC++;
    }

    if(uC>lC)
    {
        transform (s1.begin(),s1.end(),s1.begin(),::toupper);
        cout<<s1<<endl;
    }
    else
    {
        transform (s1.begin(),s1.end(),s1.begin(),::tolower);
        cout<<s1<<endl;
    }
}
