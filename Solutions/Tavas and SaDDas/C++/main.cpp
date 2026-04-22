// Problem: Tavas and SaDDas
// Link to the problem: https://codeforces.com/contest/535/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '7')
        {
            ans += 1LL << (n - i - 1);
        }
    }
    ans += (1LL << n) - 1;
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