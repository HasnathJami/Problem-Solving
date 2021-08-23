#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;

int main()
{
    string s,t,s2;


    cin>>t>>s;




    for(int i=s.size()-1; i>=0; i--)
    {

        s2=s2+s[i];

    }

    if(t==s2)
    {
        cout<<"YES"<<endl;
    }

    else
    {
        cout<<"NO"<<endl;
    }






}
