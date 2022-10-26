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
ll n, ans=INT_MIN, global=-1;
char ch;
string s;
cin>>n;
cin>>ch;
cin>>s;
vector<int> vect;
fori(0,n-1,1)
 if(s[i]=='g')
   {  if(global==-1)
        global=i;
    vect.push_back(i);
   }
for(int i=0; i<n; i++)
    if(s[i]==ch)
  { 
   
    // ll k=i;
    //   while(s[k%n]!='g')
    //     k++;
    //   if(ans<(k-i))
    //     ans=(k-i);    
    auto k= lower_bound(vect.begin(), vect.end(), i);
    ll u=*k;
    if(k==vect.end())
     {
           if(n-i+global > ans)
             ans=n-i+global;
     }
     else
     {
        if(ans<(u-i))
         ans=(u-i); 
     }
  }
   p(ans);
}
return 0;
}