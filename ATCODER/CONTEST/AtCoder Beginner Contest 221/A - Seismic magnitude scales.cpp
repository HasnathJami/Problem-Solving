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

    int A,B;
    cin>>A>>B;

    int store=(A-B);
    int mul=1;

    if(store==0)
    {
        cout<<1<<endl;
        return 0;
    }


    for(int i=1;i<=store;i++)
    {
        mul=mul*32;
    }

    cout<<mul<<endl;



    return 0;

}







