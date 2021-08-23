#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
int mod=1e9+7;

int main ()
{
    FASTER
    int t;
    cin>>t;

    while(t--)

    {

        int n,sum=0,p=1,c=0;
        cin>>n;

        int st=n;
        int n2=n;

        while(st>0)
        {
            st=st/10;
            c++;
        }

        //power calculate for c=3-1=2
        for(int i=1; i<c; i++)
        {
            p=p*10;

        }


        while(n2>0)
        {

            sum=sum+(n2%10)*p;
            n2=n2/10;
            p=p/10;


        }


        if(sum==n)
            cout<<"wins"<<endl;

        else
        {

            cout<<"loses"<<endl;
        }




    }


    return 0;



}

