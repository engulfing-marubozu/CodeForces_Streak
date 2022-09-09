#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{   
    


ll tc;
cin>>tc;
while(tc--)
   
   {

    string s;
    cin>>s;
     if(s.length()<=10)
       cout<<s<<endl;

       else
       {
           string x = s[0] + to_string(s.length()-2)+ s[s.length()-1];
           cout<<x<<endl;
       }
   }
    
    return 0;
}