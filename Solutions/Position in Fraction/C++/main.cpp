// Problem: Position in Fraction
// Link to the problem: https://codeforces.com/contest/900/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c;
    cin >> a >> b >> c;
    set<pair<ll, ll>> s;
    ll ans = 0;
    a *= 10;
    while (s.count({a / b, a % b}) == 0)
    {
        s.insert({a / b, a % b});
        ans++;
        if (a / b == c)
        {
            cout << ans << endl;
            return;
        }
        a = a % b * 10;
    }
    cout << -1 << endl;
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