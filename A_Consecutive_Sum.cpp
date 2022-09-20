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
ll n,k;
cin>>n>>k;
ll arr[n];
read(arr,n);
ll maxi=0;
for(int i=0; i<k; i++)
  maxi+=arr[i];
  ll l=0;
  int sum=maxi;
for(int i=k; i<n; i++)
  { 
    sum=sum+arr[i]-arr[i-k];
   // cout<<sum<<endl;
     if(sum>maxi)
       { l=i-k+1;
        maxi=sum;   
       }
  }
  // cout<<maxi<<endl;
//    cout<<l<<endl;

   for(int i=l; i<l+k; i++)
     {
        int start= i%k;
       // cout<<start<<endl;
        int u_max=arr[start];
        for(int h=start; h<n; h+=k)
           { 
            //cout<<"higi "<<h<<endl;
            if(arr[h]>u_max)
              u_max=arr[h];
           
           }
            //  arr[i]=u_max;
             maxi=maxi+u_max-arr[i]; 
     }
// ll maxi_u=0;
// for(int i=0; i<k; i++)
//   maxi_u+=arr[i];

//   int sum_u=maxi_u;
// for(int i=k; i<n; i++)
//   { 
//     sum_u=sum_u+arr[i]-arr[i-k];
//    // cout<<sum<<endl;
//      if(sum_u>maxi_u)
//        { 
//         maxi_u=sum_u;   
//        }
//   }
  cout<<maxi<<endl;
}
return 0;
}
