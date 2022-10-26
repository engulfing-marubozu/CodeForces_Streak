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
int arr[n];
read(arr,n);
ll res=0;
fori(0,n-1,1)
 if(s[i]=='1')
   res+=arr[i];
//    p(res);
int i=0;
while(i<n)
{
    if(s[i]=='0')
     { 
        int mini=INT_MAX-1 , index=i+1;
        while(s[index]=='1' && index<n)
                    {
                        mini = min(mini, arr[index]);
                        index++;
                    }

                if(mini<arr[i])
                 {
                    res= res-mini+arr[i];
                     i=index-1;
                 }
    
     }
     i++;
} 

p(res);        
}
return 0;
}