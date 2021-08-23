#include <bits/stdc++.h>
using namespace std;

int main()

{

    int N;
    cin>>N;
    vector<int> A;
    int inp,ec=0,oc=0;

    for(int i=0; i<N; i++)
    {
        cin>>inp;
        A.push_back(inp);

    }

    for(int i=0;i<N;i++)
    {
       if(A[i]%2==0)
        {
            ec++;
        }
        else
        {
            oc++;
        }
    }


    if(ec>oc)
    {
        cout<<"READY FOR BATTLE"<<endl;
    }
    else
    {
        cout<<"NOT READY"<<endl;
    }

    return 0;
}

