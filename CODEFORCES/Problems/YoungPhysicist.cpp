#include <bits/stdc++.h>
using namespace std;
typedef int declare;

int main()

{
    declare n,xi,yi,zi,sumx=0,sumy=0,sumz=0;
    cin>>n;
    vector<int> x;
    vector<int>y;
    vector<int>z;


    for(int i=0;i<n;i++)
    {
       cin>>xi>>yi>>zi;
       x.push_back(xi);
       y.push_back(yi);
       z.push_back(zi);
    }

    for(int i=0;i<n;i++)
    {
       sumx=sumx+x[i];
       sumy=sumy+y[i];
       sumz=sumz+z[i];
    }

    if(sumx == 0 && sumy == 0 && sumz == 0 )
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;
}
