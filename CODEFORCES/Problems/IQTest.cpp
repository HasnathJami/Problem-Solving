#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v;
    int inp,countere=0,countero=0,se=0,so=0;

    for(int i=0;i<n;i++)
    {
        cin>>inp;
        v.push_back(inp);
    }

    for(int i=0;i<n;i++)
    {
        if(v[i]%2!=0)
        {

            so=i+1;
            countero++;
        }

         if(v[i]%2==0)
        {

            se=i+1;
            countere++;
        }

    }

    if(countero==1)
        cout<<so<<endl;

    if(countere==1)
        cout<<se<<endl;
}
