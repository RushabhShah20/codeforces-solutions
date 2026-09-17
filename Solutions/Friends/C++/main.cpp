// Problem: Friends
// Link to the problem: https://codeforces.com/contest/94/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(5);
    for (ll i = 0; i < n; i++)
    {
        ll u, v;
        cin >> u >> v;
        a[u - 1]++;
        a[v - 1]++;
    }
    for (ll i = 0; i < 5; i++)
    {
        if (a[i] <= 1 || a[i] >= 3)
        {
            cout << "WIN" << endl;
            return;
        }
    }
    cout << "FAIL" << endl;
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