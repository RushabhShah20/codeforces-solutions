// Problem: Permutation Chain
// Link to the problem: https://codeforces.com/contest/1716/problem/B
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
        a[i] = i + 1;
    }
    cout << n << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    for (ll i = n - 1; i >= 1; i--)
    {
        vector<ll> b = a;
        swap(b[i], b[i - 1]);
        for (ll j = 0; j < n; j++)
        {
            cout << b[j] << " ";
        }
        cout << endl;
        a = b;
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