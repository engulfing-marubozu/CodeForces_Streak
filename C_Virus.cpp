

#include<bits/stdc++.h>
using namespace std;

#define  ll long long int

// space for helper functions 

int main()
{
ll tc;
cin>>tc;

while(tc--)
{ 
   
  ll n, inf_n;
  cin>>n>>inf_n;
 ll arr[inf_n];
  for(ll i=0; i<inf_n; i++)
   cin>>arr[i];
   sort(arr,arr+inf_n);
 vector<ll> vect;

 for(ll i=1; i<inf_n; i++)
   vect.push_back(arr[i]-arr[i-1]-1);
  
vect.push_back(n-arr[inf_n-1]+arr[0]-1);

   sort(vect.begin(), vect.end(), greater<int>());
 
   ll count = 0;
  ll index = 0;
   while(index<inf_n && vect[index]!=0)
   {
      if(vect[index]==1)
         {count++;
         break;
         }
       ll maxi=max((ll)0, vect[index]-1);
       count+=maxi;
    //    auto ite = vect.begin();
    //    vect.erase(ite);
        for(auto &it : vect)
          it = max((ll)0, it-4);    

 index++;
   }

   cout<<n-count<<endl; 
 
}

return 0;
}