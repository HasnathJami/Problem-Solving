#include <iostream>
#include <map>
#include<algorithm>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;
    unordered_map<int,int>mp;
    char ch;

    for(int i=0; i<n; i++)
        mp[s[i]-'a']++;


    for(int i=0; i<26; i++)
    {
        if(mp[i]==k)
        {
            ch=i+'a';

        }
    }

    int lock=0;
    for(int i=0; i<n; i++)
    {

        if(s[i]==ch && k>1)
        {
            if(s[i]<s[i+1] && lock==0)
            {
                cout<<s[i];
                lock=1;
                continue;
            }

            k--;

            //continue;
        }
        else
        {
            cout<<s[i];
        }
    }
    cout<<endl;







}
