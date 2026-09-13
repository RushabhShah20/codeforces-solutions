// Problem: Crossword solving
// Link to the problem: https://codeforces.com/contest/822/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s, t;
    cin >> s >> t;
    ll mn = m + 1;
    vector<ll> ans;
    for (ll i = 0; i + n <= m; i++)
    {
        ll x = 0;
        vector<ll> b;
        for (ll j = 0; j < n; j++)
        {
            if (s[j] != t[i + j])
            {
                x++;
                b.push_back(j + 1);
            }
        }
        if (x < mn)
        {
            mn = x;
            ans = b;
        }
    }
    cout << mn << endl;
    for (ll i = 0; i < mn; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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