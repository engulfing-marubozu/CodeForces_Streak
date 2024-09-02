#include <bits/stdc++.h>

using namespace std;

void solve()
{

    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        mp[arr[i]]++;
    }

    if (mp.size() > 2)
    {
        cout << "No\n";
    }
    else if (mp.size() == 1)
        cout << "YES\n";
    else
    {
        auto it = mp.begin();
        // for (auto it : mp)
        //     cout << it.first << " " << it.second << endl;
        // cout << abs(it->second - ++(it)->second) << endl;

        abs(it->second - ++(it)->second) ==
                1
            ? cout << "YES\n"
            : cout << "NO\n";
        int first_value = it->second;
        ++it;
        int second_value = it->second;

        (std::abs(first_value - second_value) == 1 || std::abs(first_value - second_value) == 0)
            ? std::cout << "YES\n"
            : std::cout << "NO\n";
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
    return 0;
}