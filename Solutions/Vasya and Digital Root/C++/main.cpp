// Problem: Vasya and Digital Root
// Link to the problem: https://codeforces.com/contest/355/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k == 0)
    {
        const string ans = n == 1 ? "0" : "No solution";
        cout << ans << endl;
        return;
    }
    string ans(n, '0');
    ans[0] = '1';
    ans[n - 1] += k - 1;
    cout << ans << endl;
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