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
ll arr[n];
read(arr,n);
ll on=0,z=0;
vector<ll> vo(n,0), vz(n,0);
fori(0,n-1,1)
  if(arr[i])
        vo[i]=on++;
  else
     vo[i]=on;
ford(n-1,0,1)
  if(!arr[i])
        vz[i]=z++;
  else
        vz[i]=z;
     
//  print_vect(vo);
//  print_vect(vz);

 ll one_contri=0;
 ll zero_contri=0;
 vector<ll> contri(n,0);
 ll sum=0;

 fori(0,n-1,1)
   if(arr[i])
     {
        contri[i]=vz[i];
         sum+=contri[i];
     }
   else
     {
        contri[i]=vo[i];
         sum+=contri[i];
     }
//  print_vect(contri);  
    // p(sum);  
     ll oni=0, zi=0;
     fori(0,n-1,1)
       if(arr[i]==0)
           {
            zi=i;
            break;
           }

           ford(n-1,0,1)
            if(arr[i]==1)
           {
            oni=i;
            break;
           }  

    ll m = -vo[zi]+vz[zi];
    ll l=  -vz[oni]+vo[oni];
 //cout<<m<<' '<<l<<endl;
if(l>m)
  m=l;

  if(m>0)
    p(sum/2 + m);
    else
    p(sum/2);

}
return 0;
}