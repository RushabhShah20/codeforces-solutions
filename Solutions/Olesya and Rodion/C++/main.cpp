// Problem: Olesya and Rodion
// Link to the problem: https://codeforces.com/contest/584/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, t;
    cin >> n >> t;
    if (t == 10)
    {
        if (n == 1)
        {
            cout << -1 << endl;
        }
        else
        {
            string ans = "1";
            const string x(n - 1, '0');
            ans += x;
            cout << ans << endl;
        }
    }
    else
    {
        const string ans(n, t + '0');
        cout << ans << endl;
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