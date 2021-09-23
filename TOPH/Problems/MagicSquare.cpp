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

    for(int i=1;i<=t;i++)
    {
        ll N,sumOfAllNumbers,blocks=0;
        cin>>N;
        blocks=(N*N);
        sumOfAllNumbers=((blocks+1)*blocks)/2;
        cout<<"Case "<<i<<": "<<sumOfAllNumbers/N<<endl;




    }



    return 0;

}


