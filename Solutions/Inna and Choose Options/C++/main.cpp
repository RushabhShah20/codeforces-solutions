// Problem: Inna and Choose Options
// Link to the problem: https://codeforces.com/contest/400/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    vector<ll> ans;
    for (ll i = 1; i <= 12; i++)
    {
        if (12 % i == 0)
        {
            const ll a = i, b = 12 / i;
            bool y = false;
            for (ll j = 0; j < b; j++)
            {
                ll x = 0;
                for (ll k = 0; k < a; k++)
                {
                    x += s[b * k + j] == 'X' ? 1 : 0;
                }
                if (x == a)
                {
                    y = true;
                    break;
                }
            }
            if (y)
            {
                ans.push_back(i);
            }
        }
    }
    const ll m = ans.size();
    cout << m << " ";
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i] << "x" << 12 / ans[i] << " ";
    }
    cout << endl;
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