// Problem: LOL Lovers
// Link to the problem: https://codeforces.com/contest/1912/problem/L
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    vector<ll> a(n), b(n);
    a[0] = s[0] == 'L' ? 1 : 0;
    b[0] = s[0] == 'O' ? 1 : 0;
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == 'L')
        {
            a[i] = a[i - 1] + 1;
        }
        else
        {
            a[i] = a[i - 1];
        }
        if (s[i] == 'O')
        {
            b[i] = b[i - 1] + 1;
        }
        else
        {
            b[i] = b[i - 1];
        }
    }
    for (ll i = 0; i < n; i++)
    {
        const ll w = a[i], x = a[n - 1] - a[i], y = b[i], z = b[n - 1] - b[i];
        if ((w > 0 || y > 0) && (x > 0 || z > 0) && w != x && y != z)
        {
            cout << i + 1 << endl;
            return;
        }
    }
    cout << -1 << endl;
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