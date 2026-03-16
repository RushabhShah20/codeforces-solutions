// Problem: Journey
// Link to the problem: https://codeforces.com/contest/2051/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b, c, ans = 0;
    cin >> n >> a >> b >> c;
    ans += (3 * (n / (a + b + c)));
    n %= (a + b + c);
    if (n == 0)
    {
        cout << ans << endl;
        return;
    }
    if (n <= a)
    {
        ans++;
    }
    else if (n <= (a + b))
    {
        ans += 2;
    }
    else
    {
        ans += 3;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}