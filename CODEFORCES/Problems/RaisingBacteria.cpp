#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long x;
    int counter=0,s1,s2;
    cin>>x;




    while(x>1)
    {

        if(x%2==0)
        {
            x=x/2;
        }

        else
        {
            x=x/2;
            counter++;
        }
    }
    cout<<counter+1<<endl;





}
