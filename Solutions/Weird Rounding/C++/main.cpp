// Problem: Weird Rounding
// Link to the problem: https://codeforces.com/contest/779/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    const ll n = s.size();
    ll x = 0;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (k == 0)
        {
            break;
        }
        if (s[i] == '0')
        {
            k--;
        }
        else
        {
            x++;
        }
    }
    const ll ans = k == 0 ? x : n - 1;
    cout << ans << endl;
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