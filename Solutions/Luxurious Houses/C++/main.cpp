// Problem: Luxurious Houses
// Link to the problem: https://codeforces.com/contest/581/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n), ans(n, 0);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll mx = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] <= mx)
        {
            ans[i] = mx - a[i] + 1;
        }
        else
        {
            ans[i] = 0;
        }
        mx = max(mx, a[i]);
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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