// Problem: Forgetting Things
// Link to the problem: https://codeforces.com/contest/1225/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    char a, b;
    cin >> a >> b;
    if (a == b)
    {
        cout << a << "1 " << b << "2" << endl;
        return;
    }
    if (a == '9' && b == '1')
    {
        cout << a << "9 " << b << "00" << endl;
        return;
    }
    if (b - a == 1)
    {
        cout << a << "9 " << b << "0" << endl;
        return;
    }
    cout << -1 << endl;
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