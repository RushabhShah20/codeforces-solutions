// Problem: Adding Digits
// Link to the problem: https://codeforces.com/contest/260/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    for (ll i = 0; i < 10; i++)
    {
        const ll x = (10 * a + i);
        if (x % b == 0)
        {
            cout << x << string(n - 1, '0') << endl;
            return;
        }
    }
    cout << -1 << endl;
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