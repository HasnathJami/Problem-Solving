#include <bits/stdc++.h>
using namespace std;

int main()
{
   int N,counter=0,A;
   cin>>N;

   while(N--)
   {
       cin>>A;

       if(A>=80)
        counter++;
   }

   cout<<counter<<endl;
}

