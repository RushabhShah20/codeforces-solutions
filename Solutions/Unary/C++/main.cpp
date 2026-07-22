// Problem: Unary
// Link to the problem: https://codeforces.com/contest/133/problem/B
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
    const ll n = s.size();
    unordered_map<char, string> p = {{'>', "1000"}, {'<', "1001"}, {'+', "1010"}, {'-', "1011"}, {'.', "1100"}, {',', "1101"}, {'[', "1110"}, {']', "1111"}};
    string t;
    for (ll i = 0; i < n; i++)
    {
        t.append(p[s[i]]);
    }
    const ll k = t.size();
    ll ans = 0;
    for (ll i = 0; i < k; i++)
    {
        if (t[i] == '1')
        {
            constexpr ll m = 1000003;
            ans = (ans + power(2, k - i - 1, m)) % m;
        }
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