// Problem: Rock-Paper-Scissors
// Link to the problem: https://codeforces.com/contest/173/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool winner(const char a, const char b)
{
    if ((a == 'R' && b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R'))
    {
        return true;
    }
    return false;
}

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    const ll p = s.size(), q = t.size(), g = __gcd(p, q), k = p * q / g;
    string a, b;
    for (ll i = 0; i < k / p; i++)
    {
        a += s;
    }
    for (ll i = 0; i < k / q; i++)
    {
        b += t;
    }
    vector<ll> x(k), y(k);
    for (ll i = 0; i < k; i++)
    {
        const bool c = winner(a[i], b[i]), d = winner(b[i], a[i]);
        if (i == 0)
        {
            if (c && !d)
            {
                x[i]++;
            }
            else if (!c && d)
            {
                y[i]++;
            }
        }
        else
        {
            if (c && !d)
            {
                x[i] = x[i - 1] + 1;
                y[i] = y[i - 1];
            }
            else if (!c && d)
            {
                x[i] = x[i - 1];
                y[i] = y[i - 1] + 1;
            }
            else
            {
                x[i] = x[i - 1];
                y[i] = y[i - 1];
            }
        }
    }
    const ll e = n / k, f = n % k - 1;
    const vector<ll> ans = {e * x[k - 1] + (f == -1 ? 0 : x[f]), e * y[k - 1] + (f == -1 ? 0 : y[f])};
    cout << ans[1] << " " << ans[0] << endl;
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