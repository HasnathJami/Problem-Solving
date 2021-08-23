#include <bits/stdc++.h>
using namespace std;

int main()

{

    int T,N,c=0;
    int f=0,l=0;
    cin>>T;

    for(int i=1; i<=T; i++)
    {
        cin>>N;


        f=N%10;

        while(N/10)
        {
            c++;
        }

        l=N/pow(10,c);


        cout<<f+l<<endl;


    }


    return 0;
}


