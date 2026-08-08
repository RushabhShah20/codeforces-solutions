// Problem: Chtholly's request
// Link to the problem: https://codeforces.com/contest/897/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    ll ans = 0;
    for (ll i = 1; i <= n; i++)
    {
        string s = to_string(i), t = s;
        reverse(t.begin(), t.end());
        ans += stoll(s + t);
    }
    ans %= m;
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