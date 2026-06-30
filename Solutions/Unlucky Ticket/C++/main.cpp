// Problem: Unlucky Ticket
// Link to the problem: https://codeforces.com/contest/160/problem/B
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
    string a = s.substr(0, n), b = s.substr(n, n);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    bool x = true, y = true;
    for (ll i = 0; i < n; i++)
    {
        if (a[i] >= b[i])
        {
            x = false;
            break;
        }
    }
    for (ll i = 0; i < n; i++)
    {
        if (a[i] <= b[i])
        {
            y = false;
            break;
        }
    }
    const string ans = x || y ? "YES" : "NO";
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