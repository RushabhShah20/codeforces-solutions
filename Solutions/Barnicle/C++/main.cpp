// Problem: Barnicle
// Link to the problem: https://codeforces.com/contest/697/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll j = -1;
    for (ll i = 0; i < n; i++)
    {
        if (s[i] == 'e')
        {
            j = i;
            break;
        }
    }
    string ans = s.substr(0, j);
    ll a = stoll(s.substr(j + 1));
    const ll m = ans.size();
    ll k = 0;
    for (ll i = 0; i < m; i++)
    {
        if (s[i] == '.')
        {
            k = i;
            break;
        }
    }
    for (ll i = k; i < m - 1; i++)
    {
        if (a > 0)
        {
            swap(ans[i], ans[i + 1]);
            a--;
        }
    }
    if (ans.back() == '.')
    {
        ans.pop_back();
    }
    ans.append(a, '0');
    if (ans.size() >= 2 && ans.substr(ans.size() - 2) == ".0")
    {
        ans.erase(ans.size() - 2);
    }
    while (ans.size() > 1 && ans[0] == '0' && ans[1] != '.')
    {
        ans.erase(ans.begin());
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