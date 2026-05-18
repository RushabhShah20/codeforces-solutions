// Problem: Up the hill
// Link to the problem: https://codeforces.com/contest/491/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    const ll n = a + b + 1;
    vector<ll> ans(n, 0);
    ll i = n - 1, j = 1;
    while (b > 0)
    {
        b--;
        ans[i] = j;
        j++;
        i--;
    }
    i = 0;
    ans[i] = j;
    j++;
    i++;
    while (a > 0)
    {
        a--;
        ans[i] = j;
        j++;
        i++;
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