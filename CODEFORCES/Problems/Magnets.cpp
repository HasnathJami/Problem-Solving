#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER
    int n,c=0;
    int s,s2;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s;

        if(s==s2) continue;

        else{
               c++;
               s2=s;

        }


    }

    cout<<c<<endl;










    return 0;

}
