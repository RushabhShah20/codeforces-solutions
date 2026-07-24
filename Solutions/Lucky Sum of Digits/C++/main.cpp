// Problem: Lucky Sum of Digits
// Link to the problem: https://codeforces.com/contest/109/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 0; i <= n / 4; i++)
    {
        if ((n - 4 * i) % 7 == 0)
        {
            const ll x = i, y = (n - 4 * i) / 7;
            string ans;
            ans.append(x, '4');
            ans.append(y, '7');
            cout << ans << endl;
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
    solve();
    return 0;
}