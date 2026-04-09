// Problem: Friends Meeting
// Link to the problem: https://codeforces.com/contest/931/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    const ll c = abs(a - b);
    if (c & 1)
    {
        const ll d = c / 2, x = d * (d + 1), y = (c + 1) / 2, ans = x + y;
        cout << ans << endl;
    }
    else
    {
        const ll d = c / 2, ans = d * (d + 1);
        cout << ans << endl;
    }
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