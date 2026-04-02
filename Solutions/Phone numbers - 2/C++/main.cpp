// Problem: Phone numbers
// Link to the problem: https://codeforces.com/contest/25/problem/B
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
    string ans;
    if (n % 2 == 0)
    {
        for (ll i = 0; i < n; i += 2)
        {
            ans += s.substr(i, 2);
            ans += '-';
        }
    }
    else
    {
        ans += s.substr(0, 3);
        ans += '-';
        for (ll i = 3; i < n; i += 2)
        {
            ans += s.substr(i, 2);
            ans += '-';
        }
    }
    ans.erase(ans.size() - 1);
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