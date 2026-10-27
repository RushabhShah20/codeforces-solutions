// Problem: Preparing for the Exam
// Link to the problem: https://codeforces.com/contest/2051/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    string ans(m, '0');
    unordered_set<ll> s;
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
    }
    for (ll i = 0; i < m; i++)
    {
        if (k < n - 1)
        {
            ans[i] = '0';
        }
        else if (k >= n)
        {
            ans[i] = '1';
        }
        else
        {
            if (s.count(a[i]) > 0)
            {
                ans[i] = '0';
            }
            else
            {
                ans[i] = '1';
            }
        }
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