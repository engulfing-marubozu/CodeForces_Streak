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
bool res=true; 
 
if(n==1 || n==2)
  {
    p("YES");
  }
else
{  
     fori(1,n-2,1)
       {
        if((arr[i]>arr[i-1] && arr[i]>arr[i+1]) || (arr[i]<arr[i-1] && arr[i]<arr[i+1]) )
            {
                res=false;
                break;
            }
        else if(!(arr[i]%arr[i-1]==0 || arr[i-1]%arr[i]==0)) 
            {
                 res=false;
                break;
            }   
 
       } 
       if(!(arr[n-2]%arr[n-1]==0 || arr[n-1]%arr[n-2]==0 )) 
           {
                 res=false;
             
            } 
       res ?p("YES"):p("NO");
}  

}
return 0;
}