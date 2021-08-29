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
        float h,c,t;
        cin>>h>>c>>t;

        if(h>50 && c<0.7 && t>5600)
            cout<<10<<endl;

        else if(h>50 && c<0.7 && t<=5600)
            cout<<9<<endl;

        else if(h<=50 && c<0.7 && t>5600)
            cout<<8<<endl;

        else if(h>50 && c>=0.7 && t>5600)
            cout<<7<<endl;

        else if(h>50 || c<0.7 || t>5600)
            cout<<6<<endl;

        else
            cout<<5<<endl;

    }













    return 0;

}


