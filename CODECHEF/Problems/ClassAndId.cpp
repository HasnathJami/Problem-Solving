#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define endl  "\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)

int main ()
{
    FASTER

    int T;
    char c;
    cin>>T;
    while(T--)
    {
        cin>>c;
        if(c=='B'||c=='b')
            cout<<"BattleShip"<<endl;
        if(c=='C'||c=='c')
            cout<<"Cruiser"<<endl;
        if(c=='D'||c=='d')
            cout<<"Destroyer"<<endl;

        if(c=='F'||c=='f')
            cout<<"Frigate"<<endl;



    }




    return 0;

}

