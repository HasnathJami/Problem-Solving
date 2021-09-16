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

    int t;
    cin>>t;

    while(t--)
    {

        int c1=0,c2=0,c3=0,c4=0,c5=0;
        string s;
        cin>>s;

        sort(s.begin(),s.end());

        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='a')
                c1=1;
            else if(s[i]=='e')
                c2=1;

            else if(s[i]=='l')
                c3=1;

            else if(s[i]=='n')
                c4=1;

            else if(s[i]=='p')
                c5=1;

            else
                continue;


        }

        if(c1+c2+c3+c4+c5==5)
            cout<<"Maile Nepal banauna sakchhu!!"<<endl;

        else
            cout<<"Hami sabai milera Nepal Banau hai!!"<<endl;




    }



    return 0;

}




