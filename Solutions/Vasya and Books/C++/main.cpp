// Problem: Vasya and Books
// Link to the problem: https://codeforces.com/contest/1073/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n + 1);
    for (ll i = 1; i <= n; i++)
    {
        ll x;
        cin >> x;
        a[x] = i;
    }
    ll z = 0;
    for (ll i = 0; i < n; i++)
    {
        ll y;
        cin >> y;
        if (a[y] <= z)
        {
            cout << 0 << " ";
        }
        else
        {
            cout << a[y] - z << " ";
            z = a[y];
        }
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