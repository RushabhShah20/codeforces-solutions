// Problem: Different is Good
// Link to the problem: https://codeforces.com/contest/672/problem/B
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
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    ll x = 0;
    for (ll i = 0; i < 26; i++)
    {
        x += max(0LL, a[i] - 1);
    }
    const ll ans = n > 26 ? -1 : x;
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