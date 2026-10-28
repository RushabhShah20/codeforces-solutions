// Problem: Numeric String Template
// Link to the problem: https://codeforces.com/contest/2000/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        string s;
        cin >> s;
        const ll k = s.size();
        if (k != n)
        {
            cout << "NO" << endl;
            continue;
        }
        bool z = true;
        unordered_map<ll, char> x;
        unordered_map<char, ll> y;
        for (int j = 0; j < n; j++)
        {
            if (x.count(a[j]) > 0 && x[a[j]] != s[j])
            {
                z = false;
                break;
            }
            if (y.count(s[j]) > 0 && y[s[j]] != a[j])
            {
                z = false;
                break;
            }
            x[a[j]] = s[j];
            y[s[j]] = a[j];
        }
        const string ans = z ? "YES" : "NO";
        cout << ans << endl;
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