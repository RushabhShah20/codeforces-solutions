// Problem: Meeting of Old Friends
// Link to the problem: https://codeforces.com/contest/714/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll l1, r1, l2, r2, k;
    cin >> l1 >> r1 >> l2 >> r2 >> k;
    const ll l = max(l1, l2), r = min(r1, r2), ans = max(0LL, r - l + 1 - (k >= l && k <= r ? 1 : 0));
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