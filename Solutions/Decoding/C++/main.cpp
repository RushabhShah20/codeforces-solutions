// Problem: Decoding
// Link to the problem: https://codeforces.com/contest/746/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s;
    string ans;
    for (ll i = n - 2; i >= 0; i -= 2)
    {
        ans.append(1, s[i]);
    }
    for (ll i = !(n & 1); i < n; i += 2)
    {
        ans.append(1, s[i]);
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