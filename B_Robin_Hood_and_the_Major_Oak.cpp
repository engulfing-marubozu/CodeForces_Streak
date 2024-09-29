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

std::map<ll, ll> lastDigitMap = {
    {0, 0},
    {1, 1},
    {2, 4},
    {3, 7},
    {4, 4},
    {5, 5},
    {6, 6},
    {7, 3},
    {8, 4},
    {9, 9}};
// space for helper functions
void solve()
{
    ll n, k;
    cin >> n >> k;

    ll res = 0;
    ll start = n - k + 1;
    ll end = n;
    // First loop: from start to the next divisor of 10
    for (ll i = start; i < (start + 10) - (start % 10); ++i)
    {
        res += (lastDigitMap[i % 10]);
    }

    // Second loop: from the last multiple of 10 before end to end
    for (ll i = end - (end % 10); i <= end; ++i)
    {
        res += (lastDigitMap[i % 10]);
    }

    // Calculate the last number
    ll last_number = (end - (end % 10) - (start + 10 - (start % 10))) / 10;
    res += (last_number * 43);

    res % 2 == 0 ? p("YES") : p("NO");
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}