#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
#define fori(s,e,g)    for(ll i=s; i<=e; i+=g)
#define ford(s,e,g)    for(ll i=s; i>=e; i-=g)
#define p(temp)        cout<<temp<<endl
 
ll  sum(ll arr[],ll n)  {ll sum=0; for(ll i=0; i<n; i++) sum+=arr[i]; return sum;}
ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
 
// space for helper functions
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
ll n,q;
cin>>n>>q;
ll arr[n];
read(arr, n);
ll so=0,se=0,on=0, en=0;
fori(0,n-1, 1)
  {
    if(arr[i]%2==1)
     {
    on++;
    so+=arr[i];
     }
else
  { en++;
    se+=arr[i];  
  }
  }
 while(q--)
 {
     ll flag,num;
     cin>>flag>>num;
      if(flag)
      {
        so+=(on*num);
        if(num%2==1)
          {
            se+=so;
            so=0;
            en+=on;
            on=0;
          }
      }
      else
      {
         se+=(en*num);
        if(num%2==1)
          {
            so+=se;
            se=0;
            on+=en;
            en=0;
          }
      }
      p(so+se);
 } 

}
return 0;
}