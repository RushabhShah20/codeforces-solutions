// Problem: Passing the Ball
// Link to the problem: https://codeforces.com/contest/2204/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, ans = 1;
    cin >> n;
    string s;
    cin >> s;
    for (ll i = 1; i < n; i++)
    {
        ans++;
        if (s[i] == 'L')
        {
            break;
        }
    }
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