// Problem: Petr and a calendar
// Link to the problem: https://codeforces.com/contest/760/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll m, d;
    cin >> m >> d;
    const vector<ll> months = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    const ll ans = (months[m - 1] + d + 5) / 7;
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