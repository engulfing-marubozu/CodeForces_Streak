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
ll arr[2*n];
read(arr,2*n);
vector<ll> vecto;
vector<ll> vecte;

fori(0,2*n-1,1)
  arr[i]%2==0? vecte.push_back(i+1):vecto.push_back(i+1);
ll index=1, total=1 ;
  while(index<vecte.size() && total<n)
     {
        cout<<vecte[index]<< " "<<vecte[index-1]<<endl;
          index+=2;
          total++;
     }
 index=1;
  while(index<vecto.size() && total<n)
     {
        cout<<vecto[index]<< " "<<vecto[index-1]<<endl;
          index+=2;
          total++;
     }

}
return 0;
}