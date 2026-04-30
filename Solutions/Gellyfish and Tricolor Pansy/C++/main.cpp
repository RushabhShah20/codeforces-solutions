// Problem: Gellyfish and Tricolor Pansy
// Link to the problem: https://codeforces.com/contest/2116/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    if (min(a, c) >= min(b, d))
    {
        cout << "Gellyfish" << endl;
    }
    else
    {
        cout << "Flower" << endl;
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