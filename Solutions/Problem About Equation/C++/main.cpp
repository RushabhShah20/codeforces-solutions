// Problem: Problem About Equation
// Link to the problem: https://codeforces.com/contest/174/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    long double y = (long double)(x + k) / n;
    for (int i = 0; i < n; i++)
    {
        if (y < a[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    cout << fixed << setprecision(15);
    for (ll i = 0; i < n; i++)
    {
        cout << y - a[i] << endl;
    }
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