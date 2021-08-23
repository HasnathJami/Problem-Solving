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

        int N,M,Q,lock=0,s=0;
        cin>>N>>M>>Q;
        int arr[10001];

        for(int i=0; i<10001; i++)
            arr[10001]=0;



        while(Q--)
        {
            char c;
            int event;
            cin>>c>>event;

            if(lock==0)
            {
                if(c=='+')
                {
                    s++;
                    arr[event]=1;
                }

                else if(c=='-')
                {
                    if(arr[event]==0)
                    {
                        lock=1;
                    }

                    else
                    {

                        s--;
                        arr[event]=0;

                    }
                }

                if(s>M)
                {
                    lock=1;
                }


            }
        }

        if(lock==1)
            cout<<"Inconsistent"<<endl;

        else
            cout<<"Consistent"<<endl;






    }





    return 0;

}

