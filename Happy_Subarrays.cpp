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
ll tc,o=1;
cin>>tc;
while(tc--)
{
// your testcases here
ll n;
cin>>n;
ll arr[n];
read(arr, n);
vector<ll> ps(n+1,0);
ps[1]=arr[0];
fori(1,n-1,1)
  ps[i+1]+=(ps[i]+arr[i]);

  ll bw=0,fw=0, res=0;
  fori(0,n-1,1)
    if(arr[i]>0)
      res+=arr[i];

  while(bw <n)
  { 

    while(bw<n && arr[bw]<0)
      bw++;
     
    fw=bw;
    
    while(fw<n && ps[fw+1]-ps[bw] >= 0)
      {
        if(fw-bw>0)
        {
    if(fw!=n )
    res+=(ps[fw+1]-ps[bw]);
    else
        res+=(ps[n]-ps[bw]);
        }
     fw++;
      }
 
    bw++;
  }
 
  cout<<"Case #"<<o++<<": "<<res<<endl;
  
}

return 0;
}