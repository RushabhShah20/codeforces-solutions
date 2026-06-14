// Problem: Poster
// Link to the problem: https://codeforces.com/contest/412/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    k--;
    string s;
    cin >> s;
    if (2 * k >= n)
    {
        const ll m = n - 1 - k;
        for (ll i = 0; i < m; i++)
        {
            cout << "RIGHT" << endl;
        }
        for (ll i = n - 1; i >= 1; i--)
        {
            cout << "PRINT " << s[i] << endl;
            cout << "LEFT" << endl;
        }
        cout << "PRINT " << s[0] << endl;
    }
    else
    {
        for (ll i = 0; i < k; i++)
        {
            cout << "LEFT" << endl;
        }
        for (ll i = 0; i < n - 1; i++)
        {
            cout << "PRINT " << s[i] << endl;
            cout << "RIGHT" << endl;
        }
        cout << "PRINT " << s[n - 1] << endl;
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