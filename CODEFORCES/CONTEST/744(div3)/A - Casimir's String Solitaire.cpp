#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main ()
{
    FASTER
    int n;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int cA=0,cB=0,cC=0;
        string s;
        cin>>s;

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='A')
                cA++;
            else if(s[i]=='B')
                cB++;
            else if(s[i]=='C')
                cC++;
        }

        if(cB-cC-cA==0)
        {
            cout<<"YES"<<endl;
        }

        else
        {
            cout<<"NO"<<endl;
        }
    }



    return 0;

}







