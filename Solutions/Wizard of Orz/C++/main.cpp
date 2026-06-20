// Problem: Wizard of Orz
// Link to the problem: https://codeforces.com/contest/1467/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string ans = "989";
    const string s = "0123456789";
    for (ll i = 0; i < (n - 3) / 10; i++)
    {
        ans.append(s);
    }
    ans.append(s.substr(0, (n - 3) % 10));
    cout << ans.substr(0, n) << endl;
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