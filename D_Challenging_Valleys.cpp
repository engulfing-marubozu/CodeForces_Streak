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
bool inc(vector<ll> &v)
{
      fori(1,v.size()-1,1)
        if(v[i]<v[i-1] )
             return false;

             return true;
}

bool decr(vector<ll> &v)
{
      fori(1,v.size()-1,1)
        if(v[i]>v[i-1])
             return false;

             return true;
}
bool mt(vector<ll> &v)
{
ll res =0;
       fori(1,v.size()-2,1)
         if(v[i]>v[i-1] && v[i]>v[i+1])
            return true;

            return false;
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

vector<ll> v;
v.push_back(arr[0]);
fori(1,n-1,1)
  if(arr[i]!=arr[i-1])
    v.push_back(arr[i]);

//print_vect(v);
   if(v.size()==1 || inc(v) || decr(v))
     p("YES");
     else
     {
       
       ll res =0;
       fori(1,v.size()-2,1)
         if(v[i]<v[i-1] && v[i]<v[i+1])
            res++;
     // p(res);
            if(res==1 && !mt(v))
              p("YES");
              else
              p("NO");

     }
}
return 0;
}