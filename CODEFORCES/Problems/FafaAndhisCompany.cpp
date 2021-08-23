#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r;
    int counter=0;
    int i=1;
    r=n;

    while(n>=2)
    {

        n=r-i;
        if(n%i==0)
        {
            counter++;
        }
        i++;


    }

    cout<<counter<<endl;

    return 0;
}
