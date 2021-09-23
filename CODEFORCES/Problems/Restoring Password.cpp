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

    string s;
    cin>>s;
    string s1,s2,s3,s4,s5,s6,s7,s8;
    vector<pair<string,int>> ch1(10);

    for(int i=0; i<s.size(); i++)
    {
        if(i>=0 && i<=9)
        {
            s1+=s[i];
        }
        else if(i>=10 && i<=19)
        {
            s2+=s[i];
        }
        else if(i>=20 && i<=29)
        {
            s3+=s[i];
        }
        else if(i>=30 && i<=39)
        {
            s4+=s[i];
        }
        else if(i>=40 && i<=49)
        {
            s5+=s[i];
        }
        else  if(i>=50 && i<=59)
        {
            s6+=s[i];
        }

        else  if(i>=60 && i<=69)
        {
            s7+=s[i];
        }

        else  if(i>=70 && i<=79)
        {
            s8+=s[i];
        }

    }






    for(int i=0; i<10; i++)
    {
        cin>>ch1[i].first;
        ch1[i].second=i;
    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s1)
        {
            cout<<ch1[i].second;
        }

    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s2)
        {
            cout<<ch1[i].second;

        }

    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s3)
        {
            cout<<ch1[i].second;

        }

    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s4)
        {
            cout<<ch1[i].second;

        }

    }


    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s5)
        {
            cout<<ch1[i].second;

        }

    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s6)
        {
            cout<<ch1[i].second;

        }

    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s7)
        {
            cout<<ch1[i].second;

        }

    }

    for(int i=0; i<10; i++)
    {
        if(ch1[i].first==s8)
        {
            cout<<ch1[i].second;

        }

    }


    cout<<endl;












    return 0;

}


