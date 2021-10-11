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

        int n,fBInd=0,fRInd=0;
        cin>>n;
        char s[n];

        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }

        if(n==1 && s[0]=='?')
        {

            cout<<"B"<<endl;
            continue;
        }

        if(n==1 && s[0]!='?')
        {
            cout<<s[0]<<endl;
            continue;
        }





        if(s[0]=='?' && s[1]=='B')
            s[0]='R';

        else if(s[0]=='?' && s[1]=='R')
            s[0]='B';

        else if(s[0]=='B' && s[1]=='?')
            s[1]='R';

        else if(s[0]=='R' && s[1]=='?')
            s[1]='B';



        else  if(s[0]=='?' && s[1]=='?')
        {

            for(int i=0; i<n; i++)
            {
                if(s[i]=='R')
                {
                    fRInd=i+1;
                    break;
                }
                else if(s[i]=='B')
                {
                    fBInd=i+1;
                    break;
                }
            }


            if(fRInd==0 && fBInd==0)
            {
                s[0]='B';
                s[1]='R';
            }


            else if(fRInd >0 && fRInd%2==0)
            {

                s[0]='B';
                s[1]='R';

            }

            else if(fRInd >0 && fRInd%2==1)
            {

                s[0]='R';
                s[1]='B';

            }

            else if(fBInd >0 && fBInd%2==0)
            {

                s[0]='R';
                s[1]='B';

            }

            else  if(fBInd >0 && fBInd%2==1)
            {

                s[0]='B';
                s[1]='R';

            }



        }




        for(int i=0; i<n; i++)
        {
            if(s[i]=='?' && s[i-1]=='B')
            {
                s[i]='R';
            }
            else if(s[i]=='?' && s[i-1]=='R')
            {
                s[i]='B';
            }



        }


        for(int i=0; i<n; i++)
        {
            cout<<s[i];
        }
        cout<<endl;


    }






    return 0;

}







