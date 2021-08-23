#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{

    int T;
    cin>>T;
    while(T--)
    {
        double q,p;
        double bill;
        cin>>q>>p;

         bill=(q*p);

        if(q>1000)
        {
            bill=bill-(bill/10);


        }

        printf("%lf\n",bill);
    }


    return 0;

}
