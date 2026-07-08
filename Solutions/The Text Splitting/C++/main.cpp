// Problem: The Text Splitting
// Link to the problem: https://codeforces.com/contest/612/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, p, q;
    cin >> n >> p >> q;
    string s;
    cin >> s;
    for (ll i = 0; i <= n / p; i++)
    {
        if ((n - i * p) % q == 0)
        {
            const ll x = i, y = (n - x * p) / q;
            ll k = 0;
            cout << x + y << endl;
            for (ll j = 0; j < x; j++)
            {
                cout << s.substr(k, p) << endl;
                k += p;
            }
            for (ll j = 0; j < y; j++)
            {
                cout << s.substr(k, q) << endl;
                k += q;
            }
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