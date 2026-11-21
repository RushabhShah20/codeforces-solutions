// Problem: Little Elephant and Problem
// Link to the problem: https://codeforces.com/contest/220/problem/A
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
    vector<ll> b = a;
    sort(b.begin(), b.end());
    ll l = -1, r = -1;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            l = i;
            break;
        }
    }
    if (l == -1)
    {
        cout << "YES" << endl;
        return;
    }
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[i] != b[i])
        {
            r = i;
            break;
        }
    }
    swap(a[l], a[r]);
    for (ll i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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