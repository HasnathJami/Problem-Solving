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
        int N,gc,inp,c=0;
        cin>>N;
        vector<int> arr;
        for(int i=0; i<N; i++)
        {
            cin>>inp;

            arr.push_back(inp);
        }

        gc=arr[0];
        for(int i=1; i<N; i++)
        {
            gc=__gcd(gc,arr[i]);

        }

        for(int i=0; i<N; i++)
        {

                cout<<arr[i]/gc<<" ";


        }

        cout<<endl;

    }





    return 0;

}

