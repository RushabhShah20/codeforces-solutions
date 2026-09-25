// Problem: Shuffle Hashing
// Link to the problem: https://codeforces.com/contest/1278/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s, t;
    cin >> s >> t;
    const ll n = s.size(), m = t.size();
    if (m < n)
    {
        cout << "NO" << endl;
        return;
    }
    vector<ll> a(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    vector<ll> b(26);
    for (ll i = 0; i < m; i++)
    {
        if (i >= n)
        {
            b[t[i] - 'a']++;
            b[t[i - n] - 'a']--;
        }
        else
        {
            b[t[i] - 'a']++;
        }
        if (i >= n - 1)
        {
            bool x = true;
            for (ll j = 0; j < 26; j++)
            {
                if (a[j] != b[j])
                {
                    x = false;
                    break;
                }
            }
            if (x)
            {
                cout << "YES" << endl;
                return;
            }
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