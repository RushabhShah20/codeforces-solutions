// Problem: Angry Students
// Link to the problem: https://codeforces.com/contest/1287/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll ans = 0, x = 0;
    bool a = false;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'A')
        {
            a = true;
            ans = max(ans, x);
            x = 0;
        }
        else
        {
            if (a)
            {
                x++;
            }
        }
    }
    ans = max(ans, x);
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