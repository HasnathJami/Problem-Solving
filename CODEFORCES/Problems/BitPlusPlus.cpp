#include <iostream>
using namespace std;


int main()

{

   int X,n,counter=0;
   string s;
   cin>>n;

   for(int i=0;i<n;i++)
   {
      cin>>s;


      if(s.find("++")!= string::npos)
      {
          counter++;
      }

      else if(s.find("--")!= string::npos)
      {
          counter--;
      }
   }


   cout<<counter<<endl;
   return 0;


}
