// Problem: Row
// Link to the problem: https://codeforces.com/contest/982/problem/A
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
    if (n == 1)
    {
        const string ans = s[0] == '0' ? "No" : "Yes";
        cout << ans << endl;
        return;
    }
    for (ll i = 1; i < n; i++)
    {
        if (s[i] == '1' && s[i - 1] == '1')
        {
            cout << "No" << endl;
            return;
        }
    }
    for (ll i = 1; i < n - 1; i++)
    {
        if (s[i - 1] == '0' && s[i] == '0' && s[i + 1] == '0')
        {
            cout << "No" << endl;
            return;
        }
    }
    if (s.substr(0, 2) == "00" || s.substr(n - 2, 2) == "00")
    {
        cout << "No" << endl;
        return;
    }
    cout << "Yes" << endl;
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