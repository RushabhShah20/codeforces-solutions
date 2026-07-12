// Problem: Polycarp's Favorite Numbers
// Link to the problem: https://codeforces.com/contest/649/problem/A
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
    vector<ll> b(32, 0);
    for (ll j = 0; j < 32; j++)
    {
        for (ll i = 0; i < n; i++)
        {
            if (a[i] % (1LL << j) == 0)
            {
                b[j]++;
            }
        }
    }
    for (ll i = 31; i >= 0; i--)
    {
        if (b[i] > 0)
        {
            cout << (1LL << i) << " " << b[i] << endl;
            return;
        }
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