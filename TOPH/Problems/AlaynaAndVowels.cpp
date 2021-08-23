#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    int counter=0;
    cin>>s;

    for(int i=0;i<s.size();i++)

    {
        if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')
        counter++;

    }
    cout<<counter<<endl;

}
