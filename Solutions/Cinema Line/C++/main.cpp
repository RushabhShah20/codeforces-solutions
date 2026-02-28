// Problem: Cinema Line
// Link to the problem: https://codeforces.com/contest/349/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll x = 0, y = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 100)
        {
            if (y < 1)
            {
                if (x < 3)
                {
                    cout << "NO" << endl;
                    return;
                }
                x -= 3;
            }
            else
            {
                y--;
                if (x < 1)
                {
                    cout << "NO" << endl;
                    return;
                }
                x--;
            }
        }
        else if (a[i] == 50)
        {
            if (x < 1)
            {
                cout << "NO" << endl;
                return;
            }
            x--;
            y++;
        }
        else
        {
            x++;
        }
    }
    cout << "YES" << endl;
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