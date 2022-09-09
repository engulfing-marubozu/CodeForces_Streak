#include<bits/stdc++.h>
using namespace std;
#define ll long long int





int main()
{   
    ll row, col;
    cin>>row>>col;

    vector<string> vect;

    for(ll i=0;i<row; i++)
      {
        string s ;
        cin>>s;
        vect.push_back(s);
      }
ll res=0;
    
    for(ll i=0; i<row-1; i++)
      for(ll j=0; j<col-1; j++)
        {
            string x ;
         
            x = string(1,vect[i][j]) + string(1,vect[i][j+1]) + string(1,vect[i+1][j]) + string(1,vect[i+1][j+1]);

            sort(x.begin(), x.end());
           //cout<<x<<endl; 
            if(x == "acef")
              res++;
        }

        cout<<res;
    return 0;
}