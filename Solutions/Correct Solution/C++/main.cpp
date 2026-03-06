// Problem: Correct Solution?
// Link to the problem: https://codeforces.com/contest/12/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string n, m;
    cin >> n >> m;
    sort(n.begin(), n.end());
    if (n == m && n == "0")
    {
        cout << "OK" << endl;
        return;
    }
    if (n.front() == '0')
    {
        swap(n.front(), n[n.find_first_not_of('0')]);
    }
    if (n == m)
    {
        cout << "OK" << endl;
    }
    else
    {
        cout << "WRONG_ANSWER" << endl;
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