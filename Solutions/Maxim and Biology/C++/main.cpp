// Problem: Maxim and Biology
// Link to the problem: https://codeforces.com/contest/1151/problem/A
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
    ll ans = LLONG_MAX;
    for (ll i = 0; i < n - 3; i++)
    {
        ll a = abs(s[i] - 'A'), b = abs(s[i + 1] - 'C'), c = abs(s[i + 2] - 'T'), d = abs(s[i + 3] - 'G');
        const ll x = min(26 - a, a) + min(26 - b, b) + min(26 - c, c) + min(26 - d, d);
        ans = min(ans, x);
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
    solve();
    return 0;
}