// Problem: Potions Homework
// Link to the problem: https://codeforces.com/contest/717/problem/C
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    ll ans = 0, l = 0, r = n - 1;
    while (l <= r)
    {
        constexpr ll m = 10007;
        if (l == r)
        {
            ans = (ans + a[l] * a[l]) % m;
            break;
        }
        ans = (ans + 2 * a[l] * a[r]) % m;
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