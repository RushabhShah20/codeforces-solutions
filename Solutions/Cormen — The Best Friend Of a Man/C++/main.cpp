// Problem: Cormen — The Best Friend Of a Man
// Link to the problem: https://codeforces.com/contest/732/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    for (ll i = 1; i < n; i++)
    {
        const ll x = a[i] + a[i - 1];
        if (x < k)
        {
            const ll y = k - x;
            ans += y;
            a[i] += y;
        }
    }
    cout << ans << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
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