// Problem: Silent Classroom
// Link to the problem: https://codeforces.com/contest/1166/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        a[s[0] - 'a']++;
    }
    ll ans = 0;
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] & 1)
        {
            const ll x = a[i] / 2, y = (a[i] + 1) / 2;
            ans += x * (x - 1) / 2 + y * (y - 1) / 2;
        }
        else
        {
            const ll x = a[i] / 2;
            ans += x * (x - 1);
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
    solve();
    return 0;
}