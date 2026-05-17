// Problem: Question Marks
// Link to the problem: https://codeforces.com/contest/1993/problem/A
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
    ll a = 0, b = 0, c = 0, d = 0;
    for (ll i = 0; i < 4 * n; i++)
    {
        if (s[i] == 'A')
        {
            a++;
        }
        if (s[i] == 'B')
        {
            b++;
        }
        if (s[i] == 'C')
        {
            c++;
        }
        if (s[i] == 'D')
        {
            d++;
        }
    }
    const ll ans = min(a, n) + min(b, n) + min(c, n) + min(d, n);
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