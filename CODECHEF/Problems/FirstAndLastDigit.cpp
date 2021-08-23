#include <bits/stdc++.h>
using namespace std;

int main()

{

     long T,N,rem=0;
    int f=0,l=0;
    cin>>T;

    while(T--)
    {
        cin>>N;

        f=N%10;
        N=N/10;


//        while(N!=0)
//        {
//            rem=N%10;
//            N=N/10;
//        }
//        l=rem;
        cout<<f+l<<endl;


    }


    return 0;
}


