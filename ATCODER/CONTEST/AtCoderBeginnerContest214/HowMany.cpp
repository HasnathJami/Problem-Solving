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
    int S,T,c=0;
    cin>>S>>T;

    for(int i=0;i<=100;i++)
    {
        for(int j=0;j<=100;j++)
        {
            for(int k=0;k<=100;k++)
            {
                if((i+j+k)<=S && (i*j*k)<=T)
                {
                   c++;
                   continue;
                }

                else{

                    continue;
                }

            }
        }

    }

    cout<<c<<endl;


    return 0;

}

