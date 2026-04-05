// Problem: Worms Evolution
// Link to the problem: https://codeforces.com/contest/31/problem/A
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
    for (ll i = 0; i < n; i++)
    {
        for (ll j = 0; j < n; j++)
        {
            for (ll k = 0; k < n; k++)
            {
                if (i != j && j != k)
                {
                    if (a[i] == a[j] + a[k])
                    {
                        cout << i + 1 << " " << j + 1 << " " << k + 1 << endl;
                        return;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
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