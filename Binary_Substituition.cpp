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
string s;
cin>>s;
ll len=s.length();
ll arr[len+1];
memset(arr, 0, sizeof(arr));
arr[0]=1;
arr[1]=1;
fori(2,len, 1)
 {
    if( (s[i-1]=='b'&& s[i-2]=='a') || (s[i-1]=='a' && s[i-2] == 'b'))
                 arr[i]=(arr[i-1]%998244353+arr[i-2]%998244353)%998244353;
      else
                  arr[i]=arr[i-1]%998244353;        
 }
 p(arr[len]%998244353);
}
return 0;
}