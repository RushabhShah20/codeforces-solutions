// Problem: Ternary String
// Link to the problem: https://codeforces.com/contest/1354/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = n + 1, i = 0;
    vector<ll> a(3);
    for (ll j = 0; j < n; j++)
    {
        a[s[j] - '1']++;
        while (i <= j && a[0] > 0 && a[1] > 0 && a[2] > 0)
        {
            x = min(x, j - i + 1);
            a[s[i] - '1']--;
            i++;
        }
    }
    const ll ans = x == n + 1 ? 0 : x;
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