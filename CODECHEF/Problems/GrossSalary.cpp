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
    int T;
    cin>>T;
    while(T--)
    {
        int bs;
        float gs=0;
        cin>>bs;
        if(bs<1500)
            gs=bs+(float)(bs*0.10) +(float)(bs*0.90);

        else
            gs=bs+500+(float)(bs*0.98);


        cout<<fixed<<gs<<setprecision(2)<<endl;
    }




    return 0;

}

