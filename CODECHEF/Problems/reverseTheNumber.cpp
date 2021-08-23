#include <bits/stdc++.h>
using namespace std;

int main()

{

    int T,N,rev=0,rem;
    cin>>T;

    for(int i=1; i<=T; i++)
    {
        cin>>N;

        while(N!=0)
        {
            rem=N%10;
            rev=rev*10+rem;
            N=N/10;
        }
        cout<<rev<<endl;
        rev=0;

    }



    return 0;
}

