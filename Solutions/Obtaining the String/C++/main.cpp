// Problem: Obtaining the String
// Link to the problem: https://codeforces.com/contest/1015/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    vector<ll> a(26), b(26);
    for (ll i = 0; i < n; i++)
    {
        a[s[i] - 'a']++;
        b[t[i] - 'a']++;
    }
    for (ll i = 0; i < 26; i++)
    {
        if (a[i] != b[i])
        {
            cout << -1 << endl;
            return;
        }
    }
    vector<ll> ans;
    for (ll i = n - 1; i >= 1; i--)
    {
        if (s[i] != t[i])
        {
            ll k = i;
            for (ll j = i - 1; j >= 0; j--)
            {
                if (s[j] == t[i])
                {
                    k = j;
                    break;
                }
            }
            for (ll j = k; j < i; j++)
            {
                swap(s[j + 1], s[j]);
                ans.push_back(j + 1);
            }
        }
    }
    const ll m = ans.size();
    cout << m << endl;
    for (ll i = 0; i < m; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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