// Problem: Bachgold Problem
// Link to the problem: https://codeforces.com/contest/749/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
        for (ll i = 0; i < n / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << endl;
    }
    else
    {
        cout << (1 + ((n - 3) / 2)) << endl;
        for (ll i = 0; i < (n - 3) / 2; i++)
        {
            cout << 2 << " ";
        }
        cout << 3 << endl;
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