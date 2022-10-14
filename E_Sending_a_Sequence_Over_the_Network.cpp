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
bool solve(ll pointer, ll size, ll arr[], vector<ll> &dp)
{
    if(pointer==size)
       return true;
    if(pointer>size)
      return false;
    ll x= pointer;
    bool b= true;
    vector<ll> vect;
    for(;x<size; x++)
      if(arr[x]==x-pointer)
        {  
              b=false;
            vect.push_back(x);
        }
    if(!b)    
    {     
        if(dp[pointer]!=-1)
          return dp[pointer];
          bool res = solve(pointer + arr[pointer]+1, size, arr, dp);
           for(auto it: vect)
                res= res|| solve(it+1, size, arr, dp) ;

             dp[pointer]=res?1:0;
             return dp[pointer];
    }
    else
    {
      
       if(dp[pointer ]!=-1)
        return dp[pointer];
      dp[pointer]=solve(pointer + arr[pointer]+1, size, arr, dp)?1:0;
       return dp[pointer];
    }
}
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
vector<ll> dp(n,-1);
// print(arr,n);
solve(0,n, arr, dp)?p("YES"):p("NO");
}
return 0;
}