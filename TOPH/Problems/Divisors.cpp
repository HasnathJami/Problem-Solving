#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A;
    cin>>A;
    int n=A;

    for(int i=n;i>=1;i--)
    {
        if(A%i==0)
        {
            cout<<A/i<<endl;
        }
    }
}
