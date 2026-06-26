// Problem: Simple Repetition
// Link to the problem: https://codeforces.com/contest/2093/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (n == 1 && k == 2)
    {
        cout << "YES" << endl;
        return;
    }
    if (k == 1)
    {
        if (n <= 1)
        {
            cout << "NO" << endl;
            return;
        }
        if (n <= 3)
        {
            cout << "YES" << endl;
            return;
        }
        if (n % 2 == 0 || n % 3 == 0)
        {
            cout << "NO" << endl;
            return;
        }
        for (ll i = 5; i * i <= n; i += 6)
        {
            if (n % i == 0 || n % (i + 2) == 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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