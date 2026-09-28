// Problem: Make Product Equal One
// Link to the problem: https://codeforces.com/contest/1206/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0, x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z > 0)
        {
            ans += z - 1;
        }
        else if (z < 0)
        {
            ans += -z - 1;
            y++;
        }
        else
        {
            ans++;
            x++;
        }
    }
    ans += y & 1 && x == 0 ? 2 : 0;
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