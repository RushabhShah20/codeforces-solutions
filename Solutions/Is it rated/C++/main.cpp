// Problem: Is it rated?
// Link to the problem: https://codeforces.com/contest/807/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<pair<ll, ll>> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i].first >> a[i].second;
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i].first != a[i].second)
        {
            cout << "rated" << endl;
            return;
        }
    }
    for (ll i = 1; i < n; i++)
    {
        if (a[i] > a[i - 1])
        {
            cout << "unrated" << endl;
            return;
        }
    }
    cout << "maybe" << endl;
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