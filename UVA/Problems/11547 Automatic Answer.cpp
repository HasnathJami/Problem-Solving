#include <iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int res=(((((n*567)/9)+7492)*235)/47)-498;
        int res2=(res/10)%10;
        cout<<abs(res2)<<endl;
//       int r1=n*567;
//       int r2=r1/9;
//       int r3=r2+7492;
//       int r4=r3*235;
//       int r5=r4/47;

        //cout<<r5%10<<endl;
    }
}
