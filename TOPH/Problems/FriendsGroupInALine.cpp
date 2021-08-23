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

        int N,K,lock=0;
        cin>>N>>K;
        char S[N];
        int arr[N],k=0,t=1;



        for(int i=0; i<N; i++)
        {
            cin>>S[i];
        }

        for(int i=0; i<N; i++)
        {
            if(S[i]=='0')
                continue;
            if(S[i]=='1')
            {
                arr[k]=i+1;
                k++;
            }

        }



        for(int i=0; i<k-1; i++)
        {

             if(arr[i+1]-arr[i]>K+1)
            {

                t++;
            }


        }




        cout<<t<<endl;




    }



    return 0;

}

