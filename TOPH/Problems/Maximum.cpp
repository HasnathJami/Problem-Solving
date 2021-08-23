#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N,maximum=INT_MIN;
    cin>>N;
    int a[N];

    for(int i=0;i<N;i++)
    {
        cin>>a[i];

        if(a[i]>maximum)
        {
            maximum=a[i];
        }
    }

    cout<<maximum<<endl;
}
