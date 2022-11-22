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
bool possible(ll arr[], ll gap, ll amount, ll n, ll day)
{
      ll res=0;
   
      ll poo = min(gap, n-1);
       fori(0, poo,  1)
         {
             day--;
             res+=( arr[i]*(1+ (day/(gap+1))));
             if(day==1)
              break;
         }      
        if(res>=amount)
            return true;

        return false;

}
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
ll n, amount, day;
cin>>n>>amount>>day;
ll arr[n];
read(arr,n);

sort(arr,arr+n, greater<ll>());
   if(sum(arr,min(n, day))>=amount)
     p("Infinity");
     else if(arr[0]*day < amount)
     p("Impossible");
     else
      {  
        ll high = day+1;
        ll low =0;

           while(high>low)
           {
           ll mid = (high + low)/2;
            if(possible(arr, mid, amount,n, day))
               low= mid+1;

               else
               high= mid;
           }
         possible(arr, high, amount, n, day)? p(high): p(high-1);
      }

}
return 0;
}

