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

    int t;
    cin>>t;


    while(t--)
    {
        int sum1=0,sum2=0,nonZeroCount=0;
        int n;
        cin>>n;
        char s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }


        for(int i=0; i<n; i++)
        {
            if(s[i]!='0')
            {
                sum1=sum1+(s[i]-'0');
                nonZeroCount++;
            }

        }

        if(s[n-1]!='0')
            sum2=sum1+(nonZeroCount-1);

        else
            sum2=sum1+(nonZeroCount);


        cout<<sum2<<endl;

    }


    return 0;

}


