#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int len;
    cin >> len;
    int arr[len];
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }
    arr[0] == 1 ? cout << "YES\n" : cout << "NO\n";
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