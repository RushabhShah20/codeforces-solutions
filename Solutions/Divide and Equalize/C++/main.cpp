// Problem: Divide and Equalize
// Link to the problem: https://codeforces.com/contest/1881/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void primeFactors(ll n, unordered_map<ll, ll> &m)
{
    const ll x = n;
    if (n <= 1)
    {
        return;
    }
    while (!(n & 1))
    {
        m[2]++;
        n >>= 1;
    }
    for (ll i = 3; i * i <= x; i += 2)
    {
        while (n % i == 0)
        {
            m[i]++;
            n /= i;
        }
    }
    if (n > 2)
    {
        m[n]++;
    }
}

void solve()
{
    ll n;
    cin >> n;
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        primeFactors(x, m);
    }
    for (const pair<ll, ll> i : m)
    {
        if (i.second % n != 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}