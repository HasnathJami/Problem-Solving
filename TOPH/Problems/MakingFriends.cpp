#include <bits/stdc++.h>
using namespace std;

int main()
{
    int A,counter=0;
    cin>>A;
    int n=A;

    for(int i=n;i>=1;i--)
    {
        if(A%i==0)
        {

            counter++;
        }
    }

    cout<<counter-1<<endl;
}

