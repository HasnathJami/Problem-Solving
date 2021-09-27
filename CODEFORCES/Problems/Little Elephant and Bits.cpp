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
    int c=1,counterOne=0;
    string s,s2;
    cin>>s;

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='1')
            counterOne++;


        if(s[i]=='0' && c==1)
        {
            c=0;
            continue;
        }
        else
            s2=s2+s[i];

    }


    if(counterOne==s.size())
    {

        for(int i=0; i<s2.size()-1; i++)
        {
            cout<<s2[i];
        }
        cout<<endl;




    }



    cout<<s2<<endl;





    return 0;

}



