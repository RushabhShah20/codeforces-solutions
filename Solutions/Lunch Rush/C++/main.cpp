// Problem: Lunch Rush
// Link to the problem: https://codeforces.com/contest/276/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll ans = LLONG_MIN;
    for (ll i = 0; i < n; i++)
    {
        ll f, t;
        cin >> f >> t;
        ans = max(ans, t > k ? f - (t - k) : f);
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