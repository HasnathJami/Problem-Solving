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
        int N,last=0,first=0,S=0,c=0;
        cin>>N;
        S=N;


        last=(S%10);

        while(S>0)
        {

            S=S/10;
            c++;

        }


        first=N/pow(10,c-1);

        cout<<last+first<<endl;


    }



    return 0;

}
