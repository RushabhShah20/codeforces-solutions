// Problem: DZY Loves Hash
// Link to the problem: https://codeforces.com/contest/447/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll p, n;
    cin >> p >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    unordered_map<ll, ll> m;
    for (ll i = 0; i < n; i++)
    {
        if (m.count(a[i] % p))
        {
            cout << i + 1 << endl;
            return;
        }
        m[a[i] % p]++;
    }
    cout << -1 << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    solve();
    return 0;
}