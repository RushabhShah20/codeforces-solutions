// Problem: Cifera
// Link to the problem: https://codeforces.com/contest/114/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k, l, ans = -1;
    cin >> k >> l;
    while (l % k == 0)
    {
        ans++;
        l /= k;
    }
    if (l == 1)
    {
        cout << "YES" << endl;
        cout << ans << endl;
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
    solve();
    return 0;
}