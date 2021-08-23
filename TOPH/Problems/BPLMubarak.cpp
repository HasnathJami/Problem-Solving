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
        string s;
        cin>>s;
        int c=0,s1=0,s2=0,s3=0;
        for(int i=0; i<s.length(); i++)
        {
            if(s[i]>='0' && s[i]<='6')
                c++;

            else if(s[i]=='O')
                c++;

            else
                continue;
        }

        if(c==0 || c==1)
            cout<<c<<" BALL"endl;

        else if(c<6 && c>1)
            cout<<c<<" BALLS"<<endl;


        else if(c%6==0 && c>0)
        {
            s1=c/6;
            if(s1==1)
                cout<<"1 OVER"<<endl;
            else
                cout<<s1<<" OVERS"<<endl;

        }

        else if(c>6 && c%6!=0)
        {
            s2=c/6;
            s3=c%6;

            if(s2 == 1 && s3==1)
                cout<<s2<<" OVER "<<s3<<" BALL"<<endl;

            else if(s2 == 1 && s3>1)
                cout<<s2<<" OVER "<<s3<<" BALLS"<<endl;

            else if(s2>1 && s3==1)
            {

                cout<<s2<<" OVERS "<<s3<<" BALL"<<endl;
            }

            else
            {

                cout<<s2<<" OVERS "<<s3<<" BALLS"<<endl;
            }
        }




    }




    return 0;

}
