// Problem: Mountain Scenery
// Link to the problem: https://codeforces.com/contest/218/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll m = 2 * n + 1;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    for (ll i = 1; i < m - 1; i += 2)
    {
        if (k > 0)
        {
            if (a[i] > a[i - 1] + 1 && a[i] > a[i + 1] + 1)
            {
                a[i]--;
                k--;
            }
        }
        else
        {
            break;
        }
    }
    for (ll i = 0; i < m; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
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