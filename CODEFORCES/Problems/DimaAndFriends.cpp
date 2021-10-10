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
    int n,total=0,c=0;
    cin>>n;

    for(int i=0; i<n; i++)
    {
        int f;
        cin>>f;
        total=total+f;
    }

    //  int store=total%(n+1);

    for(int i=total+1; i<=total+5; i++)
    {
        if(i%(n+1)!=1)   //Here after mod operation ans 1 comes and it means that Dimas turn comes. So, she can't put this number.
            c++;
    }

    cout<<c<<endl;






    return 0;

}






