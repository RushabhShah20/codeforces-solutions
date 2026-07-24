// Problem: Cows and Poker Game
// Link to the problem: https://codeforces.com/contest/284/problem/B
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
    ll a = 0, b = 0, c = 0;
    for (ll i = 0; i < n; i++)
    {
        a += s[i] == 'A' ? 1 : 0;
        b += s[i] == 'I' ? 1 : 0;
        c += s[i] == 'F' ? 1 : 0;
    }
    const ll ans = (a + c == n - 1 ? b : 0) + (b == 0 ? a : 0);
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