// Problem: Triangle
// Link to the problem: https://codeforces.com/contest/6/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    vector<ll> a(4);
    for (ll i = 0; i < 4; i++)
    {
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    if (a[0] + a[1] > a[2] || a[1] + a[2] > a[3])
    {
        cout << "TRIANGLE" << endl;
    }
    else if (a[0] + a[1] == a[2] || a[1] + a[2] == a[3])
    {
        cout << "SEGMENT" << endl;
    }
    else
    {
        cout << "IMPOSSIBLE" << endl;
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