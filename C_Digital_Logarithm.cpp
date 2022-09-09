#include<bits/stdc++.h>

using namespace std ;

#define ll long long int 
void x(vector<ll> &arr1, vector<ll> &arr2)
{
         sort(arr1.begin(), arr1.end());
           sort(arr2.begin(), arr2.end());
  vector<int> temp;
    for( int i=0; i<arr1.size(); i++)
      {
       auto  it = find (arr2.begin(), arr2.end(), arr1[i]);
           if(it!=arr2.end())
            {
                temp.push_back(arr1[i]);
                arr2.erase(it);
            }
      } 
      
      for(auto it: temp)
      {
         auto jit = find (arr1.begin(), arr2.end(), it);
         arr1.erase(jit);
      } 
}     
int main()
{  
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        vector<ll> arr1(n,0);
        vector<ll>  arr2(n,0);

        for(int i=0; i<n; i++)
         cin>>arr1[i];

         for(int i=0; i<n; i++)
         cin>>arr2[i];  



        for(auto it: arr1)
        cout<<it<<" ";
        cout<<endl;
           for(auto it: arr2)
        cout<<it<<" ";
        cout<<endl; 
 int res=0;
 for(int i=0; i<2;i++)
 {  
   x(arr1, arr2);
    for(int i=0; i<arr1.size(); i++)
      {
          if(arr[1]>)  
          // not made fully
      }
 }      
      cout<<res<<endl;
 
    }
    return 0;
}