#include <iostream>
using namespace std;

int main()
{

    int n;
    cin>>n;
    string conc;

    for(int i=0; i<n; i++)
    {
        string s1;
        cin>>s1;
        conc=conc+s1;
    }

    cout<<conc<<endl;


}
