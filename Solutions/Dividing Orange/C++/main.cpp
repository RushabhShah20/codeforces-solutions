// Problem: Dividing Orange
// Link to the problem: https://codeforces.com/contest/244/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    set<ll> s;
    vector<vector<ll>> ans(k);
    for (ll i = 0; i < k; i++)
    {
        ll x;
        cin >> x;
        s.insert(x);
        ans[i].push_back(x);
    }
    ll m = 1;
    for (ll i = 0; i < k; i++)
    {
        while (ans[i].size() < n)
        {
            while (s.count(m) != 0)
            {
                s.insert(m);
                m++;
            }
            s.insert(m);
            ans[i].push_back(m);
        }
    }
    for (ll i = 0; i < k; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
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