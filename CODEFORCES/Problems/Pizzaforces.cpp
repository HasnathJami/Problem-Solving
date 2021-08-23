#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER
    ll t,n;
    cin>>t;

    while(t--)
    {
       cin>>n;
    ll a=6,b=8,c=10,d=15,e=20,f=25,res=0,mini=LLONG_MAX,check=0;

    if(n<6 && n>0)
    {
        cout<<d<<endl;
        continue;
    }

    else if(n%a==0 && n>0)
    {

       cout<<(n/a)*d<<endl;
       continue;


    }


     else if(n%b==0 && n>0)
     {

         cout<<(n/b)*e<<endl;
         continue;


     }


    else if(n%c==0 && n>0)

     {

         cout<<(n/c)*f<<endl;
         continue;


     }

     else{

        res=((n+1)/2)*5;
        cout<<res<<endl;
        continue;
     }









    }



    return 0;

}

