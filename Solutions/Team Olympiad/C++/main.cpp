// Problem: Team Olympiad
// Link to the problem: https://codeforces.com/contest/490/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a, b, c;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (x == 1)
        {
            a.push_back(i);
        }
        else if (x == 2)
        {
            b.push_back(i);
        }
        else
        {
            c.push_back(i);
        }
    }
    const ll m = min({a.size(), b.size(), c.size()});
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        cout << a[i]+1 << " " << b[i]+1 << " " << c[i]+1 << endl;
    }
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