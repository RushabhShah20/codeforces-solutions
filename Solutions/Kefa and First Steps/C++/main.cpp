// Problem: Kefa and First Steps
// Link to the problem: https://codeforces.com/contest/580/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 1, x = 1;
    for (ll i = 1; i < n; i++)
    {
        if (a[i] >= a[i - 1])
        {
            x++;
        }
        else
        {
            ans = max(ans, x);
            x = 1;
        }
    }
    ans = max(ans, x);
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