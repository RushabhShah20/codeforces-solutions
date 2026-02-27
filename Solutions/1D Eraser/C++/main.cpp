// Problem: 1D Eraser
// Link to the problem: https://codeforces.com/contest/1873/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k, i = 0, ans = 0;
    cin >> n >> k;
    string s;
    cin >> s;
    while (i < n)
    {
        if (s[i] == 'B')
        {
            i += k;
            ans++;
        }
        else
        {
            i++;
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