#include <bits/stdc++.h>

using namespace std;
void solve()
{
    int n;
    cin >> n;
    n % 3 == 0 ? cout << "Second\n" : cout << "First\n";
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}