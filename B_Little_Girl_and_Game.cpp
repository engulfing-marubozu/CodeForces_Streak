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
int solve(ll pair, ll non_pair,vector<vector<int>> &dp)
{

     // cout<<pair<<" "<<non_pair<<endl;
      if(non_pair==1 || non_pair==0)
            { 
                dp[pair][non_pair] =1;
                return 1;
            }
      if(dp[pair][non_pair]!=-1)
        {  
          
            return dp[pair][non_pair];
        }
      if(pair>0)
      {
     
      if(!solve(pair-1, non_pair+1, dp) || !solve(pair, non_pair-1, dp))
       {
        dp[pair][non_pair] =1;
          return 1;
       }
      }
      else if(!solve(0, non_pair-1, dp))
       {
            dp[pair][non_pair] =1;
               return 1;
       }

        dp[pair][non_pair] =0;
       return 0;
}
int main()
{
string s;
cin>>s;
map<char, int> mapp; 
int len = s.length();
fori(0, len-1, 1)
 mapp[s[i]]++;
 ll pair=0, non_pair=0;
for(auto it: mapp)
 if(it.second%2==1)
   non_pair++;
   else
   pair+=(it.second/2); 
  // cout<<pair<<" "<<non_pair<<endl;
vector<vector<int>> dp(1100,vector<int>(1100, -1));
//cout<<dp.size()<<dp[0].size();
if(solve(pair, non_pair, dp))
cout<<"First\n";
else
cout<<"Second\n";  
return 0;
}