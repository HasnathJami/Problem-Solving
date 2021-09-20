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
    int sum1=0,sum2=0,n1,n2,n3;
    string s1;
    string s2;
    cin>>s1>>s2;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]>='0' && s1[i]<='9')
        {
            sum1=sum1+s1[i]-'0';
        }
    }

    for(int i=0; i<s2.size(); i++)
    {
        if(s2[i]>='0' && s2[i]<='9')
        {
            sum2=sum2+s2[i]-'0';
        }
    }


    n1=sum1+sum2;
    n2=abs(sum1-sum2);
    n3=sum1*sum2;

    int maximum=max(n1,max(n2,n3));
    int minimum=min(n1,min(n2,n3));
    int res=(n1+n2+n3)-maximum-minimum;

    cout<<"\""<<res<<"\""<<endl;







    return 0;

}


