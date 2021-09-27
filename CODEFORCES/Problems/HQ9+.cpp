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

    string s;
    cin>>s;

    if(s.find('H') != string::npos)
        cout<<"YES"<<endl;
    else if(s.find('Q') != string::npos)
        cout<<"YES"<<endl;

    else if(s.find('9') != string::npos)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;





    return 0;

}


