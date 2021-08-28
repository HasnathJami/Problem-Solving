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
    string s;
    cin>>s;
    int arr[9],maxi=INT_MIN,ind=0;

    for(int i=0;i<9;i++)
    {
        arr[i]=0;
    }

    for(int i=0;i<s.length();i++)
    {
        arr[s[i]-'0']++;
    }

    for(int i=8;i>=0;i--)
    {
        if(arr[i]>=maxi)
        {
            maxi=arr[i];
            ind=i;

        }
    }

    cout<<ind<<endl;



    return 0;

}

