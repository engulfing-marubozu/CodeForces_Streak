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
ll n,k,m;
cin>>n>>k;
string s;
m=k;
cin>>s;
sort(s.begin(), s.end());
vector<int> vect(26, 0);
fori(0, n-1,1)
  vect[(int)(s[i]-'a')]++;
string res="";
// for(auto it: vect)
//   p(it);
//   p("\n");
for(int i=0; i<26; i++)
{   if(k==0)
      break;
    //    cout<<k<<" "<<res<<endl;
    if(vect[i]==0 || i==n/m)
      { 
       
        for(int j=0; j<k; j++)
          res+=(i+'a');
          break;
      }

  ll p=vect[i];
     for(int j=0; j<k-p; j++)
        res=res+(char)(i+'a');

    if(k>vect[i])
      k=vect[i];
}
sort(res.begin(), res.end(), greater<int>());
p(res);
}
return 0;
}