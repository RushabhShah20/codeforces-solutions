// Problem: A Good Contest
// Link to the problem: https://codeforces.com/contest/681/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    bool x = false;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        ll a, b;
        cin >> a >> b;
        if (a >= 2400 && b >= 2400 && b - a > 0)
        {
            x = true;
        }
    }
    const string ans = x ? "YES" : "NO";
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