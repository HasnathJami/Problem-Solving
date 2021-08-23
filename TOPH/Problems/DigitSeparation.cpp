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

    string s;

    while(cin>>s)
    {

        int sum=0;


        for(ll i=0; i<s.size(); i++)
        {
            sum=sum+s[i]-'0';
        }

        cout<<sum<<endl;





    }

    return 0;


}

