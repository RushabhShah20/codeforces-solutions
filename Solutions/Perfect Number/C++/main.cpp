// Problem: Perfect Number
// Link to the problem: https://codeforces.com/contest/919/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 19;
    while (true)
    {
        ll x = 0, m = ans;
        while (m > 0)
        {
            x += m % 10;
            m /= 10;
        }
        if (x == 10)
        {
            n--;
            if (n == 0)
            {
                break;
            }
        }
        ans += 9;
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