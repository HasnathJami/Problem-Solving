#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define endl  "\n"
#define nline cout<<"\n"
#define FASTER  ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define PI        acos(-1.0)
int mod=1e9+7;

int main ()
{
    FASTER
    int N;
    cin>>N;
    ll arr[50];
    ll first=0,second=1,res=0;

   arr[0]=first;
   arr[1]=second;
   for(int i=2;i<50;i++)
   {
      res=first+second;
      arr[i]=res;


      first=second;
      second=res;
      res=0;

   }

   for(int i=0;i<50;i++)
   {
       if(i==N)
       cout<<arr[i]<<endl;
   }








    return 0;

}

