// Problem: Palindrome Dance
// Link to the problem: https://codeforces.com/contest/1040/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    vector<ll> c(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> c[i];
    }
    ll ans = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        if (c[l] == c[r])
        {
            ans += c[l] == 2 ? (l == r ? min(a, b) : (min(a, b) << 1)) : 0;
        }
        else
        {
            if (c[l] == 2)
            {
                ans += c[r] == 0 ? a : b;
            }
            else if (c[r] == 2)
            {
                ans += c[l] == 0 ? a : b;
            }
            else
            {
                cout << -1 << endl;
                return;
            }
        }
        l++;
        r--;
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