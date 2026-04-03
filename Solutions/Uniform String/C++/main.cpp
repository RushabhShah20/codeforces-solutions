// Problem: Uniform String
// Link to the problem: https://codeforces.com/contest/1092/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string ans;
    for (ll i = 0; i < k - 1; i++)
    {
        ans.append(n / k, 'a' + i);
    }
    ans.append(n - (k - 1) * (n / k), 'a' + (k - 1));
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