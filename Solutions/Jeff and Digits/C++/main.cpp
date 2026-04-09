// Problem: Jeff and Digits
// Link to the problem: https://codeforces.com/contest/352/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        if (z == 0)
        {
            x++;
        }
        else
        {
            y++;
        }
    }
    if (x == 0)
    {
        cout << -1 << endl;
    }
    else
    {
        const ll a = y / 9;
        if (a == 0)
        {
            cout << 0 << endl;
            return;
        }
        string ans(9 * a, '5');
        ans.append(x, '0');
        cout << ans << endl;
    }
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