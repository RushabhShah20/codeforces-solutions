// Problem: Vasily the Bear and Triangle
// Link to the problem: https://codeforces.com/contest/336/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll x, y;
    cin >> x >> y;
    const ll z = abs(x) + abs(y);
    if (x > 0 && y > 0)
    {
        cout << 0 << " " << z << " " << z << " " << 0 << endl;
    }
    else if (x > 0 && y < 0)
    {
        cout << 0 << " " << -z << " " << z << " " << 0 << endl;
    }
    else if (x < 0 && y < 0)
    {
        cout << -z << " " << 0 << " " << 0 << " " << -z << endl;
    }
    else
    {
        cout << -z << " " << 0 << " " << 0 << " " << z << endl;
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