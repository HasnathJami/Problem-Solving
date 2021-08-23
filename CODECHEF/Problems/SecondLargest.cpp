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

        int A,B,C;
        cin>>A>>B>>C;

        if(A>=B && A<=C || A>=C && A<=B)
            cout<<A<<endl;

        else if(B>=A && B<=C || B>=C && B<=A)
            cout<<B<<endl;

        else if (C>=A && C<=B || C>=B && C<=A)
            cout<<C<<endl;

    }




    return 0;

}

