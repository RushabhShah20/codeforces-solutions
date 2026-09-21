// Problem: Bear and Strings
// Link to the problem: https://codeforces.com/contest/385/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size();
    ll ans = 0, j = -1;
    for (ll i = 0; i < n - 3; i++)
    {
        if (s.substr(i, 4) == "bear")
        {
            j = i;
        }
        if (j != -1)
        {
            ans += j + 1;
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