// Problem: MAX-MEX Cut
// Link to the problem: https://codeforces.com/contest/1566/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    ll ans = 0;
    for (ll i = 0; i < n;)
    {
        if (s[i] != t[i])
        {
            ans += 2;
            i++;
        }
        else if (s[i] == '0')
        {
            if (i < n - 1 && s[i + 1] == '1' && t[i + 1] == '1')
            {
                ans += 2;
                i += 2;
            }
            else
            {
                ans++;
                i++;
            }
        }
        else
        {
            if (i < n - 1 && s[i + 1] == '0' && t[i + 1] == '0')
            {
                ans += 2;
                i += 2;
            }
            else
            {
                i++;
            }
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