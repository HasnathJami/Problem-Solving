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

    int n,lz=0,lo=0,rz=0,ro=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int l,r;
        cin>>l>>r;

        if(l==0)
            lz++;

        if(r==0)
            rz++;


        if(l==1)
            lo++;

        if(r==1)
            ro++;

    }

    int leftside=max(lz,lo);
    int rightside=max(rz,ro);

    cout<<(n-leftside)+(n-rightside)<<endl;



    return 0;

}



