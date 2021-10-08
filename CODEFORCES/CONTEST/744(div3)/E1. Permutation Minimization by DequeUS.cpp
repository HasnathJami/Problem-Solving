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

    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }

        deque<int> q;

        for(int i=0; i<n; i++)
        {
            if(q.empty())
            {
                q.push_back(a[i]);
            }

            else if(q.front()>a[i])
            {
                q.push_front(a[i]);
            }

            else
            {
                q.push_back(a[i]);
            }
        }


        for(int i=0; i<n; i++)
        {
            cout<<q[i]<<" ";
        }
        cout<<endl;










    }




    return 0;

}







