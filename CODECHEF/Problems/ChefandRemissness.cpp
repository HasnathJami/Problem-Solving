#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T;
    long long A,B;
    cin>>T;

    while(T--)
    {
        cin>>A>>B;

        cout<<max(A,B)<<" "<<A+B<<endl;
    }

    return 0;
}
