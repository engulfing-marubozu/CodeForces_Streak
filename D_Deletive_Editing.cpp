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
    string s1, s2;
    cin >> s1 >> s2;
    ll s1p = 0;
    for (ll i = 0; i <= (s2.length() - 1) && s1p <= (s1.length() - 1); i++)
    {
        if (s1[s1p] == s2[i])
        {
            cout << s2[i] << " " << s1[s1p] << endl;
            s1p++;
        }
        else
        {
            while (s1[s1p] != s2[i])
            {
                cout << s2[i] << " " << s1[s1p] << endl;
                if (s1p >= s1.length() - 1)
                    break;
                s1p++;
            }
        }
    }

    s1p > (s1.length()) ? p("NO") : p("YES");
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}