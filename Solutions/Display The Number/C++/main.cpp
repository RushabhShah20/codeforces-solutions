// Problem: Display The Number
// Link to the problem: https://codeforces.com/contest/1295/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        string ans(1, '7');
        ans.append((n - 3) / 2, '1');
        cout << ans << endl;
    }
    else
    {
        const string ans(n / 2, '1');
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