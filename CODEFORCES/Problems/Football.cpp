#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER
    string s1;
    int counter1=0,counter2=0;
    cin>>s1;

    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]=='0')

        {
            counter2=0;
            counter1++;

            if(counter1==7)
                break;
        }

        else if(s1[i]=='1')
        {
            counter1=0;
            counter2++;

            if(counter2==7)
                break;
        }
    }

    if(counter1==7)
        cout<<"YES"<<endl;

    else if(counter2==7)
        cout<<"YES"<<endl;

    else
        cout<<"NO"<<endl;



    return 0;

}

