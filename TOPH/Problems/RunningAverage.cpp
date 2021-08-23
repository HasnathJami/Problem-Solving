#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin>>N;
    int a[N];
    int j=1;
    float average=0;

    for(int i=0;i<N;i++)
    {
        cin>>a[i];
        average=(average+a[i])/j;
        j++;

    }
}
