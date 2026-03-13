// Problem: Repeating Cipher
// Link to the problem: https://codeforces.com/contest/1095/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, j = 0;
    cin >> n;
    string s, ans;
    cin >> s;
    for (ll i = 0; i < n; i += j)
    {
        ans += s[i];
        j++;
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