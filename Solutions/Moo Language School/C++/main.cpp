// Problem: Moo Language School
// Link to the problem: https://codeforces.com/contest/2259/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    const ll m = n / k;
    ll ans = 0;
    for (ll i = 0; i < m; i++)
    {
        bool x = false;
        for (ll j = i * k; j < (i + 1) * k; j++)
        {
            if (s[j] == '0')
            {
                x = true;
                break;
            }
        }
        ans += x ? 0 : 1;
    }
    cout << ans << endl;
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