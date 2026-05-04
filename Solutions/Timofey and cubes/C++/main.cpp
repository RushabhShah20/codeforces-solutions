// Problem: Timofey and cubes
// Link to the problem: https://codeforces.com/contest/764/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    vector<ll> ans(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> ans[i];
    }
    ll i = 0, j = n - 1;
    while (i <= j)
    {
        swap(ans[i], ans[j]);
        i += 2;
        j -= 2;
    }
    for (ll k = 0; k < n; k++)
    {
        cout << ans[k] << " ";
    }
    cout << endl;
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