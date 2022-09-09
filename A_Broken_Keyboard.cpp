#include<bits/stdc++.h>

using namespace std;
#define ll long long int
int main()
{  

    ll tc;
    cin>>tc;
    while(tc--)
    {   set<char> sete;
        string s;
        cin>>s;
        ll size = s.length();

        for(ll i=0; i<size-1; i++)
          { 
            if(i+1>size-1)
                break;
             
            if(s[i]==s[i+1])
              {
                s[i]='0';
                s[i+1]='0';
                i++;
              }
          }
     
         for(ll i=0; i<size; i++)
           if(s[i]!='0')
             sete.insert(s[i]);
         string x="";

         for(auto it : sete)
            x+=it;
             
        
          cout<<x<<endl;
    }
    return 0;

}