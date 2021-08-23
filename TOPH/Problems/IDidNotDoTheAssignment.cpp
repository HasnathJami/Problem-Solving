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


       int N,c=0;
       cin>>N;

       for(int i=1;i<=N;i++)
       {
           if(N%i==0)
           {
               c++;
           }
       }


       if(c==2)
        cout<<"NO PUNISHMENT"<<endl;
       else{
            for(int i=0;i<N;i++)
        cout<<"I DID NOT DO THE ASSIGNMENT."<<endl;
       }





    return 0;

}

