// Problem: Letter
// Link to the problem: https://codeforces.com/contest/43/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    const ll n = s.size(), m = t.size();
    vector<ll> a(26), b(26);
    for (ll i = 0; i < n; i++)
    {
        const char c = s[i];
        if (islower(c))
        {
            a[c - 'a']++;
        }
        if (isupper(c))
        {
            b[c - 'A']++;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        const char c = t[i];
        if (islower(c))
        {
            if (a[c - 'a'] > 0)
            {
                a[c - 'a']--;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
        if (isupper(c))
        {
            if (b[c - 'A'] > 0)
            {
                b[c - 'A']--;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
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