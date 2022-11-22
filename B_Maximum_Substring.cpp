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
string s;
cin>>s;
ll index=0, z=0, o=0;
fori(0,n-1,1)
{
    if(s[i]=='1')
       o++;
       else
       z++;

}
ll max=0;
ll p=0;
index=0;
while(index<n)
{  
    p++;
    ll x=0;
    // p(s[index]);
    if(s[index]=='1')
       while(index<n && s[index]=='1')
            { x++;
             index++;
            }
    else
    
      while(index<n && s[index]=='0')
             {
            x++;
             index++;  
             }
      
    if(x*x>max)
     max=x*x;
    //  if(p>7)
    //    break;
    //    p(index);

}
//   p(o*z);
  max> (o*z)? p(max): p(o*z);
}
return 0;
}