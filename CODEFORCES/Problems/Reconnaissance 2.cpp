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
    int ar[n];

    for(int i=0; i<n; i++)
    {
        cin>>ar[i];

    }

    int i=0;
    int k=1;
    int diff=0;
    int diffIndex=imin;
    int mini=imax;
    int sf=0,sl=0;
    while(diffIndex<0)
    {
        diff=abs(ar[i]-ar[k]);
        diffIndex=i-(k);

        if(mini>=diff)
        {
            mini=diff;
            sf=i;
            sl=k;
        }

        if(i==n-2)
        {
            k=0;
            i++;
        }

        else
        {
            i++;
            k++;
        }


    }

    cout<<sf+1<<" "<<sl+1<<endl;



    return 0;

}






