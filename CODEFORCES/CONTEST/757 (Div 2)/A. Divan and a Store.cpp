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
        int n,l,r,k,c=0,sum=0;
        cin>>n>>l>>r>>k;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        sort(a,a+n);


        int g=0;
        while(g<n)
        {
            if(a[g]<=r && a[g]>=l)
            {
                sum=sum+a[g];
                if(sum>k)
                    break;

                c++;
            }

            g++;
        }


        cout<<c<<endl;


    }



    return 0;

}






