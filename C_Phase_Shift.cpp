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
set<int>h;
int f[128],fa[128];
inline int fi(const int a){return fa[a]==a?a:fa[a]=fi(fa[a]);}
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
  
// your testcases here
int n;cin>>n;
		for(int i='a';i<='z';++i) h.insert(i);
		for(int i='a';i<='z';++i)fa[i]=i;
		memset(f,0,sizeof(f));
		while(n--)
		{
			char c;cin>>c;
			if(!f[c])
			{
				for(const int i:h)if(fi(i)!=c&&h.find(i)!=h.end())
				{
					f[c]=i;fa[c]=i;h.erase(i);break;
				}
				if(!f[c])
					f[c]=*h.begin();
			}
			putchar(f[c]);
		}
		puts("");
}
return 0;
}