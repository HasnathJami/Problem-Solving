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
    int T;
    cin>>T;
    while(T--)
    {
        int N,mini=INT_MAX,mini2=INT_MAX;
        cin>>N;
        int arr[N];

        for(int i=0;i<N;i++)
        {
            cin>>arr[i];
            mini=min(mini,arr[i]);
        }

        for(int i=0;i<N;i++)
        {
            if(arr[i]==mini)
                continue;

            mini2=min(mini2,arr[i]);
        }


      cout<<mini+mini2<<endl;

    }


    return 0;

}
