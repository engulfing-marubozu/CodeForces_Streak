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
ll arr_a[n];
ll arr_b[n];
read(arr_a,n);
read(arr_b,n);
ll diff=0,a_one=0,a_zero=0,b_one=0,b_zero=0;
fori(0,n-1,1)
diff+=abs(arr_a[i]-arr_b[i]);
fori(0,n-1,1)
{
    if(arr_a[i]==0)a_zero++;
    else a_one++;
    if(arr_b[i]==0)b_zero++;
    else   b_one++;
}
ll g_diff = min(abs(a_one-b_one), abs(a_zero-b_zero));
g_diff==diff?p(g_diff):p(g_diff+1);
}
return 0;
}
