
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

    while(t--)

    {
        map<int,int>fc;

        int n,mini=imax,store=0,check=0;
        cin>>n;

        int a[n];

        for(int i=0; i<n; i++)
        {

            cin>>a[i];
            fc[a[i]]++;
        }


        for(int i=0; i<n; i++)
        {

            if(a[i]<=mini && fc[a[i]]==1)
            {
                mini=a[i];
                store=i;
                check=1;


            }


        }


        if(check==1)
        {
            cout<<store+1<<endl;
        }
        else
            cout<<-1<<endl;

    }




    return 0;

}






