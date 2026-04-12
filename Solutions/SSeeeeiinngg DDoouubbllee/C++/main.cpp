// Problem: SSeeeeiinngg DDoouubbllee
// Link to the problem: https://codeforces.com/contest/1758/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a'] += 2;
    }
    string ans(2 * n, ' ');
    ll l = 0, r = 2 * n - 1;
    for (ll i = 0; i < 26; i++)
    {
        while (a[i] > 0)
        {
            ans[l] = 'a' + i;
            ans[r] = 'a' + i;
            l++;
            r--;
            a[i] -= 2;
        }
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