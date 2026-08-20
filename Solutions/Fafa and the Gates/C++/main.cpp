// Problem: Fafa and the Gates
// Link to the problem: https://codeforces.com/contest/935/problem/B
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
    ll ans = 0, x = 0, y = 0;
    s[0] == 'R' ? x++ : y++;
    ll a = x > y ? 1 : 2;
    for (ll i = 1; i < n; i++)
    {
        s[i] == 'R' ? x++ : y++;
        const ll b = a;
        if (x > y)
        {
            a = 1;
        }
        else if (x < y)
        {
            a = 2;
        }
        ans += a == b ? 0 : 1;
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