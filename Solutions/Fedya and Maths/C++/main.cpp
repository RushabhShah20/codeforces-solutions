// Problem: Fedya and Maths
// Link to the problem: https://codeforces.com/contest/456/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string s;
    cin >> s;
    const ll n = s.size() == 1 ? stoll(s) : stoll(s.substr(s.size() - 2, 2));
    if (n % 4 == 0)
    {
        cout << 4 << endl;
    }
    else
    {
        cout << 0 << endl;
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