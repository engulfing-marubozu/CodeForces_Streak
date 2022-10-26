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

ll flagi(ll n, priority_queue<int> &vect)
{ int in=0;
    while(n%2==0 && n>0)
      {
        n/=2;
        in++;
      }
      vect.push(in);
    return in;  
}
ll flag(ll n)
{ int in=0;
    while(n%2==0 && n>0)
      {
        n/=2;
        in++;
      } 
    return in;  
}
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
priority_queue<int> vect;
ll n;
cin>>n;
ll arr[n];
read(arr, n);
ll pow=0;
for(auto it: arr)
    pow+=(flag(it));
  
 ll f=0;
fori(2,n,1)
     f+=(flagi(i, vect));  

  if(pow+f<n)
   p(-1);
   else
   {
   
    int i=0;
    while(pow<n)
      { 
        pow+=vect.top();
        vect.pop();
        i++;
      }

      p(i);
   } 

}
return 0;
}
