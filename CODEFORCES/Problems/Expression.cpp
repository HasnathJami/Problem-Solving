#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c,s1=0,s2=0,s3=0,s4=0,s5=0,s6=0,s7=0,s8=0,st1,st2,st3,st4,st5,st6,st7;
    cin>>a>>b>>c;

    s1=a*b*c;
    
    s2=a+b+c;
   
    s3=a+(b*c);
  
    s4=a*(b+c);
  
    s5=(a+b)*c;
  
    s6=(a*b)+c;
 


    st1= max(s1,s2);
    st2= max(st1,s3);
    st3=max(st2,s4);
    st4=max(st3,s5);
    st5=max(st4,s6);
   




    cout<<st5<<endl;


}
