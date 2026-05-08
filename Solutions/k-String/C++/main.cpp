// Problem: k-String
// Link to the problem: https://codeforces.com/contest/219/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll k;
    cin >> k;
    string s;
    cin >> s;
    const ll n = s.size();
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    string x;
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] % k != 0)
        {
            cout << -1 << endl;
            return;
        }
        x.append(a[i] / k, 'a' + i);
    }
    string ans;
    for (ll i = 0; i < k; i++)
    {
        ans.append(x);
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