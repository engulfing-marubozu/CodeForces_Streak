#include <bits/stdc++.h>

using namespace std;

string solve()
{
    int n, k;
    cin >> n >> k;

    int arr[n];
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    for (int i = 0; i < n; i++)
        if (arr[i] == k)
            return "YES";

    return "NO";
}
int main()
{
    int tc;
    cin >> tc;
    while (tc--)
    {
        cout << solve() << endl;
    }
    return 0;
}