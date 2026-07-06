// Problem: Ehab Fails to Be Thanos
// Link to the problem: https://codeforces.com/contest/1174/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll m = 2 * n;
    vector<ll> a(m);
    for (ll i = 0; i < m; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] == a[m - 1])
    {
        cout << -1 << endl;
        return;
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