// Problem: Red Versus Blue
// Link to the problem: https://codeforces.com/contest/1659/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, r, b;
    cin >> n >> r >> b;
    string ans;
    const ll x = r / (b + 1);
    ll y = r % (b + 1);
    for (ll i = 0; i <= b; i++)
    {
        const string p(x, 'R');
        ans += p;
        if (y > 0)
        {
            ans += 'R';
            y--;
        }
        if (i != b)
        {
            ans += 'B';
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}