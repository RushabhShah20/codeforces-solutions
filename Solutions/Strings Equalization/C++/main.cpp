// Problem: Strings Equalization
// Link to the problem: https://codeforces.com/contest/1223/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size();
    vector<ll> a(26), b(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
        b[t[i] - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] > 0 && b[i] > 0)
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