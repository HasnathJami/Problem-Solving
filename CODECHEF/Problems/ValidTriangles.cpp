#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T,A,B,C;
    cin>>T;

    while(T--)
    {
        cin>>A>>B>>C;
        if(A+B+C==180)
            cout<<"YES"<<endl;

        else
            cout<<"NO"<<endl;
    }


    return 0;
}
