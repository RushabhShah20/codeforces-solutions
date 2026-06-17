// Problem: Alphabetic Removals
// Link to the problem: https://codeforces.com/contest/999/problem/C
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
    vector<ll> a(26, 0);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (k > a[i])
        {
            k -= a[i];
            a[i] = 0;
        }
        else
        {
            a[i] -= k;
            break;
        }
    }
    string ans;
    for (ll i = n - 1; i >= 0; i--)
    {
        if (a[s[i] - 'a'] > 0)
        {
            ans.append(1, s[i]);
            a[s[i] - 'a']--;
        }
    }
    reverse(ans.begin(), ans.end());
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