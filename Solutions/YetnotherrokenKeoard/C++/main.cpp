// Problem: YetnotherrokenKeoard
// Link to the problem: https://codeforces.com/contest/1907/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    stack<ll> a, b;
    const ll n = s.size();
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'b')
        {
            if (!a.empty())
            {
                a.pop();
            }
        }
        else if (s[i] == 'B')
        {
            if (!b.empty())
            {
                b.pop();
            }
        }
        else
        {
            if (islower(s[i]))
            {
                a.push(i);
            }
            else
            {
                b.push(i);
            }
        }
    }
    vector<ll> v;
    while (!a.empty())
    {
        v.push_back(a.top());
        a.pop();
    }
    while (!b.empty())
    {
        v.push_back(b.top());
        b.pop();
    }
    sort(v.begin(), v.end());
    string ans;
    const ll m = v.size();
    for (ll i = 0; i < m; i++)
    {
        ans.append(1, s[v[i]]);
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}