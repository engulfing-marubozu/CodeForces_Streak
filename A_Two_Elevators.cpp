#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
 
ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
 
// space for helper functions
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
 int n=3;
 ll arr[3];
 read(arr, n);
 ll a = abs(arr[0]-1);
 ll b =  abs(arr[1]-arr[2])+abs(arr[2]-1);

 if(a==b)
  cout<<3<<endl;
else if(a>b)
  cout<<2<<endl;
  else
  {
    cout<<1<<endl;
  }
}
return 0;
}