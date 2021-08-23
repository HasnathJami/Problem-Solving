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
    int c1=0,c2=0;
    string str;
    cin>>str;

    for(int i=0;i<str.size();i++)
    {
        if(str[i]>='a' && str[i]<='z')
            c1++;

        if(str[i]>='A' && str[i]<='Z')
            c2++;

    }

    cout<<c2<<" "<<c1<<endl;


    return 0;

}

