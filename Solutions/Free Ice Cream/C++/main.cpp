// Problem: Free Ice Cream
// Link to the problem: https://codeforces.com/contest/686/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x, y = 0;
    cin >> n >> x;
    for (ll i = 0; i < n; i++)
    {
        char c;
        cin >> c;
        ll d;
        cin >> d;
        if (c == '+')
        {
            x += d;
        }
        else
        {
            if (x >= d)
            {
                x -= d;
            }
            else
            {
                y++;
            }
        }
    }
    cout << x << " " << y << endl;
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