// Problem: Harry Potter and Three Spells
// Link to the problem: https://codeforces.com/contest/65/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;
    const string ans = (c == 0 && d > 0) || (a == 0 && b > 0 && d > 0) || (b * d * f > a * c * e) ? "Ron" : "Hermione";
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