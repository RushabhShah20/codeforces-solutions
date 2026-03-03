// Problem: Cypher
// Link to the problem: https://codeforces.com/contest/1703/problem/C
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
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        ll m;
        cin >> m;
        string s;
        cin >> s;
        ans[i] = a[i];
        for (ll j = m - 1; j >= 0; j--)
        {
            if (s[j] == 'U')
            {
                if (ans[i] == 0)
                {
                    ans[i] = 9;
                }
                else
                {
                    ans[i]--;
                }
            }
            else
            {
                if (ans[i] == 9)
                {
                    ans[i] = 0;
                }
                else
                {
                    ans[i]++;
                }
            }
        }
    }
    for (ll i = 0; i < n; i++)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}