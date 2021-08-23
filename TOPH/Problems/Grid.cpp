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
    for(int i=1;i<=T;i++)
    {
        int H,W;
        cin>>H>>W;
        cout<<"Case "<<i<<":"<<endl;
        for(int i=0;i<H;i++)
        {
            for(int j=0;j<W;j++)
            {
                cout<<"*";
            }
            cout<<endl;
        }

    }


    return 0;

}

