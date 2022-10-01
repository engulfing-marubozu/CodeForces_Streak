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
int n;
cin>>n;
ll arr[n];
ll arr_val[n];
read(arr,n);
read(arr_val,n);
vector<ll> vect_0, vect_1;
 for(int i=0; i<n; i++)
   if(arr[i]==1)
     vect_1.push_back(arr_val[i]);
     else
     vect_0.push_back((arr_val[i]));
     sort(vect_0.begin(), vect_0.end(), greater<int> ());
     sort(vect_1.begin(), vect_1.end(), greater<int> ());
     ll min_len=min(vect_0.size(), vect_1.size());
     ll sum=0;
 for(int i=0; i<min_len; i++)
    sum+=(2*(vect_0[i]+vect_1[i]));
  if(vect_0.size() == vect_1.size()) 
     sum-=min(vect_0[vect_0.size()-1], vect_1[vect_0.size()-1]);
     else
     {  
           if(vect_0.size() > vect_1.size())
             for(int i=vect_1.size(); i<vect_0.size(); i++)
                  
                    sum+=vect_0[i];
                
                else
               for(int i=vect_0.size(); i<vect_1.size(); i++)
                
                    sum+=vect_1[i];
                
     }     
     cout<<sum<<endl; 
}
return 0;
}