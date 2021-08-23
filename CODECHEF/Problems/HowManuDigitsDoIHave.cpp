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
    int N,c=0;
    cin>>N;

    while(N>0)
    {
        N=N/10;
        c++;
    }

    if(c==1)
        cout<<1<<endl;
    else if(c==2)
        cout<<2<<endl;

    else if(c==3)
        cout<<3<<endl;

    else
        cout<<"More than 3 digits"<<endl;


    return 0;

}

