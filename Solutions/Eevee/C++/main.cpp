// Problem: Eevee
// Link to the problem: https://codeforces.com/contest/452/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

ll calculate(const string &s, const string &t)
{
    const ll n = s.size(), m = t.size();
    if (m != n)
    {
        return -1;
    }
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == t[i])
        {
            ans++;
        }
    }
    return ans;
}

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    const vector<string> a = {"vaporeon", "jolteon", "flareon", "espeon", "umbreon", "leafeon", "glaceon", "sylveon"};
    unordered_map<string, ll> m;
    for (ll i = 0; i < 8; i++)
    {
        m[a[i]] = calculate(a[i], s);
    }
    ll mx = 0;
    for (const pair<string, ll> i : m)
    {
        mx = max(mx, i.second);
    }
    for (const pair<string, ll> i : m)
    {
        if (i.second == mx)
        {
            cout << i.first << endl;
            return;
        }
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