// Problem: Tokitsukaze and Enhancement
// Link to the problem: https://codeforces.com/contest/1191/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    if (n % 4 == 1)
    {
        cout << 0 << " A" << endl;
    }
    else if (n % 4 == 2)
    {
        cout << 1 << " B" << endl;
    }
    else if (n % 4 == 3)
    {
        cout << 2 << " A" << endl;
    }
    else
    {
        cout << 1 << " A" << endl;
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