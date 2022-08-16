#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007  // 1e9+7

#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl; 

// space for helper functions 

int main()
{
ll tc;
cin>>tc;

while(tc--)
{
  ll n, k;
  cin>>n>>k;
  if(k%2==1)
   {  cout<<"YES\n";
      for(ll i=1; i<n+1; i+=2)
        cout<<i<<" "<<i+1<<endl;
   }
   else{
     ll is_possible = (k-2)%4;
     if(!is_possible)
     {  cout<<"YES\n";
         bool x = false;
           for(ll i=1; i<n+1; i+=2)
               {
                      if(x)
                      {
                            cout<<i<<" "<<i+1<<endl;
                            x=false; 
                      }
                      else
                      {
                      cout<<i+1<<" "<<i<<endl;
                      x=true;
                      }
                      
               }
     }
     else
     {
        cout<<"NO\n";
     }
   }
}

return 0;
}