#include<bits/stdc++.h>
using namespace std;

#define mod 1000000007  // 1e9+7
#define ll long long int
#define read(arr, n) for(ll i=0; i<n; i++) cin>>arr[i];
#define print(arr, n) for(ll i=0; i<n; i++) cout<<arr[i]<<' '; cout<<endl;
#define fori(s,e,g) for(ll i=s; i<=e; i+=g)
#define ford(s,e,g) for(ll i=s; i>=e; i-=g)
#define p(temp) cout<<temp<<endl

ll sum(ll arr[], ll n) { ll s = 0; for(ll i=0; i<n; i++) s += arr[i]; return s; }
ll maxi(ll arr[], ll n) { ll m = -1e18; for(ll i=0; i<n; i++) m = max(m, arr[i]); return m; }
ll mini(ll arr[], ll n) { ll m = 1e18; for(ll i=0; i<n; i++) m = min(m, arr[i]); return m; }

void print_vect(vector<ll> &vect) {
    for(auto it: vect) cout << it << ' ';
    cout << endl;
}

// space for helper functions
void solve() {
    ll n;
    cin >> n;
    ll arr[n];
    read(arr, n);
    ll res=arr[0];
    fori(1, n - 1, 1)
        res ^= arr[i];
    
    n%2==1? p(res): res==0? p(0) :p(-1);
}

int main() {
    ll tc;
    cin >> tc;
    while(tc--) solve();
    return 0;
}