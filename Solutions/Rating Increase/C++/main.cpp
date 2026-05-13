// Problem: Rating Increase
// Link to the problem: https://codeforces.com/contest/1913/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    for (ll i = n - 1; i >= 1; i--)
    {
        const string a = s.substr(0, i), b = s.substr(i);
        if (a[0] != '0' && b[0] != '0' && stoll(b) > stoll(a))
        {
            cout << a << " " << b << endl;
            return;
        }
    }
    cout << -1 << endl;
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