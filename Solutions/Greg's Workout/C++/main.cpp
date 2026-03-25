// Problem: Greg's Workout
// Link to the problem: https://codeforces.com/contest/255/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n, a = 0, b = 0, c = 0;
    cin >> n;
    for (ll i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        if (i % 3 == 1)
        {
            b += x;
        }
        else if (i % 3 == 2)
        {
            c += x;
        }
        else
        {
            a += x;
        }
    }
    const ll y = max({a, b, c});
    if (y == a)
    {
        cout << "chest" << endl;
    }
    else if (y == b)
    {
        cout << "biceps" << endl;
    }
    else
    {
        cout << "back" << endl;
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