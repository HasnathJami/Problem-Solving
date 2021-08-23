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
    for(int i=1;i<=T;i++)
    {
        int N;
        cin>>N;
        float p=0,res=0;
        for(int i=0;i<N;i++)
        {
            cin>>p;
            res=res+p;
        }


        cout<<fixed<<"Case "<<i<<": "<<setprecision(3)<<res/N<<endl;


    }


    return 0;

}
