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
    int k=0;
    string a,b,c;
    cin>>a>>b;

    for(int i=0; i<a.size(); i++)
    {
        if(a[i]=='1' && b[i]=='1' ||a[i]=='0' && b[i]=='0' )
        {

            c+='0';

        }

        else
        {
            c+='1';

        }

    }

    cout<<c<<endl;



    return 0;

}






