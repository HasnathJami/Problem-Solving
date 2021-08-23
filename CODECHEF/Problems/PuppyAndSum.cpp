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
    int T;
    cin>>T;
    while(T--)
    {
        int D,N,sum,s=0;
        cin>>D>>N;
         s=N;
        while(D--)
        {

            sum=0;
            for(int i=1; i<=s; i++)
            {
                sum=sum+i;
            }
            s=sum;


        }


        cout<<sum<<endl;
    }




    return 0;

}

