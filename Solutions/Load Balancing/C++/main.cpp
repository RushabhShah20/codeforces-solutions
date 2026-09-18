// Problem: Load Balancing
// Link to the problem: https://codeforces.com/contest/609/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    vector<ll> b(n, x / n);
    ll y = x % n;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (y > 0)
        {
            b[i]++;
            y--;
        }
        else
        {
            break;
        }
    }
    sort(a.begin(), a.end());
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        z += abs(a[i] - b[i]);
    }
    const ll ans = z >> 1;
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