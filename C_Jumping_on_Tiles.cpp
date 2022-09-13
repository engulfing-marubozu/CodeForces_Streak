#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print_arr(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl; 

 
ll   maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll   mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
// space for helper functions
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
string s;
cin>>s;
ll len = s.length();
ll arr[len];
for(int i=0; i<len; i++)
   arr[i]=s[i]-'a'+1;

//print_arr(arr,len);
vector<pair<ll, ll>> vect;
for(int i=0; i<len; i++)
  vect.push_back(make_pair(arr[i], i));
  bool ladder = (vect[0].first>vect[len-1].first)?false:true;ll res =0;
  sort(vect.begin() ,vect.end());
 

  for(auto it : vect)
    cout<<it.first<<" "<<it.second<<endl;
  if(ladder)
  { 
     
    ll res=0;
    vector<bool> visited(len, false);
    vector<ll> res_vec;
    visited[1]=true;
    res_vec.push_back(1);
    int curr_pos=0;
    
  while(curr_pos!=len-1)
    {
    ll x = arr[curr_pos];
    pair<ll, ll> k= make_pair(x, curr_pos);
     auto jit =find(vect.begin(), vect.end(), k);
   
//   cout<<x <<" found at "<<jit->first<<","<<jit->second<<endl;
    auto y =jit;
    y++;
   
    while(visited[y->second+1])
      { 
     //   cout<<y->second<<endl;
        y++;
      }
   //  cout<<x <<" stopping at "<<y->first<<","<<y->second<<endl;
   res+=abs(y->first - x);
   
 
  curr_pos = y->second;
   visited[curr_pos+1]=true;
 //  cout<<"pushing "<<curr_pos+1<<endl;
   res_vec.push_back(curr_pos+1);
    vect.erase(jit);
    }
   
   cout<<res<<" "<<res_vec.size()<<endl;
    for(auto it: res_vec)
     cout<<it<<" ";
     cout<<endl;
  }
  else
  {
   
     ll res=0;
    vector<bool> visited(len, false);
    vector<ll> res_vec;
    visited[1]=true;
    res_vec.push_back(1);
    int curr_pos=0;
  while(curr_pos!=len-1)
    {
    ll x = arr[curr_pos];
    pair<ll, ll> k= make_pair(x, curr_pos);
     auto jit =find(vect.begin(), vect.end(), k);
     visited[curr_pos+1]=true;
    //cout<<x <<" found at "<<jit->first<<","<<jit->second<<endl;
    auto y =jit;
    y++;
    while(y!=vect.end() && y->first == x)
      y++;
    y--;
    while(y!=vect.begin() && visited[y->second+1] )
      {
      //   cout<<y->second<<endl;
        y--;
      }
      int u= y->first;
      while(y->first==u)
        y--;
        y++;
       while(y!=vect.end() && visited[y->second+1] )
      {
        // cout<<y->second<<endl;
        y++;
      }  
    // cout<<x <<" stopping at "<<y->first<<","<<y->second<<endl;
   res+=abs(y->first - x);
   
 
  curr_pos = y->second;
 
   //cout<<"pushing "<<curr_pos+1<<endl;
   res_vec.push_back(curr_pos+1);
    vect.erase(jit);
    }
   
   cout<<res<<" "<<res_vec.size()<<endl;
    for(auto it: res_vec)
     cout<<it<<" ";
     cout<<endl;
  }
}
return 0;
}