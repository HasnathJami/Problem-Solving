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
    int j[1000],temp=0,k;
    int s=1667;


    for(int i=0; i<s; i++)
    {

        if(i%3==0)
            continue;

        if(i%10==3)
            continue;

        j[temp]=i;
        temp++;


    }



    int t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>k;
        cout<<j[k-1]<<endl;
    }




    return 0;

}

