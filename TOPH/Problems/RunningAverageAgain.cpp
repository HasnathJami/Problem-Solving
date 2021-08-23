#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
int mod=1e9+7;

int main ()
{
    FASTER
    int N,sum=0,c=1;
    float avg=0;
    cin>>N;
    int arr[N];
    for(int i=0;i<N;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<N;i++)
    {
        sum=sum+arr[i];
        avg=(float)sum/c;
        cout<<avg<<endl;
        c++;

    }


    return 0;

}

