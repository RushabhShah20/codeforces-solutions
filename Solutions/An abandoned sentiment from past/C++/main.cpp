// Problem: An abandoned sentiment from past
// Link to the problem: https://codeforces.com/contest/814/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, m;
    cin >> n >> m;
    vector<ll> a(n), b(m);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (ll i = 0; i < m; i++)
    {
        cin >> b[i];
    }
    sort(b.begin(), b.end(), greater<>());
    ll j = 0;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            a[i] = b[j];
            j++;
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] <= a[i - 1])
        {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
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