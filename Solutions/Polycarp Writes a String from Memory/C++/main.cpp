// Problem: Polycarp Writes a String from Memory
// Link to the problem: https://codeforces.com/contest/1702/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    unordered_set<char> t;
    const ll n = s.size();
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        if (t.size() == 3)
        {
            if (t.count(s[i]) == 0)
            {
                ans++;
                t.clear();
                t.insert(s[i]);
            }
        }
        else
        {
            t.insert(s[i]);
        }
    }
    if (!t.empty())
    {
        ans++;
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