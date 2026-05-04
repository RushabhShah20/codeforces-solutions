// Problem: Pizza, Pizza, Pizza!!!
// Link to the problem: https://codeforces.com/contest/979/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n == 0)
    {
        cout << 0 << endl;
        return;
    }
    const ll ans = n + 1 & 1 ? n + 1 : (n + 1) / 2;
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