// Problem: Bicycle Chain
// Link to the problem: https://codeforces.com/contest/215/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll m;
    cin >> m;
    vector<ll> b(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    map<ll, ll> p;
    for (ll i = 0; i < m; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            if (b[i] % a[j] == 0)
            {
                p[b[i] / a[j]]++;
            }
        }
    }
    const ll ans = p.rbegin()->second;
    cout << ans << endl;
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