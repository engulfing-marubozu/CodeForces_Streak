#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int a, b, c;

    cin >> a >> b >> c;

    (c % 2 + a) > b ? cout << "First\n" : cout << "Second\n";
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}