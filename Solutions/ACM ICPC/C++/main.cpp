// Problem: ACM ICPC
// Link to the problem: https://codeforces.com/contest/886/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(6);
    ll x = 0;
    for (ll i = 0; i < 6; i++)
    {
        cin >> a[i];
        x += a[i];
    }
    for (ll i = 0; i < 6; i++)
    {
        for (ll j = i + 1; j < 6; j++)
        {
            for (ll k = j + 1; k < 6; k++)
            {
                if (x == 2 * (a[i] + a[j] + a[k]))
                {
                    cout << "YES" << endl;
                    return;
                }
            }
        }
    }
    cout << "NO" << endl;
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