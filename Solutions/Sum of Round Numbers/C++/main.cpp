// Problem: Sum of Round Numbers
// Link to the problem: https://codeforces.com/contest/1352/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll j = 0;
    vector<ll> ans;
    for (ll i = n - 1; i >= 0; i--)
    {
        const ll x = s[i] - '0';
        if (x != 0)
        {
            ans.push_back(x * pow(10, j));
        }
        j++;
    }
    const ll a = ans.size();
    cout << a << endl;
    for (ll i = 0; i < a; i++)
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}