// Problem: Choosing Cubes
// Link to the problem: https://codeforces.com/contest/1980/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, f, k;
    cin >> n >> f >> k;
    vector<ll> a(n);
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }
    if (k == n)
    {
        cout << "YES" << endl;
        return;
    }
    const ll x = a[f - 1];
    sort(a.begin(), a.end(), greater<>());
    const ll y = a[k];
    if (x > y)
    {
        cout << "YES" << endl;
    }
    else if (x < y)
    {
        cout << "NO" << endl;
    }
    else
    {
        if (a[k - 1] != x)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "MAYBE" << endl;
        }
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