// Problem: Vanya and Books
// Link to the problem: https://codeforces.com/contest/552/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const string s = to_string(n);
    const ll m = s.size();
    ll ans = m * (n - (m == 1 ? 0 : stoll(string(m - 1, '9'))));
    for (ll i = 1; i < m; i++)
    {
        ans += 9 * powl(10, i - 1) * i;
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