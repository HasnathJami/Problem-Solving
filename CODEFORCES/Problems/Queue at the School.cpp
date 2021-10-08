#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main ()
{
    FASTER
    int n,t;
    cin>>n>>t;
    char s[5];
    string s2,s3;

    for(int i=0; i<n; i++)
    {
        cin>>s[i];
    }

    for(int i=0; i<t; i++)
    {
        for(int i=0; i<n-1; i++)
        {
            if(s[i]=='B' && s[i+1]=='G')
            {
                swap(s[i],s[i+1]);
                i++;
            }

        }
    }




    for(int i=0; i<n; i++)
    {
        cout<<s[i];
    }
    cout<<endl;



    return 0;

}







