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
ll attempt = 0;
// space for helper functions
bool getResponse(string s, string add, bool right)
{
    attempt++;
    if (right)
    {
        bool ans;
        cout << "? " << s + add << endl;
        cout.flush();
        cin >> ans;
        return ans;
    }
    else
    {
        bool ans;
        cout << "? " << add + s << endl;
        cout.flush();
        cin >> ans;
        return ans;
    }
}
void solve()
{
    ll n;
    cin >> n;

    string res = "";
    bool right = true;
    while (attempt <= 2 * n)
        if (right)
        {
            bool k = getResponse(res, "0", right);
            if (k)
            {
                res = res + "0";
                if (res.size() == n)
                {
                    cout << "! " << res << endl;
                    cout.flush();
                    break;
                }
                continue;
            }
            k = getResponse(res, "1", right);
            if (k)
            {
                res = res + "1";
                if (res.size() == n)
                {
                    cout << "! " << res << endl;
                    cout.flush();
                    break;
                }
                continue;
            }
            right = false;
        }
        else
        {
            bool k = getResponse(res, "0", right);
            if (k)
            {
                res = "0" + res;
                if (res.size() == n)
                {
                    cout << "! " << res << endl;
                    cout.flush();
                    break;
                }
                continue;
            }
            k = getResponse(res, "1", right);
            if (k)
            {
                res = "1" + res;
                if (res.size() == n)
                {
                    cout << "! " << res << endl;
                    cout.flush();
                    break;
                }
                continue;
            }
        }
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        attempt = 0;
        solve();
    }

    return 0;
}