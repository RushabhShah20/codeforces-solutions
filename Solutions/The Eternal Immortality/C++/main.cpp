// Problem: The Eternal Immortality
// Link to the problem: https://codeforces.com/contest/869/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll ans = 1;
    for (ll i = a + 1; i <= b; i++)
    {
        const string s = to_string(i);
        ans = ans * (s.back() - '0') % 10;
        if (ans == 0)
        {
            break;
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