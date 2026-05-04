// Problem: New Password
// Link to the problem: https://codeforces.com/contest/770/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string ans, x;
    for (ll i = 0; i < k; i++)
    {
        x.append(1, 'a' + i);
    }
    for (ll i = 0; i < n / k; i++)
    {
        ans.append(x);
    }
    ans.append(x.substr(0, n % k));
    cout << ans << endl;
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