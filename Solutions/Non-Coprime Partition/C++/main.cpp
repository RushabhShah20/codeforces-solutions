// Problem: Non-Coprime Partition
// Link to the problem: https://codeforces.com/contest/1038/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n <= 2)
    {
        cout << "No" << endl;
    }
    else
    {
        cout << "Yes" << endl;
        if (n & 1)
        {
            cout << (n + 1) / 2 << " ";
            for (ll i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << n / 2 << " ";
            for (ll i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << n / 2 << " ";
            for (ll i = 1; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
            cout << n / 2 << " ";
            for (ll i = 2; i <= n; i += 2)
            {
                cout << i << " ";
            }
            cout << endl;
        }
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