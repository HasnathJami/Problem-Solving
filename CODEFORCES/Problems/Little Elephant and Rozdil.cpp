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
    int n,mini=imax;
    cin>>n;
    int a[n];
    int store=0,c=0;

    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }


    int i= min_element(a,a+n)-a;


    sort(a,a+n);

    if(a[0]==a[1])
    {
        cout<<"Still Rozdil"<<endl;
        return 0;
    }


    cout<<i+1<<endl;



    return 0;

}







