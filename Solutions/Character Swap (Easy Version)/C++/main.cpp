// Problem: Character Swap (Easy Version)
// Link to the problem: https://codeforces.com/contest/1243/problem/B1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    vector<ll> c;
    unordered_set<char> s;
    for (ll i = 0; i < n; i++)
    {
        s.insert(a[i]);
        if (a[i] != b[i])
        {
            c.push_back(i);
        }
    }
    const ll m = c.size();
    if (m == 0)
    {
        const string ans = s.size() == a.size() ? "No" : "Yes";
        cout << ans << endl;
    }
    else if (m == 2)
    {
        const string ans = a[c[0]] == a[c[1]] && b[c[1]] == b[c[0]] ? "Yes" : "No";
        cout << ans << endl;
    }
    else
    {
        cout << "No" << endl;
    }
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