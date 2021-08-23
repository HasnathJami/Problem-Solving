#include <bits/stdc++.h>
using namespace std;

int main()
{
    string v;
    int c=0;
    int uniqueValue=0;

    cin>>v;
    string k=v;
    for(int i=0; i<v.size(); i++)
    {
        for(int j=i+1; j<v.size(); j++)
        {
            if(v[i]==k[j])
            {
                c++;

                k[j]='0';

            }

        }
    }

    uniqueValue=(v.size()-c);

    if(uniqueValue%2==0)
    {
        cout<<"CHAT WITH HER!"<<endl;
    }

    else
    {

        cout<<"IGNORE HIM!"<<endl;

    }








}
