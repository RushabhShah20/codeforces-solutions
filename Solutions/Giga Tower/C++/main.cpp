// Problem: Giga Tower
// Link to the problem: https://codeforces.com/contest/488/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = n + 1; i <= n + 16; i++)
    {
        ll z = abs(i);
        bool a = false;
        while (z > 0)
        {
            if (z % 10 == 8)
            {
                a = true;
                break;
            }
            z /= 10;
        }
        if (a)
        {
            ans = abs(n - i);
            break;
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