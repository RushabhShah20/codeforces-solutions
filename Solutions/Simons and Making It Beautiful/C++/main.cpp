// Problem: Simons and Making It Beautiful
// Link to the problem: https://codeforces.com/contest/2205/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
        if (a[i] == n)
        {
            j = i;
        }
    }
    swap(a[0], a[j]);
    for (ll i = 0; i < n; i++)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}