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

    int n;
    cin>>n;
    int a,b,c;
    cin>>a>>b>>c;

    if(n-a >=10 || n-b >=10 || n-c >=10 )
       cout<<"Yes :-D"<<endl;

    else
        cout<<"No :-("<<endl;



    return 0;

}



