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
    int N;
    cin>>N;

    if(N>=1 && N<=125)
        cout<<4<<endl;

    if(N>=126 && N<=211)
        cout<<6<<endl;

     if(N>=212 && N<=214)
        cout<<8<<endl;




    return 0;

}

