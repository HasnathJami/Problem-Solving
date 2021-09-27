#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

//#define endl  "\n"
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

    string s;

    while(getline(cin,s))
    {
        if(s=="the end.")
            break;


        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='6')
                s[i]='b';

            else if(s[i]=='9')
                s[i]='g';

            else if(s[i]=='1')
                s[i]='l';

            else if(s[i]=='0')
                s[i]='o';


            else if(s[i]=='5')
                s[i]='s';


            else if(s[i]=='2')
                s[i]='z';


            else if(s[i]=='b')
                s[i]='6';

            else if(s[i]=='g')
                s[i]='9';

            else if(s[i]=='l')
                s[i]='1';

            else if(s[i]=='o')
                s[i]='0';

            else if(s[i]=='s')
                s[i]='5';
            else if(s[i]=='z')
                s[i]='2';




        }

        cout<<s<<endl;
    }




    return 0;

}







