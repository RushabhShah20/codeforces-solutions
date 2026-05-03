// Problem: XORinacci
// Link to the problem: https://codeforces.com/contest/1208/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, n;
    cin >> a >> b >> n;
    if (n % 3 == 1)
    {
        cout << b << endl;
    }
    else if (n % 3 == 2)
    {
        cout << (a ^ b) << endl;
    }
    else
    {
        cout << a << endl;
    }
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