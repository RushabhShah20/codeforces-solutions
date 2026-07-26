// Problem: 3-palindrome
// Link to the problem: https://codeforces.com/contest/805/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string ans;
    const string s = "aa", t = "bb";
    for (ll i = 1; i <= n / 2; i++)
    {
        ans.append(i & 1 ? t : s);
    }
    if (n & 1)
    {
        ans.append(1, (n / 2) & 1 ? 'a' : 'b');
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