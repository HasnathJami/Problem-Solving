#include <bits/stdc++.h>
using namespace std;

int main()

{
    int s=0,n,ns;
    int xi,yi;

    vector<pair<int, int> >v;
    int inp1,inp2;

    cin>>s>>n;

    for(int i=0; i<n; i++)
    {
        cin>>inp1>>inp2;
        v.push_back(make_pair(inp1,inp2));

    }

    sort(v.begin(),v.end());
    for(int i=0; i<n; i++)
    {


        if(s>v[i].first)
        {
            s=s+v[i].second;

        }

        if(s<=v[i].first)
        {

            cout<<"NO"<<endl;
            return 0;;
        }
    }



    cout<<"YES"<<endl;
}
