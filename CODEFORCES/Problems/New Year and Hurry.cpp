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

    int n,k,sum=0,counter=0;
    cin>>n>>k;

    int rem=240-k;


    for(int i=1; i<=n; i++)
    {
        sum=sum+(5*i);
        if(rem>=sum)
        {
           counter++;
        }

        else
        {
            break;
        }



    }

    cout<<counter<<endl;




    return 0;

}


