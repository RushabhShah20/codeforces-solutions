// Problem: Shrink
// Link to the problem: https://codeforces.com/contest/2117/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll i = 0, j = n - 1, k = 1;
    vector<ll> ans(n);
    while (i < j)
    {
        ans[i] = k;
        k++;
        ans[j] = k;
        k++;
        i++;
        j--;
    }
    if (n % 2 != 0)
    {
        ans[n / 2] = n;
    }
    for (i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
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
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}