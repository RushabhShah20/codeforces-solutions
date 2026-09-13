// Problem: Hamster Farm
// Link to the problem: https://codeforces.com/contest/939/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, k;
    cin >> n >> k;
    ll mn = n + 1, x = 1, y = 0;
    for (ll i = 0; i < k; i++)
    {
        ll z;
        cin >> z;
        if (n % z < mn)
        {
            mn = n % z;
            x = i + 1;
            y = n / z;
        }
    }
    cout << x << " " << y << endl;
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