// Problem: Spoilt Permutation
// Link to the problem: https://codeforces.com/contest/56/problem/B
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
    ll l = -1, r = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != i + 1)
        {
            l = i;
            break;
        }
    }
    if (l == -1)
    {
        cout << "0 0" << endl;
        return;
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != i + 1)
        {
            r = i;
            break;
        }
    }
    if (l >= r)
    {
        cout << "0 0" << endl;
        return;
    }
    const ll x = l + 1, y = r + 1;
    while (l <= r)
    {
        if (a[l] != r + 1 || a[r] != l + 1)
        {
            cout << "0 0" << endl;
            return;
        }
        l++;
        r--;
    }
    cout << x << " " << y << endl;
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