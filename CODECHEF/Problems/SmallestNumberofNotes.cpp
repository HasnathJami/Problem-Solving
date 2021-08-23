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
        int N,c=0;
        int A[6]= {100,50,10,5,2,1};
        cin>>N;


        for(int i=0; i<6; i++)
        {
            c=c+(N/A[i]);
            N=N%A[i];
        }


        cout<<c<<endl;

    }







    return 0;

}

