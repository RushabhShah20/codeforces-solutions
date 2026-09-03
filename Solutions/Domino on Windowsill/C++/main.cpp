// Problem: Domino on Windowsill
// Link to the problem: https://codeforces.com/contest/1499/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k1, k2, d1, d2;
    cin >> n >> k1 >> k2 >> d1 >> d2;
    const ll mn = min(k1, k2), mx = max(k1, k2), a = mn, b = n - mx, c = mx - mn;
    const string ans = a + c / 2 >= d1 && b + c / 2 >= d2 ? "YES" : "NO";
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}