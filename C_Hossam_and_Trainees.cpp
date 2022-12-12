// #include<bits/stdc++.h>
// using namespace std;
 
// #define mod 1000000007  // 1e9+7
// #define  ll long long int
// #define  read(arr, n)  for(ll i=0; i<n; i++) cin>>arr[i];
// #define print(arr, n)  for(ll i=0; i<n; i++)  cout<<arr[i]<<' '; cout<<endl;
// #define fori(s,e,g)    for(ll i=s; i<=e; i+=g)
// #define ford(s,e,g)    for(ll i=s; i>=e; i-=g)
// #define p(temp)        cout<<temp<<endl
 
// ll  sum(ll arr[],ll n)  {ll sum=0; for(ll i=0; i<n; i++) sum+=arr[i]; return sum;}
// ll  maxi(ll arr[],ll n)  {ll maxi= -1000000000000; for(ll i=0; i<n; i++) if(maxi<arr[i])maxi=arr[i]; return maxi;}
// ll  mini(ll arr[],ll n)  {ll mini= 1000000000000; for(ll i=0; i<n; i++) if(mini>arr[i])mini=arr[i]; return mini;}
// void print_vect(vector < ll > &vect)  {for(auto it: vect)  cout<<it<<' '; cout<<endl; }
 
// // space for helper functions
// void primeFactors(ll n, unordered_set<ll> &st, bool &b)
// {
//     // Print the number of 2s that divide n
//     unordered_set<ll> st2;
//     while (n % 2 == 0)
//     { 
//         if(st.find(2)!=st.end() && st2.find(2)==st2.end())
//         {
//             b=true;
//             break;
//         }
//         else
//         {
//             st2.insert(2);
//         st.insert(2);
//         n = n/2;
//         }
//     }
 
//     // n must be odd at this point. So we can skip
//     // one element (Note i = i +2)
//     for (int i = 3; i <= sqrt(n); i = i + 2)
//     {
//         // While i divides n, print i and divide n
//         while (n % i == 0)
//         {
//                if(st.find(i)!=st.end() && st2.find(i)==st2.end())
//         {
//             b=true;
//             break;
//         }
//         else
//         {
//             st2.insert(i);
//         n = n/i;
//         }
//         }
//     }
 
   
//     if (n > 2)
//         {
//                if(st.find(n)!=st.end() && st2.find(n)==st2.end())
//         {
//             b=true;
//         }
//         else
//         {
//             st2.insert(n);
//         st.insert(n);
//         }
//         }
// }
// int main()
// {
// ll tc;
// cin>>tc;
// while(tc--)
// {
// // your testcases here
// ll n;
// cin>>n;
// ll arr[n];
// read(arr,n);
// bool b=false,c=true;
// unordered_set<ll> st;
// fori(0,n-1,1)
//   {
//     primeFactors(arr[i],st,b);
//       if(b)
//          {  c=false;
//             break;
//          }
//   }


// !c?p("YES"):p("NO");
// }
// return 0;
// }
#include <bits/stdc++.h>

using namespace std;
typedef long long ll;
const int maxX = 1e6+1;

ll ans;

int N, dp[maxX];
bool b[maxX];
vector<int> primes;

void init(){
    ans=0;
    fill(b+2, b+maxX, true);
    for(int i = 2; i*i < maxX; i++)
        if(b[i])
            for(int j = i*i; j < maxX; j += i)
                b[j] = false;
    for(int i = 2; i < maxX; i++)
        if(b[i])
            primes.push_back(i);
}

void compute(int x){
    vector<int> pf;
    for(int p : primes){
        if(x == 1)  break;
        else if(b[x]){
            pf.push_back(x);
            break;
        }

        if(x % p)   continue;
        pf.push_back(p);
        while(x % p == 0)
            x /= p;
    }

    int K = (int) pf.size();
    for(int mask = 0; mask < (1<<K); mask++){
        int mu = 1;
        for(int i = 0; i < K; i++)
            if(mask&(1<<i))
                mu *= pf[i];

        int k = __builtin_popcount(mask);
        ans += (k&1 ? -dp[mu] : dp[mu]);
        dp[mu]++;
    }
}

int main(){
    ll tc;
    cin>>tc;
    while(tc--)
    {
    init();
  
    scanf("%d", &N);
    for(int i = 0, x; i < N; i++){
        scanf("%d", &x);
        compute(x);
    }
    cout<<ans;
   ans>1? printf("YES\n"): printf("NO\n");
    }
}