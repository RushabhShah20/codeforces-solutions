// Problem: Link/Cut Tree
// Link to the problem: https://codeforces.com/contest/614/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l, r, k;
    cin >> l >> r >> k;
    vector<ll> ans;
    ll i = 0;
    while (powl(k, i) <= r)
    {
        const ll x = powl(k, i);
        if (x >= l)
        {
            ans.push_back(x);
        }
        i++;
    }
    if (ans.empty())
    {
        cout << -1 << endl;
    }
    else
    {
        for (const ll a : ans)
        {
            cout << a << " ";
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