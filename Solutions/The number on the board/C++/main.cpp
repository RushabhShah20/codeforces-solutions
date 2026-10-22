// Problem: The number on the board
// Link to the problem: https://codeforces.com/contest/835/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    const ll n = s.size();
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        x += s[i] - '0';
    }
    ll ans = 0;
    sort(s.begin(), s.end());
    for (ll i = 0; i < n; i++)
    {
        if (x >= k)
        {
            break;
        }
        x += 9 - s[i] + '0';
        ans++;
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