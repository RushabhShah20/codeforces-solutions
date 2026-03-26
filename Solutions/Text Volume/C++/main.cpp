// Problem: Text Volume
// Link to the problem: https://codeforces.com/contest/837/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    getline(cin, s);
    getline(cin, s);
    vector<string> a;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == ' ')
        {
            if (!t.empty())
            {
                a.push_back(t);
                t.clear();
            }
        }
        else
        {
            t += s[i];
        }
    }
    if (!t.empty())
    {
        a.push_back(t);
        t.clear();
    }
    ll ans = 0;
    for (ll i = 0; i < a.size(); i++)
    {
        ll x = 0;
        for (ll j = 0; j < a[i].size(); j++)
        {
            if (isupper(a[i][j]))
            {
                x++;
            }
        }
        ans = max(ans, x);
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