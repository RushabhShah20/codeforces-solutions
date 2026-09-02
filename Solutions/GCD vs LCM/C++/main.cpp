// Problem: GCD vs LCM
// Link to the problem: https://codeforces.com/contest/1665/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    const ll a = n & 1 ? (n - 3) / 2 : (n % 4 == 0 ? n / 4 : (n - 4) / 2);
    const ll b = n & 1 ? (n - 3) / 2 + 1 : (n % 4 == 0 ? n / 4 : (n - 4) / 2 + 2);
    const ll c = n % 4 == 0 ? n / 4 : 1;
    const ll d = n % 4 == 0 ? n / 4 : 1;
    cout << a << " " << b << " " << c << " " << d << endl;
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