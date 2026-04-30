// Problem: Game with Cards
// Link to the problem: https://codeforces.com/contest/1681/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = LLONG_MIN, y = LLONG_MIN;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll z;
        cin >> z;
        x = max(x, z);
    }
    ll m;
    cin >> m;
    for (ll i = 0; i < m; i++)
    {
        ll z;
        cin >> z;
        y = max(y, z);
    }
    if (x > y)
    {
        cout << "Alice" << endl;
        cout << "Alice" << endl;
    }
    else if (x < y)
    {
        cout << "Bob" << endl;
        cout << "Bob" << endl;
    }
    else
    {
        cout << "Alice" << endl;
        cout << "Bob" << endl;
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