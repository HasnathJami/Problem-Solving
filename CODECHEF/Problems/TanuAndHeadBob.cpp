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
    int T;
    cin>>T;
    while(T--)
    {
        int n,cn=0,lock=0,inp;
        cin>>n;
       // vector<char> s;
       char s[n];

        for(int i=0; i<n; i++)
        {
           // cin>>inp;
           // s.push_back(inp);
           cin>>s[i];


        }




        for(int i=0; i<n; i++)
        {
            if(s[i]=='I')
            {
                lock=1;

            }

            if(s[i]=='N')
            {
                cn++;

            }
        }


        if(cn==n && lock==0)
            cout<<"NOT SURE"<<endl;

        else if(cn!=n && lock==0)
            cout<<"NOT INDIAN"<<endl;

       else
        {
            cout<<"INDIAN"<<endl;

        }
    }


    return 0;

}
