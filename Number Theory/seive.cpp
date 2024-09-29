#include <bits/stdc++.h>
using namespace std;

#define mod 1000000007 // 1e9+7
#define ll long long int
vector<ll> getSieve(ll n)
{
    vector<bool> prime(n + 1, true);
    vector<ll> allPrimes;
    for (ll p = 2; p * p <= n; p++)
    {
        if (prime[p])
        {
            for (ll j = p * p; j <= n; j += p)
                prime[j] = false;
        }
    }
    for (ll i = 2; i < n; i++)
        if (prime[i])
            allPrimes.push_back(i);
    return allPrimes;
}
