// Problem: Lex String
// Link to the problem: https://codeforces.com/contest/1689/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m, k;
    cin >> n >> m >> k;
    string s, t;
    cin >> s >> t;
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    ll x = 0, y = 0, i = 0, j = 0;
    string ans;
    while (i < n && j < m)
    {
        if (s[i] < t[j])
        {
            if (x == k)
            {
                ans.append(1, t[j]);
                y++;
                x = 0;
                j++;
            }
            else
            {
                ans.append(1, s[i]);
                x++;
                y = 0;
                i++;
            }
        }
        else
        {
            if (y == k)
            {
                ans.append(1, s[i]);
                x++;
                y = 0;
                i++;
            }
            else
            {
                ans.append(1, t[j]);
                y++;
                x = 0;
                j++;
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