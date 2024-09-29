#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007 // 1e9+7
#define ll long long int
#define read(arr, n)           \
    for (ll i = 0; i < n; i++) \
        cin >> arr[i];
#define print(arr, n)          \
    for (ll i = 0; i < n; i++) \
        cout << arr[i] << ' '; \
    cout << endl;
#define fori(s, e, g) for (ll i = s; i <= e; i += g)
#define ford(s, e, g) for (ll i = s; i >= e; i -= g)
#define p(temp) cout << temp << endl

ll sum(ll arr[], ll n)
{
    ll s = 0;
    for (ll i = 0; i < n; i++)
        s += arr[i];
    return s;
}
ll maxi(ll arr[], ll n)
{
    ll m = -1e18;
    for (ll i = 0; i < n; i++)
        m = max(m, arr[i]);
    return m;
}
ll mini(ll arr[], ll n)
{
    ll m = 1e18;
    for (ll i = 0; i < n; i++)
        m = min(m, arr[i]);
    return m;
}

bool getParity(ll a, ll b) { return ((a ^ b) & 1); } // true for same, false for different
void print_vect(vector<ll> &vect)
{
    for (auto it : vect)
        cout << it << ' ';
    cout << endl;
}

// space for helper functions
void solve()
{
    int len, k;
    cin >> len >> k;
    string s;
    cin >> s;
    unordered_map<ll, ll> mp;
    fori(0, len - 1, 1)
        mp[s[i]]++;
    ll res = 0;
    for (auto it : mp)
        if (it.second % 2 == 1)
            res++;

    res - k <= 1 ? p("YES") : p("NO");
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}