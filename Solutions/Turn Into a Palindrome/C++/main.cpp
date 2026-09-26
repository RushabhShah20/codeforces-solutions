// Problem: Turn Into a Palindrome
// Link to the problem: https://codeforces.com/contest/2267/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    char c;
    cin >> c;
    string s;
    cin >> s;
    ll ans = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        if (s[l] != s[r])
        {
            ans += (s[l] != c) + (s[r] != c);
        }
        l++;
        r--;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}