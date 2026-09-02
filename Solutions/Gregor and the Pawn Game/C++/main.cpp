// Problem: Gregor and the Pawn Game
// Link to the problem: https://codeforces.com/contest/1549/problem/B
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
    for (ll i = 0; i < n; i++)
    {
        if (t[i] == '0')
        {
            continue;
        }
        if (s[i] == '0')
        {
            ans++;
            s[i] = '2';
        }
        else if (i > 0 && s[i - 1] == '1')
        {
            ans++;
            s[i - 1] = '2';
        }
        else if (i < n - 1 && s[i + 1] == '1')
        {
            ans++;
            s[i + 1] = '2';
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