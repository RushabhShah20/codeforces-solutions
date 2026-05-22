// Problem: QAQ
// Link to the problem: https://codeforces.com/contest/894/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'Q')
        {
            x++;
            ans += y;
        }
        else if (s[i] == 'A')
        {
            y += x;
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