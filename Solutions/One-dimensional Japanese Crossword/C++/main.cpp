// Problem: One-dimensional Japanese Crossword
// Link to the problem: https://codeforces.com/contest/721/problem/A
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
    vector<ll> ans;
    ll x = 0;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'B')
        {
            x++;
        }
        else
        {
            if (x > 0)
            {
                ans.push_back(x);
            }
            x = 0;
        }
    }
    if (s[n - 1] == 'B')
    {
        ans.push_back(x);
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