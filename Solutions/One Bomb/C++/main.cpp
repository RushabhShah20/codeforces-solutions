// Problem: One Bomb
// Link to the problem: https://codeforces.com/contest/699/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<string> s(n);
    vector<ll> a(n), b(m);
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        cin >> s[i];
        for (ll j = 0; j < m; j++)
        {
            if (s[i][j] == '*')
            {
                x++;
                a[i]++;
                b[j]++;
            }
        }
    }
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < m; j++)
        {
            const ll y = a[i] + b[j] - (s[i][j] == '*');
            if (x == y)
            {
                cout << "YES" << endl;
                cout << i + 1 << " " << j + 1 << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
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