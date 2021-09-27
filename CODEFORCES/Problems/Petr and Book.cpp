#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main ()
{
    FASTER
    int n;
    cin>>n;
    int arr[7];

    for(int i=0; i<7; i++)
        cin>>arr[i];

    int sum=0;
    int j=0,res=0;
    while(n>sum)
    {
        sum=sum+arr[j];
        res=j;

        if(j==6)
            j=0;

        else
        {
            j++;
        }


    }

    cout<<res+1<<endl;



    return 0;

}






