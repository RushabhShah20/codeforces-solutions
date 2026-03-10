// Problem: Tram
// Link to the problem: https://codeforces.com/contest/116/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll a, b;
        cin >> a >> b;
        x += (b - a);
        ans = max(ans, x);
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