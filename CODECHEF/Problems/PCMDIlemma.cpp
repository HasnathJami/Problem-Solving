#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
int mod=1e9+7;

int main ()
{
    FASTER

    int t;
    cin>>t;
    string s2="CMP";
    string s;

    while(t--)
    {

        cin>>s;
        sort(s.begin(),s.end());

        if(s2==s)
            cout<<"YES"<<endl;

        else
        {
            cout<<"NO"<<endl;
        }
    }




    return 0;

}



