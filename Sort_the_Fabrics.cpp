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
static bool cmpa(pair<int, pair<string, int>> a, pair<int, pair<string, int>> b)
{
      if(a.second.first== b.second.first)
        return b.second.second > a.second.second;

        return a.second.first < b.second.first;
}
static bool cmpc(pair<int ,pair<int, int>> a, pair<int ,pair<int, int>> b)
{
      if(a.second.first== b.second.first)
        return b.second.second > a.second.second;

        return a.second.first < b.second.first;
}
int main()
{
ll tc, k=1;
cin>>tc;
while(tc--)
{
// your testcases here
int n,l;
cin>>n;
l=n;
vector<pair<int, pair<string, int>> >Ada;
vector<pair<int ,pair<int, int>>> charles;

 while(n--)
 {
   string s;
   int d, u;
   cin>>s>>d>>u;
   Ada.push_back(make_pair(n, make_pair(s, u)));
   charles.push_back(make_pair(n,make_pair(d, u)));
   
 }
 int res=0;
  sort(Ada.begin(), Ada.end(), cmpa);
    sort(charles.begin(), charles.end(), cmpc);
// for(auto it: Ada)
//    cout<<it.first<<endl;
//   for(auto it: charles)
//    cout<<it.first<<endl;

    for(int i=0; i<l; i++)
      {  
        if(Ada[i].first==charles[i].first)
        res++;
      }
     
   cout<<"Case #"<<k++<<": "<<res<<endl;
}
return 0;
}