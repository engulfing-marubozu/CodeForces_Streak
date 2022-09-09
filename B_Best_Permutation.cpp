#include<bits/stdc++.h>

using namespace std ;



int main()
{  
    int tc;
    cin>>tc;
    while(tc--)
    {
        int num;
        cin>>num;
        if((num-2) % 2==0)
        {
            for(int i=num-2; i>=1;i--)
        cout<<i<<" ";
        cout<<num-1<<" "<<num<<endl;
        }
        else
        {  
            for(int i=1; i<=3; i++)
             cout<<i<<" ";
             for(int i=num-2; i>=4; i--)
             cout<<i<<" ";
             cout<<num-1<<" "<<num<<endl;
        }
          
    }
    return 0;
}