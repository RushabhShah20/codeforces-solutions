// Problem: Beautiful Divisors
// Link to the problem: https://codeforces.com/contest/893/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const vector<ll> a = {130816, 32640, 8128, 2016, 496, 120, 28, 6, 1};
    for (const ll i : a)
    {
        if (n % i == 0)
        {
            cout << i << endl;
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