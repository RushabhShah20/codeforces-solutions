// Problem: Ela Sorting Books
// Link to the problem: https://codeforces.com/contest/1737/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    const ll m = n / k;
    string ans;
    vector<ll> a(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 1; i <= k; i++)
    {
        bool x = false;
        for (ll j = 0; j < m; j++)
        {
            if (a[j] < i)
            {
                x = true;
                ans.append(1, 'a' + j);
                break;
            }
        }
        if (!x)
        {
            ans.append(1, 'a' + m);
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