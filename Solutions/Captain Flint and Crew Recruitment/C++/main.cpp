// Problem: Captain Flint and Crew Recruitment
// Link to the problem: https://codeforces.com/contest/1388/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 30)
    {
        cout << "NO" << endl;
    }
    else
    {
        cout << "YES" << endl;
        const ll x = n - 30;
        if (x == 6)
        {
            cout << 6 << " " << 10 << " " << 15 << " " << x - 1 << endl;
            return;
        }
        if (x == 10)
        {
            cout << 6 << " " << 10 << " " << 15 << " " << x - 1 << endl;
            return;
        }
        if (x == 14)
        {
            cout << 6 << " " << 10 << " " << 15 << " " << x - 1 << endl;
            return;
        }
        cout << 6 << " " << 10 << " " << 14 << " " << x << endl;
    }
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