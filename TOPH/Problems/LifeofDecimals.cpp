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
    int A[12]= {1,4,1,5,9,2,6,5,3,5,8,9};
    int T;
    cin>>T;

    while(T--)
    {
        int N;
        cin>>N;
        cout<<A[N-1]<<endl;
    }






    return 0;

}


