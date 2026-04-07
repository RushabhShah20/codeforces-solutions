// Problem: Bear and Reverse Radewoosh
// Link to the problem: https://codeforces.com/contest/658/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n), b(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    vector<ll> p(n), s(n);
    p[0] = b[0];
    for (ll i = 1; i < n; i++)
    {
        p[i] = p[i - 1] + b[i];
    }
    s[n - 1] = b[n - 1];
    for (ll i = n - 2; i >= 0; i--)
    {
        s[i] = s[i + 1] + b[i];
    }
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += max(0LL, a[i] - k * p[i]);
    }
    ll y = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        y += max(0LL, a[i] - k * s[i]);
    }
    if (x > y)
    {
        cout << "Limak" << endl;
    }
    else if (x < y)
    {
        cout << "Radewoosh" << endl;
    }
    else
    {
        cout << "Tie" << endl;
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