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
ll n;
cin>>n;
ll arr[n];
read(arr,n);
  ll a=2, b=3 ;
  ll m=0,l=0;

  if(n==1)
   p(1);
   else
   {
  if(arr[0]==arr[n-2] && arr[1]==arr[n-1])
    {
          m++;
           while( a<n-1 && arr[a]==arr[0] && arr[b]==arr[1])
    {
        m++;
        a+=2;
        b+=2;
    }
    a= n-2,b=n-1;
     while( a>=0 && arr[a]==arr[0] && arr[b]==arr[1])
    {
        l++;
        a-=2;
        b-=2;
    }
   if(m==n/2)
     p(n/2+1);
   else
    p(n);
    }
    else
    {
        p(n);
    }
   }
   
}
return 0;
}