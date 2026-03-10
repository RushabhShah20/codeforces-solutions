// Problem: Police Recruits
// Link to the problem: https://codeforces.com/contest/427/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, ans = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        if (y == -1)
        {
            if (x > 0)
            {
                x--;
            }
            else
            {
                ans++;
            }
        }
        else
        {
            x += y;
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
    solve();
    return 0;
}