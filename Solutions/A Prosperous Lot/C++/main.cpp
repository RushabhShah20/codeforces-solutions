// Problem: A Prosperous Lot
// Link to the problem: https://codeforces.com/contest/934/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n >= 37)
    {
        cout << -1 << endl;
        return;
    }
    const string ans = string(n >> 1, '8') + string(n & 1, '6');
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