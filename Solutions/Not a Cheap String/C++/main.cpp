// Problem: Not a Cheap String
// Link to the problem: https://codeforces.com/contest/1702/problem/D
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    ll k;
    cin >> k;
    const ll n = s.size();
    vector<ll> a(26, 0);
    ll m = 0;
    for (ll i = 0; i < n; i++)
    {
        const ll x = s[i] - 'a';
        a[x]++;
        m += x + 1;
    }
    ll y = max(0LL, m - k);
    for (ll i = 25; i >= 0; i--)
    {
        if (y >= (i + 1) * a[i])
        {
            y -= (i + 1) * a[i];
            a[i] = 0;
        }
        else
        {
            a[i] -= (y + i) / (i + 1);
            y = 0;
            break;
        }
    }
    string ans;
    for (ll i = 0; i < n; i++)
    {
        if (a[s[i] - 'a'] > 0)
        {
            ans.append(1, s[i]);
            a[s[i] - 'a']--;
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