// Problem: Sea Battle
// Link to the problem: https://codeforces.com/contest/1131/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll w1, h1, w2, h2;
    cin >> w1 >> h1 >> w2 >> h2;
    const ll ans = 2 * (w1 + h1 + w2 + h2) - 2 * min(w1, w2) + 4;
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