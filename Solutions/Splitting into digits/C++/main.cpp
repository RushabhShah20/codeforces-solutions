// Problem: Splitting into digits
// Link to the problem: https://codeforces.com/contest/1104/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    for (ll i = 9; i >= 1; i--)
    {
        if (n % i == 0)
        {
            const ll k = n / i;
            cout << k << endl;
            for (ll j = 0; j < k; j++)
            {
                cout << i << " ";
            }
            cout << endl;
            return;
        }
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