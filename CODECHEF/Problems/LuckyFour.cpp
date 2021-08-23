#include <bits/stdc++.h>
using namespace std;

int main()

{
    int T;
    cin>>T;
    int N;

    for(int i=1;i<=T;i++)
    {
        int c=0;
        cin>>N;
        while(N!=0)
        {
            if(N%10==4)
            {
                c++;
            }

            N=N/10;

        }

        cout<<c<<endl;
    }


    return 0;
}

