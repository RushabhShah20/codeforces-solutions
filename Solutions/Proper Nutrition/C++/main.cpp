// Problem: Proper Nutrition
// Link to the problem: https://codeforces.com/contest/898/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    for (ll x = 0; x <= n / a; x++)
    {
        const ll z = n - a * x;
        if (z % b == 0)
        {
            const ll y = z / b;
            cout << "YES" << endl;
            cout << x << " " << y << endl;
            return;
        }
    }
    cout << "NO" << endl;
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