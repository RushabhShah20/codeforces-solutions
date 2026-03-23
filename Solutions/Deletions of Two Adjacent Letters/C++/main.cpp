// Problem: Deletions of Two Adjacent Letters
// Link to the problem: https://codeforces.com/contest/1650/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    char c;
    cin >> c;
    const ll n = s.size();
    vector<ll> a;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == c)
        {
            a.push_back(i);
        }
    }
    for (ll i = 0; i < a.size(); i++)
    {
        if (a[i] % 2 == 0)
        {
            cout << "YES" << endl;
            return;
        }
    }
    cout << "NO" << endl;
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