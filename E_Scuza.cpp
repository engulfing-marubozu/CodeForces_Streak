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
ll n,m;
cin>>n>>m;
vector<ll>  stairs;
ll q[m];
for(int i=0; i<n; i++)
{  ll x;
cin>>x;
  stairs.push_back(x);
}
read(q,m);
  vector<ll> vect(n);
vector<ll> pre_sum(n);
pre_sum[0]=stairs[0];
fori(1,n-1,1)
  pre_sum[i]=pre_sum[i-1]+stairs[i];
//print_vect(pre_sum);
ll temp=0;
fori(1,n-1,1)  
   if(stairs[i]<stairs[i-1])
    stairs[i]=stairs[i-1];

    //print_vect(stairs);
    vector<ll>::iterator lower;
fori(0,m-1,1)
{  
      lower = upper_bound(stairs.begin(), stairs.end(), q[i]);
    //   cout<<*lower<<endl;
    // if(*lower!=q[i])
    //   lower--;
      ll k= lower-stairs.begin();
      
    //   if(stairs[k]!=q[i])
         k--;
        //  p(k);
     k==-1? cout<<0<<" ": cout<<pre_sum[k]<<" ";
}
cout<<endl;
}
return 0;
}