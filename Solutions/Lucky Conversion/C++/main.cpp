// Problem: Lucky Conversion
// Link to the problem: https://codeforces.com/contest/145/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    const ll n = a.size();
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            a[i] == '4' ? x++ : y++;
        }
    }
    const ll ans = abs(x - y) + min(x, y);
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