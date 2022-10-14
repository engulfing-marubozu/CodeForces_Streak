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
ll l;
cin>>l;
ll arr[l];
read(arr,l);
ll k=0;
ll sum=0;
ll curr_start=1, curr_end=1;
while(k<l)
{
  if(arr[k-1]>=curr_end )
    {
      curr_end++;  
    }
  else
  { 
    // p("dbf");
    // p(k);
    // p(curr_end);
    // p(curr_start);
    k--;
    //  k!=n-1?curr_end--:curr_end+=0;
    ll n = curr_end-curr_start;
   // p(n);
    n%2==0? sum+=((n/2)*(n+1)): sum+=(n*((n+1)/2));
    curr_start=curr_end=1;
      }
    k++;
}
 ll n = curr_end-curr_start;
    // p(n);
    n%2==0? sum+=((n/2)*(n+1)): sum+=(n*((n+1)/2));
p(sum);
}
return 0;
}