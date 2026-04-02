// Problem: Ball Game
// Link to the problem: https://codeforces.com/contest/46/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n - 1);
    ans[0] = 2;
    for (ll i = 1; i < n - 1; i++)
    {
        ans[i] = ((ans[i - 1] + (i + 1)) == n ? n : (ans[i - 1] + (i + 1)) % n);
    }
    for (ll i = 0; i < n - 1; i++)
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