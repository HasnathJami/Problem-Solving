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
        int N,K,A,sum=0,res=0,ans=0;
        cin>>N>>K;

        for(int i=1;i<=N;i++)

        {
            cin>>A;
            sum=sum+A;

        }

        res=(N*K)-sum;
        ans=ceil((float)res/K);
        cout<<ans<<endl;
    }


    return 0;

}



