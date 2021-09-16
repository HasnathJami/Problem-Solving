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

    s[0]=toupper(s[0]);

    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='s')
            s[i]='$';

        else if(s[i]=='i')
            s[i]='!';


        else if(s[i]=='o')
        {
            s[i]='(';
            int st=i+1;
            s.insert(st,")");

        }

    }

    s.insert(s.size(),".");

    cout<<s<<endl;



    return 0;

}



