// Problem: Regular Bracket Sequences
// Link to the problem: https://codeforces.com/contest/1574/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        string ans(i, '(');
        for (ll j = 1; j <= n - i; j++)
        {
            ans.append("()");
        }
        ans.append(i, ')');
        cout << ans << endl;
    }
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