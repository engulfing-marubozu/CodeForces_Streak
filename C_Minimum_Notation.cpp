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
string  sorted, s;
cin>>sorted;
s=sorted;
sort(sorted.begin(), sorted.end());
int i=0;

while(sorted[i]==s[i])
  i++;

  i++;

while(sorted[i]==sorted[i-1])
 i++;
 //cout<<i<<endl;
  int j=sorted.length()-1;
while(sorted[j]==sorted[i-1])
  j--;
  int k=sorted.length()-1;
 
while(sorted[j]==s[k])
{
    j--; k--;
}

 for(int m=i; m<j; m++)
   {
    int x = sorted[m]-'0';
    char ch = x + '0'+1;
    sorted[m]=sorted[m]=='9'?'9':ch;
   }
  cout<<sorted<<endl;    
}
return 0;
}