// Problem: Serval and String Theory
// Link to the problem: https://codeforces.com/contest/2085/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    string a;
    cin >> a;
    string b = a;
    reverse(b.begin(), b.end());
    string c = a;
    sort(c.begin(), c.end());
    if (a == b && b == c)
    {
        cout << "NO" << endl;
        return;
    }
    if (a < b)
    {
        cout << "YES" << endl;
        return;
    }
    const string ans = k != 0 ? "YES" : "NO";
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