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
    int N,sum=0;
    cin>>N;

    for(int i=1;i<=N;i++)
    {
        sum=sum+i;
    }

    cout<<sum<<endl;

    return 0;

}

