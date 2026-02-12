// Problem: Jumping Jack
// Link to the problem: https://codeforces.com/contest/11/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = ceil(sqrt(2 * abs(n) + 0.25) - 0.5);
    if (n % 2 == 0)
    {
        if (ans % 4 == 1)
        {
            ans += 2;
        }
        if (ans % 4 == 2)
        {
            ans += 1;
        }
    }
    else
    {
        if (ans % 4 == 3)
        {
            ans += 2;
        }
        if (ans % 4 == 0)
        {
            ans += 1;
        }
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