#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int r,c,p;
    int minimum=INT_MAX;

    for(int i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          r=i;
          c=n/i;
          p=2*(r+c);

          if(p<minimum)
          {
              minimum=p;
          }


        }
    }


    cout<<minimum<<endl;
}
