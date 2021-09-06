#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
#define pb push_back
#define lb lower_bound
#define imax INT_MAX
#define imin INT_MIN
#define llmax LLONG_MAX
#define llmin LLONG_MIN

int mod=1e9+7;


int main ()
{
    FASTER
    
    int T;
    cin>>T;
    
    while(T--)
    {
    	int n;
    	cin>>n;
        int x=0,y=0,mul=1,negativePair=2,pairCombination=0;
    	
    	
    	while(n>0)
    	{
    		 x=x+(mul*(n%10));
    		 n=n/10;
    		 y=y+(mul*(n%10));
    		 n=n/10;
    		 
    		 mul=mul*10;
    		
    	}
    	
        pairCombination=((x+1)*(y+1))-negativePair;
    	
    	
    	cout<<pairCombination<<endl;
    }
    


    return 0;

}


