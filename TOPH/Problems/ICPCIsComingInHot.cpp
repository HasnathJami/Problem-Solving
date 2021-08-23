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
    string N;
    int maxi=INT_MIN,smaxi=0;
    int c1=0,c2=0,c3=0,c4=0,c5=0,c6=0,c7=0,c8=0,c9=0,c0=0;

    cin>>N;

    for(int i=0;i<N.size();i++)
    {

        if(N[i]=='0')
            c0++;
        else if(N[i]=='1')
            c1++;
        else if(N[i]=='2')
            c2++;
        else if(N[i]=='3')
            c3++;
        else if(N[i]=='4')
            c4++;
        else if(N[i]=='5')
            c5++;
        else  if(N[i]=='6')
            c6++;
        else if(N[i]=='7')
            c7++;
        else if(N[i]=='8')
            c8++;
        else if(N[i]=='9')
            c9++;



    }
    //cout<<c0<<c1<<c2<<c3<<c4<<c5<<c6<<c7<<c8<<c9<<endl;

    int ar[10]= {c0,c1,c2,c3,c4,c5,c6,c7,c8,c9};


    for(int i=9; i>=0; i--)
    {


        if(ar[i]>=maxi)
        {
            maxi=ar[i];
            smaxi=i;

        }
    }

    cout<<smaxi<<endl;




    return 0;

}

