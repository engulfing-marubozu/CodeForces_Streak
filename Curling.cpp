
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
 ll circle(ll x1, ll y1, ll r1, ll r2)
{
  ll d = (x1  *x1) + (y1 * y1 );
    // p(d);
    if (d <= (r1 + r2)*(r1 + r2)  ) 
       return d;
    
    else 
        return -1;
    
}
 
int main()
{
ll tc,o=1;
cin>>tc;
while(tc--)
{
// your testcases here
ll r1,r2;
cin>>r1>>r2;
ll n;
cin>>n;
vector< ll> vect_red;
fori(0,n-1,1)
{ 
    ll x,y;
    cin>>x>>y;
    ll d= circle(x, y, r2,r1);
  //  p(d);
  if(d!=-1)
 vect_red.push_back(d);
}
ll m, ans=0;
cin>>m;
vector< ll> vect_y;
fori(0,m-1,1)
{ 
    ll x,y;
    cin>>x>>y;
    ll d= circle(x, y, r2,r1);
    //p(d);
    if(d!=-1)
 vect_y.push_back(d);
}
ll red=0,y=0;
sort(vect_red.begin(), vect_red.end());
sort(vect_y.begin(), vect_y.end());
m=vect_y.size();
n=vect_red.size();
if(m==0)
   red=vect_red.size();
   else if(n==0)
   y=vect_y.size();
   else
 {
  if(vect_red[0]<vect_y[0]){
                for(int i=0; i<n; i++){
                    if(vect_red[i]<vect_y[0]){
                        red++;
                    }else{
                        break;
                    }
                }
            }else{
                for(int i=0; i<m; i++){
                    if(vect_y[i]<vect_red[0]){
                        y++;
                    }else{
                        break;
                    }
                }
   }
 }
 cout<<"Case #"<<o++<<": "<<red<<" "<<y<<endl;
}
return 0;
}