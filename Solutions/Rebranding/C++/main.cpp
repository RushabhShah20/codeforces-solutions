// Problem: Rebranding
// Link to the problem: https://codeforces.com/contest/591/problem/B
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
    string t = "abcdefghijklmnopqrstuvwxyz";
    for (ll i = 0; i < m; i++)
    {
        char a, b;
        cin >> a >> b;
        for (ll j = 0; j < 26; j++)
        {
            if (t[j] == a)
            {
                t[j] = b;
            }
            else if (t[j] == b)
            {
                t[j] = a;
            }
        }
    }
    string ans(n, ' ');
    for (ll i = 0; i < n; i++)
    {
        ans[i] = t[s[i] - 'a'];
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