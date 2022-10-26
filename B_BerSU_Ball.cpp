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
tc=1;
while(tc--)
{
// your testcases here
ll n,m;
cin>>n;
ll arr1[n];
read(arr1, n);
cin>>m;

ll arr2[m];
read(arr2,m);
vector<int> vect(110,0);
for(auto it: arr2)
 vect[it]++;
ll res=0;
fori(0,n-1,1)
{

    //p(arr1[i]);
  if(vect[arr1[i]-1])
 {
    res++;
     vect[arr1[i]-1]--;
    
  }
  else if(vect[arr1[i]])
  { 
     res++;
    vect[arr1[i]]--;
     
  }
  else if(vect[arr1[i]+1])
    { 
         res++;
      vect[arr1[i]+1]--;
    }
    
    }
p(res);
}
return 0;
}