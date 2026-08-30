// Problem: Digital Counter
// Link to the problem: https://codeforces.com/contest/495/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const vector<ll> a = {2, 7, 2, 3, 3, 4, 2, 5, 1, 2};
    const ll ans = a[s[0] - '0'] * a[s[1] - '0'];
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