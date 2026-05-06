// Problem: Chores
// Link to the problem: https://codeforces.com/contest/169/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> h(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> h[i];
    }
    sort(h.begin(), h.end());
    const ll  ans = h[b] == h[b - 1] ? 0 : h[b] - h[b - 1];
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