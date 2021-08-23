#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER

    string n;
    int c=0;
    cin>>n;

    for(int i=0;i<n.size();i++)
    {
        if(n[i]=='4' || n[i]=='7')
            c++;

    }


    if(c==4||c==7)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;



    return 0;

}
