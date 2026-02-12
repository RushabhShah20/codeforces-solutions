// Problem: Friendly Numbers
// Link to the problem: https://codeforces.com/contest/2197/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;
ll sum(ll n)
{
    ll ans = 0;
    while (n > 0)
    {
        ans += n % 10;
        n /= 10;
    }
    return ans;
}
void solve()
{
    ll n;
    cin >> n;
    if (n % 9 != 0)
    {
        cout << 0 << endl;
        return;
    }
    bool z = false;
    const ll i = n / 10;
    for (ll j = i; j <= i + 20; j++)
    {
        if (10 * j - sum(j) == n)
        {
            z = true;
            break;
        }
    }
    if (z)
    {
        cout << 10 << endl;
    }
    else
    {
        cout << 0 << endl;
    }
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