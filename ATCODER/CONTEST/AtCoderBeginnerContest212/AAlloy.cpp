#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER

    int A,B;
    cin>>A>>B;

    if(A>0 && B==0)
        cout<<"Gold"<<endl;

    if(A==0 && B>0)
        cout<<"Silver"<<endl;

    if(A>0 && B>0)
        cout<<"Alloy"<<endl;




    return 0;

}
