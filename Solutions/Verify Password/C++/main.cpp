// Problem: Verify Password
// Link to the problem: https://codeforces.com/contest/1976/problem/A
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
    string a, b;
    ll j = -1, k = n + 1;
    for (ll i = 0; i < n; i++)
    {
        if (isdigit(s[i]))
        {
            a.append(1, s[i]);
            j = max(j, i);
        }
        else
        {
            b.append(1, s[i]);
            k = min(k, i);
        }
    }
    if (j > k)
    {
        cout << "NO" << endl;
        return;
    }
    for (ll i = 1; i < a.size(); i++)
    {
        if (a[i] < a[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    for (ll i = 1; i < b.size(); i++)
    {
        if (b[i] < b[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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