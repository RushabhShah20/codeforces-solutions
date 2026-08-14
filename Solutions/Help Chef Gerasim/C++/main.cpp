// Problem: Help Chef Gerasim
// Link to the problem: https://codeforces.com/contest/99/problem/B
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
    ll mn = LLONG_MAX, mx = LLONG_MIN;
    ll b = 0, c = 0, j = -1, k = -1;
    for (ll i = 0; i < n; i++)
    {
        if (n * a[i] < x)
        {
            mn = min(mn, a[i]);
            j = i + 1;
            b++;
        }
        else if (n * a[i] > x)
        {
            mx = max(mx, a[i]);
            k = i + 1;
            c++;
        }
    }
    if (b == 0 && c == 0)
    {
        cout << "Exemplary pages." << endl;
    }
    else if (b == 1 && c == 1)
    {
        const ll d = mx - (x / n), e = (x / n) - mn;
        if (d == e)
        {
            cout << d << " ml. from cup #" << j << " to cup #" << k << "." << endl;
        }
        else
        {
            cout << "Unrecoverable configuration." << endl;
        }
    }
    else
    {
        cout << "Unrecoverable configuration." << endl;
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