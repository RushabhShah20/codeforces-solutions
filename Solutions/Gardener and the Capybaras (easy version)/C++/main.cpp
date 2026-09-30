// Problem: Gardener and the Capybaras (easy version)
// Link to the problem: https://codeforces.com/contest/1775/problem/A1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = 1; i < n - 1; i++)
    {
        for (ll j = i + 1; j < n; j++)
        {
            const string x = s.substr(0, i), y = s.substr(i, j - i), z = s.substr(j);
            if ((x <= y && z <= y) || (y <= x && y <= z))
            {
                cout << x << " " << y << " " << z << endl;
                return;
            }
        }
    }
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}