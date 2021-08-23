#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T;
    cin>>T;
    int N;

    while(T--)
    {
        cin>>N;
        cout<<nearbyint(sqrt(N))<<endl;
    }


    return 0;
}

