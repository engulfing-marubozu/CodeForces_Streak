#include<bits/stdc++.h>
using namespace std;
 
#define mod 1000000007  // 1e9+7
#define  ll long long int
#define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
 
ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
 
// space for helper functions
int main()
{
ll tc;
cin>>tc;
while(tc--)
{
// your testcases here
ll len;
cin>>len;
 string s;
 cin>>s;
 string res;

 for(int i=len-1;i>=0; i--)
   {
    if(s[i]!='0')
       { 
       int x = s[i]-'0'+'a'-1;
      //  cout<<x<<endl;
        res+=x;
       }
    else
    {  
        string h = s.substr(i-2, 3);
       
      
        int k = stoi(h);
      //  cout<<k<<endl;
      
        k/=10;
     //   cout<<k<<endl;
        int y = k +'a'-1;
      //  cout<<y<<endl;
       res+=y; 
       i-=2; 
    } 
   }
reverse(res.begin(), res.end());
cout<<res<<endl;
}
return 0;
}