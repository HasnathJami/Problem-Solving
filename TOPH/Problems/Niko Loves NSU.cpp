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

    int n,cn=0,cu=0,cs=0;
    cin>>n;
    char s[n];

    for(int i=0;i<n;i++)
    {
        cin>>s[i];

        if(s[i]=='N')
            cn++;
        else if (s[i]=='S')
            cs++;

        else if (s[i]=='U')
            cu++;
    }

    cout<<min(cn,min(cs,cu))<<endl;



    return 0;

}


