// Problem: Matrix Rotation
// Link to the problem: https://codeforces.com/contest/1772/problem/B
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void rotate(vector<vector<ll>> &a)
{
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = i + 1; j < 2; j++)
        {
            swap(a[i][j], a[j][i]);
        }
    }
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < 1; j++)
        {
            swap(a[i][j], a[i][1 - j]);
        }
    }
}

bool isSmaller(const vector<vector<ll>> &a)
{
    if (a[0][0] >= a[0][1])
    {
        return false;
    }
    if (a[0][0] >= a[1][0])
    {
        return false;
    }
    if (a[1][0] >= a[1][1])
    {
        return false;
    }
    if (a[0][1] >= a[1][1])
    {
        return false;
    }
    return true;
}

void solve()
{
    vector<vector<ll>> a(2, vector<ll>(2));
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < 2; j++)
        {
            cin >> a[i][j];
        }
    }
    if (isSmaller(a))
    {
        cout << "YES" << endl;
        return;
    }
    rotate(a);
    if (isSmaller(a))
    {
        cout << "YES" << endl;
        return;
    }
    rotate(a);
    if (isSmaller(a))
    {
        cout << "YES" << endl;
        return;
    }
    rotate(a);
    if (isSmaller(a))
    {
        cout << "YES" << endl;
        return;
    }
    cout << "NO" << endl;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    ll t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}