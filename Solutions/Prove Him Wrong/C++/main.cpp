// Problem: Prove Him Wrong
// Link to the problem: https://codeforces.com/contest/1651/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 19)
    {
        cout << "YES" << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << (ll)powl(3, i) << " ";
        }
        cout << endl;
    }
    else
    {
        cout << "NO" << endl;
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