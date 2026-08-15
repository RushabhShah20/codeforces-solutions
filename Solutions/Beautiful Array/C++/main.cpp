// Problem: Beautiful Array
// Link to the problem: https://codeforces.com/contest/2041/problem/E
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    cout << 3 << endl;
    vector<ll> ans = {3 * a - 2 * b, b, b};
    sort(ans.begin(), ans.end());
    for (ll i = 0; i < 3; i++)
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