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

    ll a[4],c=0;
    for(int i=0;i<4;i++)
    {
        cin>>a[i];
    }

    sort(a,a+4);

    for(int i=0;i<4;i++)
    {
        if(a[i]==a[i+1])
         c++;

    }

    cout<<c<<endl;






    return 0;

}

