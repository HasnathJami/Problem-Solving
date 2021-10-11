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
    int fc[5],c=0;

    for(int i=0; i<5; i++)
    {
        fc[i]=0;
    }
    int n;
    cin>>n;
    int a[n];


    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        fc[a[i]]++;

    }


    if(fc[4]!=0)
    {
        c=c+fc[4];
        fc[4]=0;
    }

    int mini=min(fc[3],fc[1]);
    c=c+mini;

    if(fc[1]==fc[3])
    {
        fc[1]=0;
        fc[3]=0;
    }

    else if(mini==fc[1])
    {
        int rem=abs(mini-fc[3]);
        c=c+rem;
        fc[3]=abs(fc[3]-fc[1]);
        fc[1]=0;

    }

    else if(mini==fc[3])
    {
        fc[1]=abs(fc[1]-fc[3]);
        fc[3]=0;
    }


    c=c+(fc[2]/2);

    if(fc[2]%2==1 && fc[1] ==0)
    {
        c++;
        fc[2]=0;
    }


    else if(fc[2]%2==1 && fc[1] >0)
    {
        c++;

        if(fc[2]%2 + fc[1]<=4)
        {
            fc[1]=0;
        }
        else
        {
            fc[1]=abs(2-fc[1]);
        }

    }

    if(fc[1] >=4)
    {
        c=c+(fc[1]/4);

        if(fc[1]%4!=0)
        {
            c++;
            fc[1]=0;
        }
    }

    if(fc[1]<4 && fc[1] >0)
    {
        c++;
        fc[1]=0;
    }



    cout<<c<<endl;




    return 0;

}







