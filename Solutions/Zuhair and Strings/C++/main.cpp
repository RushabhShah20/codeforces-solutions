// Problem: Zuhair and Strings
// Link to the problem: https://codeforces.com/contest/1105/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    ll ans = 0;
    for (char i = 'a'; i <= 'z'; i++)
    {
        ll x = 0, y = 0;
        for (ll j = 0; j < n; j++)
        {
            if (s[j] == i)
            {
                y++;
                if (y == k)
                {
                    x++;
                    y = 0;
                }
            }
            else
            {
                y = 0;
            }
        }
        ans = max(ans, x);
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