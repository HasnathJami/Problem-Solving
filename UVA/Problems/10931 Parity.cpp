#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    long long n;
    while(cin>>n)
    {
        long long s=n,sum=0;
        string s2;
        if(n==0) break;

        while(s>0)
        {
            sum=sum+(s%2);
            s2+=to_string(s%2);
            s=s/2;
        }
        reverse(s2.begin(),s2.end());
        cout<<"The parity of "<<s2<<" is "<<sum<<" (mod 2)."<<endl;
    }




}

