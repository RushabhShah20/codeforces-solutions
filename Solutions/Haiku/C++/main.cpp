// Problem: Haiku
// Link to the problem: https://codeforces.com/contest/78/problem/A
#include <bits/stdc++.h>
#define ll long long int
#define ull unsigned long long int
using namespace std;

void solve()
{
    string a, b, c;
    getline(cin, a);
    getline(cin, b);
    getline(cin, c);
    ll x = 0, y = 0, z = 0;
    for (const char t : a)
    {
        if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
        {
            x++;
        }
    }
    for (const char t : b)
    {
        if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
        {
            y++;
        }
    }
    for (const char t : c)
    {
        if (t == 'a' || t == 'e' || t == 'i' || t == 'o' || t == 'u')
        {
            z++;
        }
    }
    if (x == 5 && y == 7 && z == 5)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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