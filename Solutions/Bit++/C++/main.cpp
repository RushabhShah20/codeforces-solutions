// Problem: Bit++
// Link to the problem: https://codeforces.com/contest/282/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll ans = 0;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "++X")
        {
            ++ans;
        }
        if (s == "X++")
        {
            ans++;
        }
        if (s == "--X")
        {
            --ans;
        }
        if (s == "X--")
        {
            ans--;
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