// Problem: Turing Tape
// Link to the problem: https://codeforces.com/contest/132/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    getline(cin, s);
    const ll n = s.size();
    ll a = 0;
    for (ll i = 0; i < n; i++)
    {
        ll b = s[i];
        ll x = 0;
        for (ll j = 0; j < 8; j++)
        {
            x = (x << 1) | (b & 1);
            b >>= 1;
        }
        const ll ans = (a - x % 256 + 256) % 256;
        a = x;
        cout << ans << endl;
    }
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