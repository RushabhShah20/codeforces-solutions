// Problem: Minutes Before the New Year
// Link to the problem: https://codeforces.com/contest/1283/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll hh, mm;
    cin >> hh >> mm;
    const ll ans = 1440 - (hh * 60 + mm);
    cout << ans << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}