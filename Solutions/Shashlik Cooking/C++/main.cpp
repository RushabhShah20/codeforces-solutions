// Problem: Shashlik Cooking
// Link to the problem: https://codeforces.com/contest/1040/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    const ll m = (k << 1) + 1;
    const ll x = (n + m - 1) / m, z = n % m == 0 || n % m > k ? (k + 1) : 1;
    cout << x << endl;
    for (ll i = 0; i < x; i++)
    {
        const ll y = z + i * m;
        cout << y << " ";
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