// Problem: Lucky Substring
// Link to the problem: https://codeforces.com/contest/122/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll a = 0, b = 0;
    for (ll i = 0; i < n; i++)
    {
        a += s[i] == '4' ? 1 : 0;
        b += s[i] == '7' ? 1 : 0;
    }
    const ll ans = a == 0 && b == 0 ? -1 : (a >= b ? 4 : 7);
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