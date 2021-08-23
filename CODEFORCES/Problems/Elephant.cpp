#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,s;
    int step=0,lock=0;
    cin>>n;
    s=n;
    int i;


    for( i=5; i>=1; i--)
    {
        if(n%i==0 && lock==0)
        {
            step=step+(n/i);

            break;


        }
        lock=1;



        step=step+s/i;
        s=s%i;




    }

    cout<<step<<endl;
}
