// Problem: Double Cola
// Link to the problem: https://codeforces.com/contest/82/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    ll m = 5;
    ll x = 0;
    while (n > m)
    {
        n -= m;
        m *= 2;
        x++;
    }
    n = (n + powl(2, x) - 1) / powl(2, x);
    switch (n)
    {
    case 1:
        cout << "Sheldon" << endl;
        break;
    case 2:
        cout << "Leonard" << endl;
        break;
    case 3:
        cout << "Penny" << endl;
        break;
    case 4:
        cout << "Rajesh" << endl;
        break;
    case 5:
        cout << "Howard" << endl;
        break;
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