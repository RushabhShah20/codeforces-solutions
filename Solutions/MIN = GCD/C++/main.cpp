// Problem: MIN = GCD
// Link to the problem: https://codeforces.com/contest/2084/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll mn = LLONG_MAX;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    vector<ll> b;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] % a[0] == 0)
        {
            b.push_back(a[i]);
        }
    }
    if (b.empty())
    {
        cout << "No" << endl;
        return;
    }
    ll g = b[0];
    for (ll i = 1; i < b.size(); i++)
    {
        g = __gcd(g, b[i]);
    }
    if (g == a[0])
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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