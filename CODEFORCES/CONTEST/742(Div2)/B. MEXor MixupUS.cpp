
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

    int store=0,arr[300001],k=0;

    for(int i=0; i<=300000; i++)
    {
        store=(store^i);
        arr[i]=store;
       

    }

    int T;
    cin>>T;
    while(T--)
    {


        int a,b,temp=0;
        cin>>a>>b;
    

        if(arr[a-1]==b)
            cout<<a<<endl;

        else
        {

            if((arr[a-1]^b)==a)
                cout<<a+2<<endl;

            else
                cout<<a+1<<endl;
        }



    }



    return 0;

}


