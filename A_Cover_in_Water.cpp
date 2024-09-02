#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int len;
    cin >> len;
    string s;
    cin >> s;
    int maxi = 0;
    int localMax = 0;
    int dots = 0;
    for (int i = 0; i < len; i++)
    {
        if (s[i] == '.')
        {
            localMax++;
            maxi = max(maxi, localMax);
            dots++;
        }
        else
            localMax = 0;
    }
    maxi > 2 ? cout << "2\n" : cout << dots << endl;
    ;
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
    return 0;
}