#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    int maxi = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
        maxi = max(maxi, x);
    }

    vector<int> v2, v3;
    for (auto it : v)
        if (it != maxi)
        {
            v2.push_back(it);
        }
        else
        {
            v3.push_back(maxi);
        }
    if (v2.size() == 0)
    {
        cout << -1 << endl;
        return;
    }
    cout << v2.size() << " " << v3.size() << endl;
    for (auto it : v2)
        cout << it << " ";

    cout << "\n";
    for (auto it : v3)
        cout << it << " ";
    cout << endl;
}
int main()
{

    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}