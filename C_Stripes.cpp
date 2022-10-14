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
vector<string> vect(8);
vector<string> vectv(8);

fori(0,7,1)
  cin>>vect[i];
 
for(int i=0; i<8; i++)
  for(int j=0; j<8; j++)
      vectv[i].push_back(vect[j][i]);

    //   fori(0,7,1)
    //    cout<<vectv[i]<<endl;
 int ct=0;
 bool b=true;
if(b)
{for(auto it : vect)
  {
     ct=0;
     fori(0,7,1)
      if(it[i]=='R')
        ct++;

         if(ct==8)
    {
        p('R');
        b=false;
        break;
    } 
  } 
}
//     ct=0; 
//     if(b){
//     for(auto it : vect)
//   {
//      ct=0;
//      fori(0,7,1)
//       if(it[i]=='B')
//         ct++;

//          if(ct==8)
//     {
//         p('B');
//         b=false;
//         break;
//     }
//   } 
 //   }
// if(b){
//  for(auto it : vectv)
//   {
//      ct=0;
//      fori(0,7,1)
//       if(it[i]=='R')
//         ct++;

//          if(ct==8)
//     {
//         p('R');
//         b=false;
//         break;
//     } 
//   } 
// }
    
    if(b){
    for(auto it : vectv)
  {
    
     ct=0;
     fori(0,7,1)
      if(it[i]=='B')
        ct++;
     
          if(ct==8)
    {
        p('B');
        break;
       
    }  
  } 
    }

}
return 0;
}