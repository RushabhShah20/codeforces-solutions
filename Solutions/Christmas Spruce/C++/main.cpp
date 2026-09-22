// Problem: Christmas Spruce
// Link to the problem: https://codeforces.com/contest/913/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<vector<ll>> a(n);
    for (ll i = 1; i < n; i++)
    {
        ll x;
        cin >> x;
        a[x - 1].push_back(i);
    }
    for (ll i = 0; i < n; i++)
    {
        ll x = 0;
        const ll m = a[i].size();
        for (ll j = 0; j < m; j++)
        {
            if (a[a[i][j]].size() == 0)
            {
                x++;
            }
        }
        if (m > 0 && x < 3)
        {
            cout << "No" << endl;
            return;
        }
    }
    cout << "Yes" << endl;
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