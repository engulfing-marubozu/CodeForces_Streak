#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
 
ll  sum(ll arr[],ll n)  {ll sum=0; for(ll i=0; i<n; i++) sum+=arr[i]; return sum;}
ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
 
// space for helper functions
int main()
{
ll tc, u=1;
cin>>tc;
while(tc--)
{
// your testcases here
  int n, q;
  cin>>n>>q;
  int dp[n+1];
  for(int i=0; i<n+1;i++)
    dp[i]=0;
  dp[1]=1;
  vector<pair<int, int>> vect;
  for(int i=0; i<n-1; i++)
  {
    int a, b;
    cin>>a>>b;
     if(a>b)
      vect.push_back(make_pair(b,a));
     else
     {
         vect.push_back(make_pair(a,b));
     }
  }
  sort(vect.begin(), vect.end());
  int l;
  for(auto it: vect)
    {
        dp[it.second]=dp[it.first]+1;
    }
  for(int i=0; i<q; i++)
    cin>>l;
  int levels[n+1];
  for(int i=0; i<n+1; i++)
    levels[i]=0;
  for(int i=1; i<n+1; i++ )
     levels[dp[i]]++;

    //  for(int i=0; i<n+1; i++)
    //    cout<<levels[i]<<" ";
    //    cout<<endl;
  
  int sum=0;
    for(int i=0; i<n+1; i++)
    {  if(sum+levels[i] > q)
         break;
        sum+=levels[i];
    }

    cout<<"Case #"<<u++<<": "<<sum<<endl;
}
return 0;
}