// Problem: Perfect Squares
// Link to the problem: https://codeforces.com/contest/914/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool isSquare(const ll n)
{
    const ll m = sqrtl(n);
    return m * m == n;
}

void solve()
{
    ll n;
    cin >> n;
    ll ans = -1000001;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (!isSquare(x))
        {
            ans = max(ans, x);
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