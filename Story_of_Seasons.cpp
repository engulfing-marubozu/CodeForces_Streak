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
ll tc,e=1;
cin>>tc;
while(tc--)
{
    ll money=0;
// your testcases here
 ll total_days, num_seed, seed_per_day;
 cin>>total_days>>num_seed>>seed_per_day;
 vector<vector<ll>> vect;
 for(ll i=0; i<num_seed; i++)
   {
    ll total_seed, mature_days, paisa;
    cin>>total_seed>> mature_days>>paisa;
   vect.push_back({paisa, mature_days, total_seed});
   }
   sort(vect.begin(), vect.end(), greater<vector<ll>>());
//    for(auto it: vect)
//     cout<<it[0]<<" "<<it[1]<<" "<<it[2]<<endl; 
  // ll seeds_left[total_days+1];
   vector<ll> seeds_left(total_days+1,0);
  // cout<<seed_per_day<<endl;
   
   for(ll i=0; i<total_days+1; i++)
      seeds_left[i]=seed_per_day;
      
    for(auto it: vect)
    {
        ll day = total_days-it[1];
      //  cout<<"on day "<<day<<endl;
         ll k=day;
         while(seeds_left[k]<=0)
            k--;
            
         bool u=true;
         while(u)
         {
             if(it[2]<=0 || k<=0)
               u=false;
             else
             {
                 if(it[2]>seeds_left[k])
                 {
                     money+=(it[0]*seeds_left[k]);
                    
                      it[2]-=seeds_left[k];
                      seeds_left[k]=0;
                        k--;
                 } 
                 else{
                   // cout<<"hello\n";
                      money+=(it[0]*it[2]);
                     
                      seeds_left[k]-=it[2];
                     it[2]=0;
                      k--;
                 }
             }  
         } 
    //       for(ll i=0; i<total_days+1; i++)
    //   cout<<seeds_left[i]<<" ";
    //   cout<<endl;
    }
    // for(ll i=0; i<total_days+1; i++)
    //   cout<<seeds_left[i]<<" ";
    //   cout<<endl;
    cout<<"Case #"<<e++<<": "<<money<<endl;
}
return 0;
}