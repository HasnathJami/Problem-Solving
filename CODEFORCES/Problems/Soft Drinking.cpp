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

    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int s1=k*l;
    int s2=s1/nl;
    int s3=c*d;
    int s4=p/np;

    cout<<min(s2,min(s3,s4))/n<<endl;



    return 0;

}






