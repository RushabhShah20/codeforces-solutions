// Problem: Polo the Penguin and Strings
// Link to the problem: https://codeforces.com/contest/288/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    if (k > n)
    {
        cout << -1 << endl;
        return;
    }
    if (k == 1)
    {
        const string ans = n == 1 ? "a" : "-1";
        cout << ans << endl;
        return;
    }
    string ans;
    const ll m = n - (k - 2);
    for (ll i = 0; i < m / 2; i++)
    {
        ans.append("ab");
    }
    if (m & 1)
    {
        ans.append(1, 'a');
    }
    for (ll i = 2; i < k; i++)
    {
        ans.append(1, 'a' + i);
    }
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