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
// 4 6 9 10 1 2 


int main()
{
int n;
cin>>n;
int arr[n];
read(arr, n);
int left=0, right=n-1;
if(arr[0]<arr[n-1])
    cout<<arr[0];
    else
    {
   while(true)
   {   
      int mid = (left+right)/2;
    
       if(mid==0 || mid==n-1)
         {
            cout<<arr[mid];
            break;
         }
        if(arr[mid] < arr[mid+1] &&  arr[mid]< arr[mid-1])
         {
            cout<<arr[mid];
            break;
         }
       if(arr[mid]> arr[0])
           left= mid+1;
        else
          right = mid-1;   
   }
    }
return 0;
}