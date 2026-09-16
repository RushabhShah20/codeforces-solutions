// Problem: Lucky Permutation Triple
// Link to the problem: https://codeforces.com/contest/303/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n & 1)
    {
        for (ll i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << i << " ";
        }
        cout << endl;
        for (ll i = 0; i < n; i++)
        {
            cout << (2 * i) % n << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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