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
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
int a,b,c;
cin>>a>>b>>c;
if(min(b,c)!=0 || max(b,c)==0)
  cout<<-1<<endl;
else if((a-1)%max(b,c)!=0)
  cout<<-1<<endl;
  else{
    int r=max(b,c);
    int y=0;
    int curr=1;
    for(int i=2; i<=a; i++)
      {
        if(y<r)
         {
            cout<<curr<<" ";
            y++;
         }
         else
         {
            curr=i;
            cout<<curr<<" ";
            y=1;
         }
      }
      cout<<endl;
  }
 
}
return 0;
}