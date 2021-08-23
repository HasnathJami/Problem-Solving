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
    for(int i=1; i<=T; i++)
    {
        int A;
        char B;
        int C;
        cin>>A>>B>>C;

        if(B=='+')
            cout<<"Case "<<i<<": "<<A+C<<endl;
        else if(B=='-')
            cout<<"Case "<<i<<": "<<A-C<<endl;
        else if(B=='*')
            cout<<"Case "<<i<<": "<<A*C<<endl;

    }


    return 0;

}

