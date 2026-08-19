// Problem: New Year and Days
// Link to the problem: https://codeforces.com/contest/611/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    string s;
    cin >> s >> s;
    if (s == "week")
    {
        const ll ans = n == 5 || n == 6 ? 53 : 52;
        cout << ans << endl;
    }
    else
    {
        const ll ans = n == 31 ? 7 : (n == 30 ? 11 : 12);
        cout << ans << endl;
    }
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