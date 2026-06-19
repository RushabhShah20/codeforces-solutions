// Problem: Classroom Watch
// Link to the problem: https://codeforces.com/contest/876/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans;
    for (ll i = max(1LL, n - 100); i <= n; i++)
    {
        ll x = i, j = 0;
        while (x > 0)
        {
            j += x % 10;
            x /= 10;
        }
        if (i + j == n)
        {
            ans.push_back(i);
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i] << endl;
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