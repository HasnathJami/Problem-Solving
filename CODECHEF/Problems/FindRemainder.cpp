#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T,A,B,c=0;
    cin>>T;
    for(int i=1;i<=T;i++)
    {
        cin>>A>>B;
        c=(A%B);
        cout<<c<<endl;
        c=0;
    }


    return 0;
}
