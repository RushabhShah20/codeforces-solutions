// Problem: MKnez's ConstructiveForces Task
// Link to the problem: https://codeforces.com/contest/1779/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        if (n <= 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
            const ll x = n / 2;
            for (ll i = 0; i < n; i++)
            {
                if (i & 1)
                {
                    cout << -x;
                }
                else
                {
                    cout << x - 1;
                }
                cout << " ";
            }
            cout << endl;
        }
    }
    else
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n / 2; i++)
        {
            cout << 1 << " " << -1 << " ";
        }
        cout << endl;
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