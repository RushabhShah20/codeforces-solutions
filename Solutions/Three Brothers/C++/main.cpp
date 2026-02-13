// Problem: Three Brothers
// Link to the problem: https://codeforces.com/contest/2010/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    if ((a == 2 && b == 3) || (a == 3 && b == 2))
    {
        cout << 1 << endl;
    }
    else if ((a == 1 && b == 3) || (a == 3 && b == 1))
    {
        cout << 2 << endl;
    }
    else
    {
        cout << 3 << endl;
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