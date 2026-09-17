// Problem: Progress Bar
// Link to the problem: https://codeforces.com/contest/71/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, t;
    cin >> n >> k >> t;
    const ll z = n * k * t / 100, x = z / k, y = z % k;
    for (ll i = 0; i < n; i++)
    {
        const ll ans = i < x ? k : (i == x ? y : 0);
        cout << ans << " ";
    }
    cout << endl;
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