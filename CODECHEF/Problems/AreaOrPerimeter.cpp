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
    int L,B;
    cin>>L>>B;
    if(L*B > 2*(L+B))
    {
         cout<<"Area"<<endl;
         cout<<L*B<<endl;
    }

    else if(L*B < 2*(L+B))
    {
         cout<<"Peri"<<endl;
         cout<<2*(L+B)<<endl;
    }


    else
    {
         cout<<"Eq"<<endl;
         cout<<2*(L+B)<<endl;
    }









    return 0;

}

