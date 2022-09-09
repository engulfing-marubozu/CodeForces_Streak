#include<bits/stdc++.h>

using namespace std ;



int main()
{  
    int tc;
    cin>>tc;
    while(tc--)
    {
        int n;
        cin>>n;
        int arr[n];
        int maxi=INT_MIN;
        int max_index=0;
        for(int i=0; i<n; i++)
          {
            cin>>arr[i];
           if(arr[i]>maxi)
             {
                maxi=arr[i];
                max_index=i+1;
             }
          }
cout<<max_index<<endl;
    }
    return 0;
}