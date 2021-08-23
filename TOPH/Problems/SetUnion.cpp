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
    set<int> s;
    set<int> :: iterator it;
    int N,M,c=0;
    cin>>N>>M;
    int A[N],B[M];
    int inp1,inp2;
    for(int i=0;i<N;i++)
    {
        cin>>inp1;
        s.insert(inp1);
    }
      for(int i=0;i<M;i++)
    {
        cin>>inp2;
        s.insert(inp2);
    }

    for(it=s.begin();it!=s.end();it++)
    {
        c++;
        cout<<*it;
        if(c<s.size())
            cout<<" ";
    }

    cout<<endl;












    return 0;

}

