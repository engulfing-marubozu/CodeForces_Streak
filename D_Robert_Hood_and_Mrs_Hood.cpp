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
    ll n, d, k;

    cin >> n >> d >> k;

    vector<pair<ll, ll>> vPr(k);
    fori(0, k - 1, 1)
    {
        ll start, end;
        cin >> start >> end;
        vPr[i].first = start;
        vPr[i].second = end;
    }
    vector<ll> ansArray;
    ll minVal = 1000000000, maxVal = 0, minIndex = 0, maxIndex = 0;
    fori(d - 1, n - 1, 1)
    {
        ll start = i - d + 2;
        ll end = i + 1;

        // cout << "cool " << start << " " << end << endl;
        ll cnt = 0;
        ford(k - 1, 0, 1)
        {
            if ((start >= vPr[i].first && start <= vPr[i].second) || (end >= vPr[i].first && end <= vPr[i].second) || (start < vPr[i].first && end > vPr[i].second))
                cnt++;
        }
        if (minVal > cnt)
        {
            minVal = cnt;
            minIndex = start;
        }
        if (cnt > maxVal)
        {
            maxVal = cnt;
            maxIndex = start;
        }
    }

    cout << maxIndex << " " << minIndex << endl;
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}