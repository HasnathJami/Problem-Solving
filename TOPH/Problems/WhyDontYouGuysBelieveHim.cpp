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
    int n,X,sum=0;
    cin>>n>>X;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

     for(int i=0;i<n;i++)
            sum=sum+arr[i];

     if(sum>X)
        cout<<"Yes"<<endl;
     else
        cout<<"No"<<endl;




    return 0;

}

