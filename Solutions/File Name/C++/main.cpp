// Problem: File Name
// Link to the problem: https://codeforces.com/contest/978/problem/B
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
    ll ans = 0, count = 0;
    for (const char c : s)
    {
        if (c == 'x')
        {
            count++;
        }
        else
        {
            ans += max(0LL, count - 2);
            count = 0;
        }
    }
    ans += max(0LL, count - 2);
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