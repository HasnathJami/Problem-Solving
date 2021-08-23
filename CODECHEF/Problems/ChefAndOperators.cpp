#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T;
    cin>>T;
    long long A,B;

    while(T--)
    {
        cin>>A>>B;
        if(A<B)
            cout<<"<"<<endl;
        else if(A>B)
            cout<<">"<<endl;

        else if(A==B)
            cout<<"="<<endl;
    }



    return 0;
}

