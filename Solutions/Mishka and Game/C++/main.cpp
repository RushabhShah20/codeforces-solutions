// Problem: Mishka and Game
// Link to the problem: https://codeforces.com/contest/703/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, x = 0, y = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll m, c;
        cin >> m >> c;
        if (m > c)
        {
            x++;
        }
        else if (m < c)
        {
            y++;
        }
    }
    if (x > y)
    {
        cout << "Mishka" << endl;
    }
    else if (x < y)
    {
        cout << "Chris" << endl;
    }
    else
    {
        cout << "Friendship is magic!^^" << endl;
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