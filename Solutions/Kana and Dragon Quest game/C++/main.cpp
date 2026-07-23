// Problem: Kana and Dragon Quest game
// Link to the problem: https://codeforces.com/contest/1337/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    for (ll i = 0; i < a; i++)
    {
        if (n <= 20)
        {
            break;
        }
        n = (n >> 1) + 10;
    }
    const string ans = n <= b * 10 ? "YES" : "NO";
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