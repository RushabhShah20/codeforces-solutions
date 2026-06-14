// Problem: Pineapple Incident
// Link to the problem: https://codeforces.com/contest/697/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll t, s, x;
    cin >> t >> s >> x;
    const string ans = (x - t) % s == 0 && (x - t) / s >= 0 ? "YES" : ((x - t) % s == 1 && (x - t) / s >= 1 ? "YES" : "NO");
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