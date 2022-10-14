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
ll res=0;
bool x=true;

bool possible(ll A, ll B, ll arr[], ll p, ll n)
{
   // cout<<A<<" "<<B<<" "<<p<<" "<<n<<endl;
    set<ll> sete;
    fori(p,n,1)
      sete.insert(arr[i]);
 
    for(auto it : sete)
      if(it!=A++)
        {   
        //   //  cout<<A<<" "<<B<<" "<<p<<" "<<n<<endl;
        //     fori(p,n,1)
        //      cout<<arr[i]<<" ";
        //      p("\n");
            return false;  
        }
        return true;  
}
void solve(ll left, ll right, ll arr[])
{  
  // cout<<left<<" "<<right<<endl;
    if(right==left)
      return;
    if(possible(left+1,  (left+right)/2+1, arr, left , (left+right)/2 ) && possible( (left+right)/2+2,right+1, arr, (left+right)/2+1,right) )
     {  
      
          solve(left,(left+right)/2, arr );
           solve((left+right)/2+1,right, arr );

           return;
     }

    else if(possible( (left+right)/2+2,right+1, arr, left , (left+right)/2 ) && possible( left+1,  (left+right)/2+1, arr, (left+right)/2+1,right))
     {
        
           res++;
        vector<int> vect;
        for(ll i =(left+right)/2+1; i<=right; i++ )
          vect.push_back(arr[i]);
       for(ll i =left; i<=(left+right)/2; i++ )
          vect.push_back(arr[i]);

              ll k=0;
          for(int i=left; i<=right; i++)
            arr[i]=vect[k++];
    
           solve(left,(left+right)/2, arr );
           solve((left+right)/2+1,right, arr );

           return;
     }
    
    x = false;
    return ;
}
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
    res=0;
    x=true;
// your testcases here
ll n;
cin>>n;
ll arr[n];
read(arr,n);
solve(0,n-1, arr);
x?p(res):p(-1);
// p(res);
// p("\n");
}
return 0;
}