// Problem: Prizes, Prizes, more Prizes
// Link to the problem: https://codeforces.com/contest/208/problem/D
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
    vector<ll> b(5);
    for (ll i = 0; i < 5; i++)
    {
        cin >> b[i];
    }
    vector<ll> ans(5);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += a[i];
        for (ll j = 4; j >= 0; j--)
        {
            ans[j] += x / b[j];
            x %= b[j];
        }
    }
    for (ll i = 0; i < 5; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
    cout << x << endl;
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