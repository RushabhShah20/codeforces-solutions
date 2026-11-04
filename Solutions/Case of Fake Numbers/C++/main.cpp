// Problem: Case of Fake Numbers
// Link to the problem: https://codeforces.com/contest/556/problem/B
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
    const ll x = n - a[0];
    for (ll i = 0; i < n; i++)
    {
        if (i & 1)
        {
            if ((a[i] - x + n) % n != i)
            {
                cout << "No" << endl;
                return;
            }
        }
        else
        {
            if ((a[i] + x) % n != i)
            {
                cout << "No" << endl;
                return;
            }
        }
    }
    cout << "Yes" << endl;
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