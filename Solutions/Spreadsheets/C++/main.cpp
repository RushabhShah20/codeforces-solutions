// Problem: Spreadsheets
// Link to the problem: https://codeforces.com/contest/1/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

bool find(const ll n, const string &s)
{
    if (s[0] == 'R' && isdigit(s[1]))
    {
        for (ll i = 2; i < n; i++)
        {
            if (s[i] == 'C')
            {
                return true;
            }
        }
    }
    return false;
}

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    string ans;
    if (find(n, s))
    {
        ll l = -1, r = -1;
        for (ll i = 0; i < n; i++)
        {
            if (s[i] == 'R')
            {
                l = i;
                break;
            }
        }
        for (ll i = n - 1; i >= 0; i--)
        {
            if (s[i] == 'C')
            {
                r = i;
                break;
            }
        }
        const ll x = stoll(s.substr(l + 1, r - l - 1));
        ll y = stoll(s.substr(r + 1));
        string t;
        while (y > 0)
        {
            t.append(1, 'A' + (y - 1) % 26);
            y = (y - 1) / 26;
        }
        reverse(t.begin(), t.end());
        ans.append(t);
        ans.append(to_string(x));
    }
    else
    {
        ll j = -1;
        for (ll i = 0; i < n; i++)
        {
            if (isdigit(s[i]))
            {
                j = i;
                break;
            }
        }
        const string x = s.substr(0, j);
        const ll y = stoll(s.substr(j));
        ll z = 0;
        const ll k = x.size();
        for (ll i = 0; i < k; i++)
        {
            z = 26 * z + (x[i] - 'A' + 1);
        }
        ans = "R" + to_string(y) + "C" + to_string(z);
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