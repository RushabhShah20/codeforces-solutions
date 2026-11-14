// Problem: Easy As ABC
// Link to the problem: https://codeforces.com/contest/1906/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<string> s(3);
    for (ll i = 0; i < 3; i++)
    {
        cin >> s[i];
    }
    string ans = "CCC";
    const vector<ll> a = {-1, -1, -1, 0, 0, 1, 1, 1}, b = {-1, 0, 1, -1, 1, -1, 0, 1};
    for (ll i = 0; i < 3; i++)
    {
        for (ll j = 0; j < 3; j++)
        {
            for (ll l = 0; l < 8; l++)
            {
                const ll c = i + a[l], d = j + b[l];
                if (c < 0 || c > 2 || d < 0 || d > 2)
                {
                    continue;
                }
                for (ll r = 0; r < 8; r++)
                {
                    const ll p = c + a[r], q = d + b[r];
                    if (p < 0 || p > 2 || q < 0 || q > 2)
                    {
                        continue;
                    }
                    if ((i == c && j == d) || (i == p && j == q) || (c == p && d == q))
                    {
                        continue;
                    }
                    string t;
                    t.append(1, s[i][j]);
                    t.append(1, s[c][d]);
                    t.append(1, s[p][q]);
                    ans = min(ans, t);
                }
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
    solve();
    return 0;
}