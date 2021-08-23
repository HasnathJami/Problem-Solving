#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long T,N,A,sum=0;
    cin>>T;


    while(T--)

    {
        cin>>N;
        for(int i=1; i<=N; i++)
        {
            cin>>A;

            sum=sum+A;


        }

        if(sum%2==0)
            cout<<1<<endl;

        else
        {
            cout<<2<<endl;
        }

        sum=0;

    }


}
