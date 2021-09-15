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

    double p;
    cin>>p;
    int p2,p3;

    p2=p;
    p3=p2/10;

    cout<<"[";
    for(int i=0; i<p3; i++)
        cout<<"+";

    for(int i=0; i<10-p3; i++)
        cout<<".";

    cout<<"] "<<p2<<"%"<<endl;





    return 0;

}



