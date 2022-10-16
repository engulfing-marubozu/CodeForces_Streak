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
ll  vect_maxi(vector < ll > &vect)  {
     ll n=vect.size();
     ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<vect[i])maxi=vect[i]; return maxi;}
void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
 
// space for helper functions
int main()
{
ll tc;
cin>>tc;
ll o=1;
while(tc--)
{
// your testcases here
ll a,b,c;
cin>>a>>b>>c;
vector<vector<ll>> vect (a, vector<ll> (b));
vector<vector<ll>> vecti (b, vector<ll> (a));
  for(ll i=0; i<a; i++)
    for(ll j=0; j<b; j++)
      {
        ll x;
        cin>>x;
        vect[i][j]=x;
      }
  for(ll i=0; i<a; i++)
    for(ll j=0; j<b; j++) 
       i==c-1?vecti[j][i]=INT_MIN: vecti[j][i]=vect[i][j];
//  for(auto it: vect)
//    print_vect(it);
//   for(auto it: vecti)
//    print_vect(it);       
ll res=0;
ll i=0;
   for(auto it: vecti)
     {   
        ll r=vect_maxi(it);
        if(r>vect[c-1][i])
          res+= r-vect[c-1][i]; 
          i++;
     }
    cout<<"Case #"<<o++<<": "<<res<<endl;
}
return 0;
}