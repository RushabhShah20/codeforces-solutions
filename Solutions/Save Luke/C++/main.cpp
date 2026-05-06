// Problem: Save Luke
// Link to the problem: https://codeforces.com/contest/624/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll d, l, v1, v2;
    cin >> d >> l >> v1 >> v2;
    const long double ans = (long double)(l - d) / (v1 + v2);
    cout << fixed << setprecision(20) << ans << endl;
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