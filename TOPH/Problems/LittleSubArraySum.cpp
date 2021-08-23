#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,A,B,sum=0;
    cin>>N>>A>>B;
    int a[N];

    for(int i=0;i<N;i++)
    {
       cin>>a[i];
    }

     for(int i=A;i<=B;i++)
    {
        sum=sum+a[i];

    }


    cout<<sum<<endl;
}
