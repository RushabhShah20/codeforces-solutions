// Problem: Pasha and Hamsters
// Link to the problem: https://codeforces.com/contest/421/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> p(a), q(b), c(n);
    for (ll i = 0; i < a; i++)
    {
        cin >> p[i];
        c[p[i] - 1] += 1;
    }
    for (ll i = 0; i < b; i++)
    {
        cin >> q[i];
        c[q[i] - 1] += 2;
    }
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        if (c[i] >= 2)
        {
            ans[i] = 2;
        }
        else
        {
            ans[i] = 1;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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