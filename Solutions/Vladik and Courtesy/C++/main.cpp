// Problem: Vladik and Courtesy
// Link to the problem: https://codeforces.com/contest/811/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll a, b;
    cin >> a >> b;
    ll i = 1;
    while (true)
    {
        if (a < i)
        {
            cout << "Vladik" << endl;
            return;
        }
        a -= i;
        i++;
        if (b < i)
        {
            cout << "Valera" << endl;
            return;
        }
        b -= i;
        i++;
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