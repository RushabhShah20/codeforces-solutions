// Problem: Summer Camp
// Link to the problem: https://codeforces.com/contest/672/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string ans;
    for (ll i = 1; i <= n; i++)
    {
        ans.append(to_string(i));
    }
    cout << ans[n - 1] << endl;
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