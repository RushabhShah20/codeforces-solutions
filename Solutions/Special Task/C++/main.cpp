// Problem: Special Task
// Link to the problem: https://codeforces.com/contest/316/problem/A1
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    vector<bool> a(10);
    ll ans = 1, k = 10;
    if (s[0] == '?')
    {
        ans *= 9;
    }
    if (isupper(s[0]))
    {
        ans *= 9;
        k--;
        a[s[0] - 'A'] = true;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '?')
        {
            ans *= 10;
        }
        else if (isupper(s[i]) && !a[s[i] - 'A'])
        {
            a[s[i] - 'A'] = true;
            ans *= k;
            k--;
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
    solve();
    return 0;
}