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
    ll n, k, b, s;
    cin >> n >> k >> b >> s;

    if (k * (b) + (k - 1) * n < s || k * b > s)
    {
        p(-1);
        return;
    }
    vector<ll> res;
    res.push_back(k * b);
    ll left = s - k * b;
    res[0] += (min(k - 1, left));
    left -= min(k - 1, left);
    while (left > 0)
    {
        res.push_back(min(k - 1, left));
        left -= min(k - 1, left);
    }
    while (res.size() < n)
        res.push_back(0);
    print_vect(res);
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}

// fucking focus. took 1 hour to solve a 10 min problem.