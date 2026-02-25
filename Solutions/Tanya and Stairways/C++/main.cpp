// Problem: Tanya and Stairways
// Link to the problem: https://codeforces.com/contest/1005/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, prev = 0;
    cin >> n;
    vector<ll> ans;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (prev != 0 && x == 1)
        {
            ans.push_back(prev);
        }
        prev = x;
    }
    if (prev != 0)
    {
        ans.push_back(prev);
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
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