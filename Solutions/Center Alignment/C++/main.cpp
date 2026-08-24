// Problem: Center Alignment
// Link to the problem: https://codeforces.com/contest/5/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s;
    string t;
    while (getline(cin, t))
    {
        s.push_back(t);
    }
    const ll n = s.size();
    ll mx = 0;
    for (ll i = 0; i < n; i++)
    {
        mx = max(mx, (ll)s[i].size());
    }
    bool x = true;
    for (ll i = 0; i < n; i++)
    {
        const ll m = s[i].size();
        if (mx - m & 1)
        {
            const ll a = x ? (mx - m) / 2 : (mx - m + 1) / 2, b = x ? (mx - m + 1) / 2 : (mx - m) / 2;
            s[i].insert(0, string(a, ' '));
            s[i].append(b, ' ');
            x = !x;
        }
        else
        {
            const ll c = (mx - m) / 2;
            s[i].insert(0, string(c, ' '));
            s[i].append(c, ' ');
        }
    }
    for (ll i = 0; i < n; i++)
    {
        s[i].insert(0, 1, '*');
        s[i].push_back('*');
    }
    t = string(mx + 2, '*');
    s.insert(s.begin(), t);
    s.push_back(t);
    for (ll i = 0; i < n + 2; i++)
    {
        cout << s[i] << endl;
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