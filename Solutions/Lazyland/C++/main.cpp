// Problem: Lazyland
// Link to the problem: https://codeforces.com/contest/1089/problem/L
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    unordered_map<ll, priority_queue<ll>> m;
    for (ll i = 0; i < n; i++)
    {
        m[a[i]].push(b[i]);
    }
    vector<ll> c;
    for (pair<ll, priority_queue<ll>> i : m)
    {
        i.second.pop();
        while (!i.second.empty())
        {
            c.push_back(i.second.top());
            i.second.pop();
        }
    }
    sort(c.begin(), c.end());
    const ll d = max(0LL, (ll)(k - m.size()));
    ll ans = 0;
    for (ll i = 0; i < d; i++)
    {
        ans += c[i];
    }
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