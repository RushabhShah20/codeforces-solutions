// Problem: Misha and Changing Handles
// Link to the problem: https://codeforces.com/contest/501/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    map<string, string> m;
    for (ll i = 0; i < n; i++)
    {
        string a, b;
        cin >> a >> b;
        if (m.find(a) == m.end())
        {
            m[b] = a;
        }
        else
        {
            m[b] = m[a];
            m.erase(a);
        }
    }
    const ll k = m.size();
    cout << k << endl;
    for (const pair<string, string> i : m)
    {
        cout << i.second << " " << i.first << endl;
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