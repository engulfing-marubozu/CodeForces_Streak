#include <bits/stdc++.h>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> v;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        if (i == 0)
            v.push_back(arr[i]);
        else
        {
            if (arr[i] < arr[i - 1])
            {
                v.push_back(arr[i]);
            }
            v.push_back(arr[i]);
        }
    }
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";

    cout << endl;
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