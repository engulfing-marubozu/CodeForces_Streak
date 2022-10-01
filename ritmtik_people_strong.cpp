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
// Subtract two linked list   (1->5->4  - 1->5->3) = 1
struct node{
    ll data;
    node* next;

    node(int a)
      {
        data=a;
        next =NULL;
      }
};
void add_data(node* &head, int data)
{ 
    
    if(head==NULL)
      {
        
        head= new node(data);
        return;
      }
      
      node* temp = head;
    while(temp->next!=NULL)
      temp=temp->next;

      temp->next =new node(data);
   
}
void add(node* head_1, node* head_2)
{
        int x=0;
   while(head_1)
     {  
           x*=10;
           x+=head_1->data;
           head_1 = head_1->next;
     }
         int y=0;
   while(head_2)
     {
      
          
           y*=10;
           y+=head_2->data;
            head_2 = head_2->next;
     }
    cout<<x<<" "<<y<<endl;
     cout<< x-y<<endl;
}
int main()
{

node* head_1=NULL;
node* head_2=NULL;

  int n;
  cin>>n;
  int arr_1[n];
  int arr_2[n];
    read(arr_1,n);
    read(arr_2,n);

    for(int i=0; i<n; i++)
    {
           add_data(head_1, arr_1[i]);
           add_data(head_2, arr_2[i]);

    }
    add(head_1, head_2);
return 0;
}