#include <bits/stdc++.h>
using namespace std;

int main()
{

    string s1;
    cin>>s1;

    if(toupper(s1[0])==s1[0])
    cout<<s1;

   else if(toupper(s1[0])!=s1[0])
    {
        s1[0]=toupper(s1[0]);
        cout<<s1;
    }

}
