// Problem: Infinity Gauntlet
// Link to the problem: https://codeforces.com/contest/987/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    ll n;
    cin >> n;
    bool purple = false, blue = false, red = false, orange = false, green = false, yellow = false;
    ll x = 6;
    for (ll i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (s == "purple")
        {
            purple = true;
            x--;
        }
        if (s == "blue")
        {
            blue = true;
            x--;
        }
        if (s == "red")
        {
            red = true;
            x--;
        }
        if (s == "orange")
        {
            orange = true;
            x--;
        }
        if (s == "green")
        {
            green = true;
            x--;
        }
        if (s == "yellow")
        {
            yellow = true;
            x--;
        }
    }
    cout << x << endl;
    if (!purple)
    {
        cout << "Power" << endl;
    }
    if (!blue)
    {
        cout << "Space" << endl;
    }
    if (!red)
    {
        cout << "Reality" << endl;
    }
    if (!orange)
    {
        cout << "Soul" << endl;
    }
    if (!green)
    {
        cout << "Time" << endl;
    }
    if (!yellow)
    {
        cout << "Mind" << endl;
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