// Problem: Postcards and photos
// Link to the problem: https://codeforces.com/contest/137/problem/A
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
        if (s[i] == 'C')
        {
            x++;
            ans += (y + 4) / 5;
            y = 0;
        }
        else
        {
            y++;
            ans += (x + 4) / 5;
            x = 0;
        }
    }
    ans += (x + 4) / 5;
    ans += (y + 4) / 5;
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