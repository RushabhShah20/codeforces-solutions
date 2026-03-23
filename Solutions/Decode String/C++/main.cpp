// Problem: Decode String
// Link to the problem: https://codeforces.com/contest/1729/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s, ans;
    cin >> s;
    ll i = n - 1;
    while (i >= 0)
    {
        if (s[i] == '0')
        {
            const string t = s.substr(i - 2, 2);
            const ll x = stoll(t);
            const char c = 'a' + x - 1;
            ans.append(1, c);
            i -= 3;
        }
        else
        {
            const ll x = s[i] - '0';
            const char c = 'a' + x - 1;
            ans.append(1, c);
            i--;
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}