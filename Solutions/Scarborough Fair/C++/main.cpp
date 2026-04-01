// Problem: Scarborough Fair
// Link to the problem: https://codeforces.com/contest/897/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    string s;
    cin >> s;
    for (ll i = 0; i < m; i++)
    {
        ll l, r;
        char c1, c2;
        cin >> l >> r >> c1 >> c2;
        for (ll j = l - 1; j <= r - 1; j++)
        {
            if (s[j] == c1)
            {
                s[j] = c2;
            }
        }
    }
    cout << s << endl;
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