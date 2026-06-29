// Problem: Mahmoud and Longest Uncommon Subsequence
// Link to the problem: https://codeforces.com/contest/766/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << -1 << endl;
        return;
    }
    const ll ans = max(a.size(), b.size());
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