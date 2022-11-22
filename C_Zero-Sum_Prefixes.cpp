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
vector<ll> pre(n+1,0);
fori(0,n-1,1)
 pre[i+1]=pre[i]+arr[i];

vector<ll> vect;
fori(0,n-1,1)
  if(arr[i]==0)
    vect.push_back(i+1);
vector<ll> dp(n+1,0);
map<ll,vector<ll>> mapp;
mapp[0].push_back(0);
fori(1,n,1)
  {   
    
 if(mapp.find(pre[i])!=mapp.end())
        { 
            for(auto it: mapp[pre[i]])
             if(it==0 && dp[i]<1)
               dp[i]=1;
             else if(dp[i]<(dp[it]+1)  && dp[it]>0 )
                dp[i]=dp[it]+1;
        }
           for(auto it: vect)
           if(it<i && (dp[it-1]+1)>dp[i] && dp[i-1]>0)
               dp[i]= dp[it-1]+1;  
if(arr[i-1]==0)
    if(dp[i-1]+1>dp[i])
      dp[i]=dp[i-1]+1;
            mapp[pre[i]].push_back(i);
  //  print_vect(dp); 
  }
  
ll res= INT64_MIN;
  fori(0,n,1)
    if(res<dp[i])
      res=dp[i];
 //print_vect(dp);
 res<0? p(0): p(res);
  
}

return 0;
}