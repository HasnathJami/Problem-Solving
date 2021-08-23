#include <iostream>
#include<algorithm>
#include<cmath>


using namespace std;

int main()
{
    int  n,m,a;
    long long res;
    cin>>n>>m>>a;


    res=ceil((double)n/a)*ceil((double)m/a);
    cout<<res<<endl;

    return 0;


}
