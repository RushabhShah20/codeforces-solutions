// Problem: Mirror in the String
// Link to the problem: https://codeforces.com/contest/1616/problem/B
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
    if (n > 1 && s[1] >= s[0])
    {
        cout << s[0] << s[0] << endl;
        return;
    }
    ll j = 1;
    while (j < n && s[j] <= s[j - 1])
    {
        j++;
    }
    const string a = s.substr(0, j == -1 ? n : j);
    const ll k = (j == -1 ? n : j) << 1;
    string ans(k, ' ');
    ll l = 0, r = k - 1;
    while (l <= r)
    {
        ans[l] = ans[r] = a[l];
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