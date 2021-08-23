#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER
    string s,s2="hello";
    int c=0,k=0;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]==s2[k])
        {
            c++;
            k++;

        }
    }


    if(c==5)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;




    return 0;

}

