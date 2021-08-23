#include <bits/stdc++.h>
using namespace std;

int main()

{
    int t;
    cin>>t;
    vector <int> N;
    int inp;


    for(int i=0;i<t;i++)
    {
        cin>>inp;
        N.push_back(inp);

    }

     sort(N.begin(),N.end());

     for(int i=0;i<t;i++)
     {
         cout<<N[i]<<endl;
     }



    return 0;
}

