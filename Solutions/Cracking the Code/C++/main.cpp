// Problem: Cracking the Code
// Link to the problem: https://codeforces.com/contest/630/problem/L
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll power(ll b, ll e, const ll m)
{
    ll ans = 1;
    b %= m;
    while (e > 0)
    {
        if (e & 1)
        {
            ans = ans * b % m;
        }
        b = b * b % m;
        e >>= 1;
    }
    return ans;
}

void solve()
{
    string s;
    cin >> s;
    const ll n = stoll(to_string(s[0] - '0') + to_string(s[2] - '0') + to_string(s[4] - '0') + to_string(s[3] - '0') + to_string(s[1] - '0'));
    const ll x = power(n, 5, 100000);
    const string t = to_string(x), ans = string(5 - t.size(), '0') + t;
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