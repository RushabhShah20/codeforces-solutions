// Problem: Creep
// Link to the problem: https://codeforces.com/contest/1694/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    string ans;
    const ll c = min(a, b);
    for (ll i = 0; i < c; i++)
    {
        ans.append("01");
    }
    a -= c;
    b -= c;
    ans.append(a, '0');
    ans.append(b, '1');
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