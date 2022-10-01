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
 

 struct node{
  int data;
  node* left;
  node* right;
  node(int x)
  {
     data=x;
     left=NULL;
     right=NULL;
  }
 };
// space for helper functions
node* add_node(node* root, int data)
{
   if(!root)
   {
    node* temp = new node(data);
    return temp;
   }

   if(root->data >= data)
     root->left = add_node(root->left,data);
     else
     root->right= add_node(root->right, data);

} 
void in_order(node* root)
{
    if(!root)
     return ;

     in_order(root->left);
     cout<<root->data<<" ";
     in_order(root->right);

     return;
}  

void find_pair(int target, node* root,  unordered_set<int> &setee)
{   
    if(!root)
     return;
  auto it = setee.find(target-root->data);
   
   if(it!=setee.end())
     {
        cout<<*it<< " "<<root->data<<endl;
        setee.insert(root->data);
     } 
       setee.insert(root->data);
       find_pair(target, root->left, setee);
       find_pair(target, root->right, setee); 
       return;
}
int main()
{
   int n;
   cin>>n;
   ll arr[n];
   read(arr,n);
   node* root= new node(arr[0]);
   for(int i=1; i<n; i++)
     add_node(root,arr[i]);
   in_order(root);
   unordered_set<int> setee;
   cout<<endl;
   find_pair(10, root, setee);
   
return 0;
}

