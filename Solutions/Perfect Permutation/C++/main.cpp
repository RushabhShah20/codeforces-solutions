// Problem: Perfect Permutation
// Link to the problem: https://codeforces.com/contest/233/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 2 == 0)
    {
        vector<ll> ans(n);
        for (ll i = 0; i < n; i++)
        {
            ans[i] = i + 1;
        }
        for (ll i = 0; i < n - 1; i += 2)
        {
            swap(ans[i], ans[i + 1]);
        }
        for (ll i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << endl;
    }
    else
    {
        cout << -1 << endl;
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