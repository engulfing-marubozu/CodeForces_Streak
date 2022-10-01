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
ll n;
cin>>n;
ll arr[n];
read(arr, n);
vector<pair<ll, ll>> vect;

for(int i=0; i<n; i++)
{   
    // ll a=i-1>=0?arr[i-1]:INT_MIN;
    // ll b=arr[i];
    // ll c=i+1<=n-1?arr[i+1]:INT_MAX;
    // if(b>c || b<a)
      { // cout<<i<<endl;
        if(i!=0 && (arr[i]+arr[i-1])%2!=0)
                     {
                        vect.push_back(make_pair(i, i+1));
                        arr[i]=arr[i-1];
                     }

        else
        {  ll mini=INT_MAX, index=-1;
       
             for(int j=i+1; j<n; j++)
              if((arr[j]+arr[i])%2==0 && arr[j]>=(i==0?-1:arr[i-1]))
                  {  
                   // cout<<i<<" "<<j<<" "<<arr[j]<<" "<<arr[i]<<" "<<(i==0?arr[i]:arr[i-1])<<endl;
                    if(mini>arr[j])
                       { mini=arr[j];
                        index=j;  
                       } 
                  }
                  if(mini!=INT_MAX)
                  { arr[i]=mini;
                   vect.push_back(make_pair(i+1, index+1));
                  }
        }
        //print(arr,n);
      }
     
}
//print(arr,n);
 cout<<vect.size()<<endl;
      for(auto it: vect)
        cout<<it.first<<" "<<it.second<<endl;
}
return 0;
}